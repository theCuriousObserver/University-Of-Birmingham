# With the help of this script, you can load series of DLLs that run in the memory once the program runs successfully as executable.

# Reference: https://stackoverflow.com/questions/252417/how-can-i-use-a-dll-file-from-python

# To fix the error message: OSError: [WinError 193] %1 is not a valid Win32 application follow these steps:
# Install Python 3 (32-bit) along with Python 3 (64-bit)
# Run this script with C:\Users\palla\AppData\Local\Programs\Python\Python310-32\python.exe loadDLL.py
# Make an executable of this script with C:\Users\palla\AppData\Local\Programs\Python\Python310-32\Scripts\pyinstaller.exe loadDLL.py
# Install pyinstaller (32-bit) with C:\Users\palla\AppData\Local\Programs\Python\Python310-32\Scripts\pip.exe install pyinstaller

# wow64, wow64win, wow64cpu DLL errors can be fixed by running this script with python 64-bit. But then the 32-bit DLLs throw the following error: OSError: [WinError 193] %1 is not a valid Win32 application
# Rest Cheat Engine DLLs throw the following error: "Could not find module (or one of its dependencies). Try using the full path with constructor syntax." Even after using os.add_dll_directory this error still appears.

import os
from ctypes import *
from shutil import ExecError

# Load DLLs into memory.

os.add_dll_directory(r'C:\Program Files')
os.add_dll_directory(r'C:\Windows')


def runDLL():
    dll_names = []
    dll_names.append(r'C:\Windows\System32\ntdll.dll')
    dll_names.append(r'C:\Windows\SysWOW64\ntdll.dll')
    # dll_names.append(r'C:\Windows\System32\wow64.dll')
    # dll_names.append(r'C:\Windows\System32\wow64win.dll')
    # dll_names.append(r'C:\Windows\System32\wow64cpu.dll')
    dll_names.append(r'C:\Windows\SysWOW64\kernel32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\KernelBase.dll')
    # dll_names.append(r'C:\Programr\Bitdefender Security\atcuf\dlls_265827483885032704\atcuf32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\oleaut32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\msvcp_win.dll')
    dll_names.append(r'C:\Windows\SysWOW64\ucrtbase.dll')
    dll_names.append(r'C:\Windows\SysWOW64\combase.dll')
    dll_names.append(r'C:\Windows\SysWOW64\rpcrt4.dll')
    dll_names.append(r'C:\Windows\SysWOW64\user32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\win32u.dll')
    dll_names.append(r'C:\Windows\SysWOW64\gdi32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\gdi32full.dll')
    dll_names.append(r'C:\Windows\SysWOW64\advapi32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\msvcrt.dll')
    dll_names.append(r'C:\Windows\SysWOW64\sechost.dll')
    dll_names.append(r'C:\Windows\SysWOW64\shell32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\ole32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\shlwapi.dll')
    dll_names.append(r'C:\Windows\SysWOW64\comdlg32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\SHCore.dll')
    dll_names.append(r'C:\Windows\SysWOW64\imm32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\imagehlp.dll')
    dll_names.append(r'C:\Windows\SysWOW64\ws2_32.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\version.dll')
    dll_names.append(r'C:\Windows\SysWOW64\version.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\opengl32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\opengl32.dll')
    # dll_names.append(r'C:\Windowst.windows.common-controls_6595b64144ccf1df_6.0.19041.1110_none_a8625c1886757984\comctl32.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\lua53-32.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\wsock32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\wsock32.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\wininet.dll')
    dll_names.append(r'C:\Windows\SysWOW64\wininet.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\GLU32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\glu32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\uxtheme.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\msimg32.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\win32\msimg32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\msimg32.dll')
    # dll_names.append(r'C:\Windows\SysWOW64\rpcss.dll')
    dll_names.append(r'C:\Windows\SysWOW64\kernel.appcore.dll')
    dll_names.append(r'C:\Windows\SysWOW64\bcryptprimitives.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\tcc32-32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\clbcatq.dll')
    dll_names.append(r'C:\Windows\SysWOW64\ExplorerFrame.dll')
    dll_names.append(r'C:\Windows\SysWOW64\shfolder.dll')
    dll_names.append(r'C:\Windows\SysWOW64\windows.storage.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\Wldp.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\win32\Wldp.dll')
    dll_names.append(r'C:\Windows\SysWOW64\wldp.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\profapi.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\win32\profapi.dll')
    dll_names.append(r'C:\Windows\SysWOW64\profapi.dll')
    dll_names.append(r'C:\Windows\SysWOW64\psapi.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\PROPSYS.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\win32\PROPSYS.dll')
    dll_names.append(r'C:\Windows\SysWOW64\propsys.dll')
    dll_names.append(r'C:\Windows\SysWOW64\msctf.dll')
    dll_names.append(r'C:\Windows\SysWOW64\ntdll.dll')
    dll_names.append(r'C:\Windows\SysWOW64\kernel32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\KernelBase.dll')
    # dll_names.append(r'C:\Program Files\Bitdefender\Bitdefender Security\atcuf\dlls_265827483885032704\atcuf32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\oleaut32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\msvcp_win.dll')
    dll_names.append(r'C:\Windows\SysWOW64\ucrtbase.dll')
    dll_names.append(r'C:\Windows\SysWOW64\combase.dll')
    dll_names.append(r'C:\Windows\SysWOW64\rpcrt4.dll')
    dll_names.append(r'C:\Windows\SysWOW64\user32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\win32u.dll')
    dll_names.append(r'C:\Windows\SysWOW64\gdi32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\gdi32full.dll')
    dll_names.append(r'C:\Windows\SysWOW64\advapi32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\msvcrt.dll')
    dll_names.append(r'C:\Windows\SysWOW64\sechost.dll')
    dll_names.append(r'C:\Windows\SysWOW64\shell32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\ole32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\shlwapi.dll')
    dll_names.append(r'C:\Windows\SysWOW64\comdlg32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\SHCore.dll')
    dll_names.append(r'C:\Windows\SysWOW64\imm32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\imagehlp.dll')
    dll_names.append(r'C:\Windows\SysWOW64\ws2_32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\version.dll')
    dll_names.append(r'C:\Windows\SysWOW64\opengl32.dll')
    # dll_names.append(r'C:\Windows\WinSxS\x86_microsoft.windows.common-controls_6595b64144ccf1df_6.0.19041.1110_none_a8625c1886757984\comctl32.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\lua53-32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\wsock32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\wininet.dll')
    dll_names.append(r'C:\Windows\SysWOW64\glu32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\uxtheme.dll')
    dll_names.append(r'C:\Windows\SysWOW64\msimg32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\kernel.appcore.dll')
    dll_names.append(r'C:\Windows\SysWOW64\bcryptprimitives.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\tcc32-32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\clbcatq.dll')
    dll_names.append(r'C:\Windows\SysWOW64\ExplorerFrame.dll')
    dll_names.append(r'C:\Windows\SysWOW64\shfolder.dll')
    dll_names.append(r'C:\Windows\SysWOW64\windows.storage.dll')
    dll_names.append(r'C:\Windows\SysWOW64\wldp.dll')
    dll_names.append(r'C:\Windows\SysWOW64\profapi.dll')
    dll_names.append(r'C:\Windows\SysWOW64\psapi.dll')
    dll_names.append(r'C:\Windows\SysWOW64\propsys.dll')
    dll_names.append(r'C:\Windows\SysWOW64\msctf.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\win32\dbghelp.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\win32\symsrv.dll')
    dll_names.append(r'C:\Windows\SysWOW64\uxtheme.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\win32\symsrv.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\dwmapi.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\win32\dwmapi.dll')
    dll_names.append(r'C:\Windows\SysWOW64\dwmapi.dll')
    # dll_names.append(r'C:\Windows\System32\wow64win.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\TextShaping.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\win32\TextShaping.dll')
    dll_names.append(r'C:\Windows\SysWOW64\TextShaping.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\Xinput1_4.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\win32\Xinput1_4.dll')
    dll_names.append(r'C:\Windows\SysWOW64\XInput1_4.dll')
    dll_names.append(r'C:\Windows\SysWOW64\cfgmgr32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\XInput1_4.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\DEVOBJ.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\win32\DEVOBJ.dll')
    dll_names.append(r'C:\Windows\SysWOW64\devobj.dll')
    dll_names.append(r'C:\Windows\SysWOW64\InputHost.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\CoreMessaging.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\win32\CoreMessaging.dll')
    dll_names.append(r'C:\Windows\SysWOW64\CoreMessaging.dll')
    dll_names.append(r'C:\Windows\SysWOW64\WinTypes.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\CoreUIComponents.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\win32\CoreUIComponents.dll')
    dll_names.append(r'C:\Windows\SysWOW64\CoreUIComponents.dll')
    dll_names.append(r'C:\Windows\SysWOW64\ntmarta.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\lfs.dll')
    # dll_names.append(r'C:\Program Files\lib\lua\5.3\lfs.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\lfs.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\lfs53.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\clibs32\lfs.dll')
    dll_names.append(r'C:\Windows\SysWOW64\TextInputFramework.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\win32\symsrv.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\win32\sqlite3.dll')
    return dll_names


# DEBUG:
dll_names = runDLL()
dll_names = list(set(dll_names))  # Remove duplicate DLLs
for i in range(len(dll_names)):
    dll_check = dll_names[i]
    try:
        WinDLL(dll_check)
    except Exception as error:
        print(dll_check)
        print(error)
    continue

# Running the DLLs:
while True:
    dll_names = runDLL()
    dll_names = list(set(dll_names))  # Remove duplicate DLLs
    for i in range(len(dll_names)):
        dll_check = dll_names[i]
        WinDLL(dll_check)
        print("Code Running")
