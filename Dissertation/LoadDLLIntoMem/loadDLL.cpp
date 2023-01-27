#include <windows.h>
#include <iostream>

using namespace std;

void callDLL()
{
    HINSTANCE hInstance;
    hInstance = LoadLibraryW(L"C:\\Windows\\System32\\ntdll.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\ntdll.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\System32\\wow64.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\System32\\wow64win.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\System32\\wow64cpu.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\kernel32.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\KernelBase.dll");
    hInstance = LoadLibraryW(L"C:\\Programr\\Bitdefender Security\\atcuf\\dlls_265827483885032704\\atcuf32.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\oleaut32.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\msvcp_win.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\ucrtbase.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\combase.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\rpcrt4.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\user32.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\win32u.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\gdi32.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\gdi32full.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\advapi32.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\msvcrt.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\sechost.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\shell32.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\ole32.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\shlwapi.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\comdlg32.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\SHCore.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\imm32.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\imagehlp.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\ws2_32.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\Cheat Engine 7.4\\version.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\version.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\Cheat Engine 7.4\\opengl32.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\opengl32.dll");
    hInstance = LoadLibraryW(L"C:\\Windowst.windows.common-controls_6595b64144ccf1df_6.0.19041.1110_none_a8625c1886757984\\comctl32.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\Cheat Engine 7.4\\lua53-32.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\Cheat Engine 7.4\\wsock32.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\wsock32.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\Cheat Engine 7.4\\wininet.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\wininet.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\Cheat Engine 7.4\\GLU32.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\glu32.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\uxtheme.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\Cheat Engine 7.4\\msimg32.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\Cheat Engine 7.4\\win32\\msimg32.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\msimg32.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\rpcss.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\kernel.appcore.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\bcryptprimitives.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\Cheat Engine 7.4\\tcc32-32.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\clbcatq.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\ExplorerFrame.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\shfolder.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\windows.storage.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\Cheat Engine 7.4\\Wldp.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\Cheat Engine 7.4\\win32\\Wldp.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\wldp.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\Cheat Engine 7.4\\profapi.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\Cheat Engine 7.4\\win32\\profapi.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\profapi.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\psapi.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\Cheat Engine 7.4\\PROPSYS.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\Cheat Engine 7.4\\win32\\PROPSYS.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\propsys.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\msctf.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\ntdll.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\kernel32.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\KernelBase.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\Bitdefender\\Bitdefender Security\\atcuf\\dlls_265827483885032704\\atcuf32.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\oleaut32.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\msvcp_win.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\ucrtbase.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\combase.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\rpcrt4.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\user32.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\win32u.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\gdi32.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\gdi32full.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\advapi32.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\msvcrt.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\sechost.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\shell32.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\ole32.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\shlwapi.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\comdlg32.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\SHCore.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\imm32.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\imagehlp.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\ws2_32.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\version.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\opengl32.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\WinSxS\\x86_microsoft.windows.common-controls_6595b64144ccf1df_6.0.19041.1110_none_a8625c1886757984\\comctl32.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\Cheat Engine 7.4\\lua53-32.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\wsock32.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\wininet.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\glu32.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\uxtheme.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\msimg32.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\kernel.appcore.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\bcryptprimitives.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\Cheat Engine 7.4\\tcc32-32.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\clbcatq.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\ExplorerFrame.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\shfolder.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\windows.storage.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\wldp.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\profapi.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\psapi.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\propsys.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\msctf.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\Cheat Engine 7.4\\win32\\dbghelp.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\Cheat Engine 7.4\\win32\\symsrv.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\uxtheme.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\Cheat Engine 7.4\\win32\\symsrv.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\Cheat Engine 7.4\\dwmapi.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\Cheat Engine 7.4\\win32\\dwmapi.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\dwmapi.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\System32\\wow64win.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\Cheat Engine 7.4\\TextShaping.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\Cheat Engine 7.4\\win32\\TextShaping.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\TextShaping.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\Cheat Engine 7.4\\Xinput1_4.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\Cheat Engine 7.4\\win32\\Xinput1_4.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\XInput1_4.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\cfgmgr32.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\XInput1_4.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\Cheat Engine 7.4\\DEVOBJ.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\Cheat Engine 7.4\\win32\\DEVOBJ.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\devobj.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\InputHost.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\Cheat Engine 7.4\\CoreMessaging.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\Cheat Engine 7.4\\win32\\CoreMessaging.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\CoreMessaging.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\WinTypes.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\Cheat Engine 7.4\\CoreUIComponents.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\Cheat Engine 7.4\\win32\\CoreUIComponents.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\CoreUIComponents.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\ntmarta.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\Cheat Engine 7.4\\lfs.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\lib\\lua\\5.3\\lfs.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\Cheat Engine 7.4\\lfs.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\Cheat Engine 7.4\\lfs53.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\Cheat Engine 7.4\\clibs32\\lfs.dll");
    hInstance = LoadLibraryW(L"C:\\Windows\\SysWOW64\\TextInputFramework.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\Cheat Engine 7.4\\win32\\symsrv.dll");
    hInstance = LoadLibraryW(L"C:\\Program Files\\Cheat Engine 7.4\\win32\\sqlite3.dll");

    if (!hInstance)
    {
        cout << "Failed to load dll" << endl;
        exit(1);
    }
}
int main()
{
    callDLL();

    while (true)
    {
        cout << "Program Running" << endl;
    }

    return 0;
}