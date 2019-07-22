#include "Base.h"
#include <Windows.h>
int main(int argv, char** argc)
{
	
	HWND hwnd = FindWindow(NULL, "notepad.exe");
	if (hwnd == 0)
	{
		printf("Cannot open file\n");
	}
	DWORD process_id;
	GetWindowThreadProcessId(hwnd, &process_id);
	HANDLE hProc = OpenProcess(PROCESS_ALL_ACCESS, FALSE, process_id);
	DWORD baseAddress = 0x0009B03D0;
	
	printf("dsdsd\n");
	system("pause");
	return 0;
}
