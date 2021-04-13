#include "trojkat.h"
#include <iostream>
#include <windows.h>
using namespace std;
trojkat::trojkat()
{
	this->bok2;
	this->bok1;
	this->bok3;
}
trojkat::~trojkat()
{

}
trojkat::trojkat(int bok1, int bok2, int bok3)
{
	this->bok1;
	this->bok2;
	this->bok3;
}
float trojkat::liczenie(int bok1, int bok2, int bok3)
{
	int trojkat;
	trojkat = bok1 + bok2 + bok3;
	if (trojkat < 0)
	{
		trojkat=(-1) * trojkat;
	}
	cout << "obwod trojkata wynosi" << trojkat;
	Sleep(5000);
	return 0;
}


