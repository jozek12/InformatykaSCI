#pragma once
#include<iostream>
using namespace std;
class trapez {
public:
	trapez();
	trapez(int bok1, int bok2,int bok3,int bok4);
	~trapez();
	float liczenie(int raz, int dwa,int trzy, int cztery);
private:
	int bok1;
	int bok2;
	int bok3;
	int bok4;
};