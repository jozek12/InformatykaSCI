#pragma once
#include<iostream>
using namespace std;
class trojkat {
public:
	trojkat();
	trojkat(int bok1, int bok2, int bok3);
	~trojkat();
	float liczenie(int raz, int dwa, int trzy);
private:
	int bok1;
	int bok2;
	int bok3;
};