#include <iostream>
#include <Windows.h>
#include <stdio.h>
using namespace std;

void openmutexfonk()
{
	HANDLE hopen = OpenMutex(MUTEX_ALL_ACCESS, false, TEXT("iplikmutexi"));
	if (hopen == NULL)
	{
		std::cout << "Mutex Kullanilmiyor" << endl;
	}
	else
	{
		std::cout << "Mutex Kullaniliyor" << endl;
	}
}
int main()
{
		HANDLE hmutex = CreateMutex(NULL, TRUE,TEXT("iplikmutexi"));
		if (hmutex == NULL)
		{
			printf("Mutex Kurulamadý \n");
			return 0;
		}
			if (GetLastError() == ERROR_ALREADY_EXISTS)
		{
			printf("Mutex zaten var\n");
			return 0;
		}
		else
		{
			printf("Mutex kuruldu\n");
		}
			openmutexfonk();
			system("\npause");
			CloseHandle(hmutex);
			return 0;
}
