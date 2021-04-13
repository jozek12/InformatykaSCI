#pragma once
#include<iostream>
using namespace std;
class Kolo {
public:
	Kolo();
	Kolo(int promien);
	~Kolo();
	float liczenie(int raz);
private:
	int promien;
};