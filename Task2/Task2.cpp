
#include <iostream>

using namespace std;

void SecondTask(int  a, int b)
{
	int x;

	__asm
	{
		mov eax, 0
		sub eax, [b]

		mov ebx, [a]
		idiv ebx

		mov [x],eax	   
	}
	wcout << L"Answer : " << x << endl;
}

int main()
{
	int a;
	int b;
	wcout << L"A = ";
	wcin >> a;
	wcout << L"B = ";
	wcin >> b;
	SecondTask(a, b);

	system("pause");
}