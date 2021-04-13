#pragma once
#include<iostream>
using namespace std;
class prostokat {
public:
	prostokat();
	prostokat(int bok1,int bok2);
	~prostokat();
	float liczenie(int raz,int dwa);
private:
	int bok1;
	int bok2;
};
