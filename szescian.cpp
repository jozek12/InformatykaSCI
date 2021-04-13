#include "szescian.h"
#include <iostream>
#include <windows.h>
using namespace std;
szescian::szescian()
{
	this->bok1;
}
szescian::~szescian()
{

}
szescian::szescian(int bok1)
{
	this->bok1;
}
float szescian::liczenie(int bok1)
{
	int szescian;
	szescian = bok1 * bok1 * bok1;
	if (szescian < 0)
	{
		szescian = (-1) * szescian;
	}
	cout << "obwod szescianu wynosi" << szescian;
	Sleep(5000);
	return 0;
}
