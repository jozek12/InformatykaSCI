#include<iostream>
#include "kolo.h"
#include "Prostokat.h"
#include "trapez.h"
#include "trojkat.h"
#include "szescian.h"
using namespace std;
int main()
{
	Kolo Kolo1;
	prostokat prostokat1;
	trapez trapez1;
	trojkat trojkat1;
	szescian szescian1;
	int a = 1;
	unsigned int b;
	unsigned int c;
	unsigned int d;
	unsigned int e;
	while (a == 1)
	{
		cout << "1:kolo\n2:prostokat\n3:trapez\n4:trojkat\n5:szescian";
		cin >> b;
		switch(b)
		{
			case 1:	
		cout << "podaj promien:" << endl;
		cin >> b;
		Kolo1.liczenie(b);
		break;
			case 2:
				cout << "podaj 1 bok"<< endl;
				cin >> b;
				cout << "podaj 2 bok" << endl;
				cin >> c;
				prostokat1.liczenie(b, c);
				break;
			case 3:
				cout << "podaj 1 bok" << endl;
				cin >> b;
				cout << "podaj 2 bok" << endl;
				cin >> c;
				cout << "podaj 3 bok" << endl;
				cin >> d;
				cout << "podaj 4 bok" << endl;
				cin >> e;
				trapez1.liczenie(b, c, d, e);
				break;
			case 4:
				cout << "podaj 1 bok" << endl;
				cin >> b;
				cout << "podaj 2 bok" << endl;
				cin >> c;
				cout << "podaj 3 bok" << endl;
				cin >> d;
				trojkat1.liczenie(b, c, d);
			case 5:
				cout << "podaj bok:" << endl;
				cin >> b;
				szescian1.liczenie(b);
				
		default:
			a = 0;
			break;
		}
		system("cls");

	}
}
