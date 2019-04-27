
#include <iostream>

using namespace std;

void SecondTask(int  a, int b)
{
	float x;
	__asm
	{
		finit
		fldz
		fsub b
		fdiv a
		fstp x
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