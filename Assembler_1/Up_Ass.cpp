#include <iostream>

using namespace std;



void FirstTask(short argName1, short argName2)
{
	
	__asm
	{
	   mov AX , argName1
	   mov BX , argName2
	   mov CX , AX
	   mov AX , BX
	   mov BX , CX
	   mov argName1 , AX
	   mov argName2 , BX

	}
	wcout << L"Test 1 : " << endl;
	wcout <<L"a = " <<  argName1 << endl;
	wcout <<L"b = " << argName2 << endl;
}




int main()
{
	short a;
	short b;
	wcin >> a;
	wcin >> b;
	FirstTask(a, b);

	system("pause");
}