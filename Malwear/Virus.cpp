#include <iostream>
#include <Windows.h>
using namespace std;
 		
 
int main()
{
     bool click = true;
		if (click == true) // if click = true it will press the mouse button down and up really fast
		{
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
            mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
			mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
			Sleep(.1); //you can adjust the speed of the click here
		}

 
	return 0;
}