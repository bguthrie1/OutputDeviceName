

#include <windows.h>
#include <mmsystem.h>
#include <stdio.h>
#include <conio.h>
#pragma comment(lib, "winmm")

int main()
{
	for (int i = 0; i < 16; i++)
	{
		JOYCAPSA caps;
		joyGetDevCapsA(i, &caps, sizeof(caps));
		printf("joyID:%i | axes:%i | caps:%x | mid:%x | pid:%x | name:%s | RegKey:%s | OEMVxD:%s\n", i, caps.wNumAxes, caps.wCaps, caps.wMid, caps.wPid, caps.szPname, caps.szRegKey, caps.szOEMVxD);
	}
	_getch();
}
