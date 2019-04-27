
#include <iostream>

using namespace std;

const float S = 2;
const float Z = 1;

float SecondTask(float  a, float b)
{
	float x;
	__asm
	{
		finit
		fldz
		fsub b
		fdiv a
		fst x
	}
	wcout << L"Second task : " << x << endl;
	return x;
}

void ThirdTask(float x)
{
	float result;
	float x1;
	float x2;
	__asm
	{
		finit
		fldz
		fld S
		fsub
		fld Z
		fmul
		fld x
		fadd
		fld S
		fld Z
		fmul
		fld x
		fadd
		fdiv
		fld S
		fmul

		fstp result
	}
	wcout << "Third task : " << result << endl;
}

int main()
{
	float a;
	float b;
	wcout << L"A = ";
	wcin >> a;
	wcout << L"B = ";
	wcin >> b;
	float x = SecondTask(a, b);
	ThirdTask(x);
	system("pause");
}