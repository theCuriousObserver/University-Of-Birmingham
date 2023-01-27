#include "memory.h"
#include <iostream>
#include <thread>

namespace offset
{
	constexpr ::std::ptrdiff_t dwLocalPlayer = 0xDB35DC;
	constexpr ::std::ptrdiff_t dwEntityList = 0x4DCEEAC;
	constexpr ::std::ptrdiff_t dwForceAttack = 0x31FF3C0;

	constexpr ::std::ptrdiff_t m_iTeamNum = 0xF4;
	constexpr ::std::ptrdiff_t m_iHealth = 0x100;
	constexpr ::std::ptrdiff_t m_iCrosshairId = 0x11838;
}

int main()
{
	const auto mem = Memory("csgo.exe");

	std::cout << "csgo found!" << std::endl;

	const auto client = mem.GetModuleAddress("client.dll");
	std::cout << "client.dll -> "
			  << "0x" << std::hex << client << std::dec << std::endl;

	while (true)
	{
		std::this_thread::sleep_for(std::chrono::milliseconds(1));

		// skip trigger key isn't down
		if (GetAsyncKeyState(VK_SHIFT))
			continue;

		const auto &localPlayer = mem.Read<std::uintptr_t>(client + offset::dwLocalPlayer);
		const auto &localHealth = mem.Read<std::int32_t>(localPlayer + offset::m_iHealth);
		const auto localPlayerTeam = mem.Read<std::int32_t>(localPlayer + offset::m_iTeamNum);

		// skip if local player is dead
		if (!localHealth)
			continue;

		const auto &crosshairId = mem.Read<std::int32_t>(localPlayer + offset::m_iCrosshairId);

		// skip if crosshead not pointing player
		if (!crosshairId || crosshairId > 64)
			continue;

		const auto &player = mem.Read<std::uintptr_t>(client + offset::dwEntityList + (crosshairId - 1) * 0x10);

		// skip if player dead
		if (!mem.Read<std::int32_t>(player + offset::m_iHealth))
			continue;

		if (mem.Read<std::int32_t>(player + offset::m_iTeamNum) == localPlayerTeam)
			continue;

		mem.Write<std::uintptr_t>(client + offset::dwForceAttack, 6);
		std::this_thread::sleep_for(std::chrono::milliseconds(20));
		mem.Write<std::uintptr_t>(client + offset::dwForceAttack, 4);
	}

	return 0;
}