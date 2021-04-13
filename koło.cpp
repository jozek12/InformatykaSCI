#include "kolo.h"
#include <iostream>
#include<Windows.h>

Kolo::Kolo()
{
	this->promien;
}
Kolo::~Kolo()
{

}
Kolo::Kolo(int promien)
{
	this->promien = promien;
}
float Kolo::liczenie(int promien)
{
	int kolo;
	kolo = 2 * 3.14 * promien;
	if (kolo < 0)
	{
		kolo = (-1) * kolo;
	}
	cout << "obwod kola wynosi" << kolo;
	Sleep(5000);
	return 0;
}

