#include "memory.h"

#include <thread>
#include <iostream>

namespace offset
{
	constexpr ::std::ptrdiff_t dwLocalPlayer = 0xDB35DC;
	constexpr ::std::ptrdiff_t dwEntityList = 0x4DCEEAC;

	constexpr ::std::ptrdiff_t model_ambient_min = 0x59003C;

	constexpr ::std::ptrdiff_t m_clrRender = 0x70;
	constexpr ::std::ptrdiff_t m_iTeamNum = 0xF4;
}

struct Color
{
	std::uint8_t r{ }, g{ }, b{ };
};

int main()
{
	const auto mem = Memory("csgo.exe");
	std::cout << "csgo found!" << std::endl;

	const auto client = mem.GetModuleAddress("client.dll");
	std::cout << "client.dll -> " << "0x" << std::hex << client << std::dec << std::endl;
	const auto engine = mem.GetModuleAddress("engine.dll");

	constexpr const auto teamColor = Color{ 0, 255, 0 };
	constexpr const auto enemyColor = Color{ 255, 0, 0 };
	while (true)
	{
		std::this_thread::sleep_for(std::chrono::milliseconds(1));

		const auto& localPlayer = mem.Read<std::uintptr_t>(client + offset::dwLocalPlayer);
		const auto localTeam = mem.Read<std::int32_t>(localPlayer + offset::m_iTeamNum);

		for (auto i = 1; i <= 32; ++i)
		{
			const auto& entity = mem.Read<std::uintptr_t>(client + offset::dwEntityList + i * 0x10);
			if (mem.Read<std::int32_t>(entity + offset::m_iTeamNum) == localTeam)
			{
				mem.Write<Color>(entity + offset::m_clrRender, teamColor);
			}
			else
			{
				mem.Write<Color>(entity + offset::m_clrRender, enemyColor);
			}

			//Model Brightness
			float brightness = 25.f;
			const auto _this = static_cast<std::uintptr_t>(engine + offset::model_ambient_min - 0x2c);
			mem.Write<std::int32_t>(engine + offset::model_ambient_min, reinterpret_cast<std::uintptr_t>(&brightness) ^ _this);

		}

	}
	return 0;
}