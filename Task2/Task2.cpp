
#include <iostream>

using namespace std;

const double S = -843;
const double Z = 5;

double SecondTask(double  a, double b)
{
	double x;
	__asm
	{
		finit    ; with coprocessor
		fldz
		fsub b
		fdiv a
		fst x
	}
	wcout << L"Second task : " << x << endl;
	return x;
}

void ThirdTask(double x)
{
	double result;
	__asm
	{
		finit   ; with coprocessor

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
	double a;
	double b;
	wcout << L"A = ";
	wcin >> a;
	wcout << L"B = ";
	wcin >> b;
	double x = SecondTask(a, b);
	ThirdTask(x);
	system("pause");
	return 0;
}