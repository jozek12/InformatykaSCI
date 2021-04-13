#include "Prostokat.h"
#include <iostream>
#include <windows.h>
using namespace std;
prostokat::prostokat()
{
	this->bok2;
	this->bok1;
}
prostokat::~prostokat()
{

}
prostokat::prostokat(int bok1,int bok2)
{
	this->bok1;
	this->bok2;
}
float prostokat::liczenie(int bok1,int bok2)
{
	int prostokat;
	prostokat = (bok1 * 2) + (bok2 * 2);
	if (prostokat < 0)
	{
		prostokat = (-1) * prostokat;
	}
	cout << "obwod prostokata wynosi" << prostokat;
	Sleep(5000);
	return 0;
}
