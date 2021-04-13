#include "trapez.h"
#include <iostream>
#include <windows.h>
using namespace std;
trapez::trapez()
{
	this->bok2;
	this->bok1;
	this->bok3;
	this->bok4;
}
trapez::~trapez()
{

}
trapez::trapez(int bok1, int bok2,int bok3,int bok4)
{
	this->bok1;
	this->bok2;
	this->bok3;
	this->bok4;
}
float trapez::liczenie(int bok1, int bok2,int bok3,int bok4)
{
	int trapez;
	trapez = bok1 + bok2 + bok3 + bok4;
	if (trapez < 0)
	{
		trapez = (-1) * trapez;
	}
	cout << "obwod trapezu wynosi" << trapez;
	Sleep(5000);
	return 0;
}

