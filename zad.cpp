#include <iostream>
using namespace std;


//Praca w trakcie
//Praca w trakcie 
//Praca w trakcie
//Praca w trakcie
//Praca w trakcie
//Praca w trakcie
//Praca w trakcie
//Praca w trakcie
//Praca w trakcie
//Praca w trakcie
//Praca w trakcie
//Praca w trakcie
//Praca w trakcie
//Praca w trakcie
//Praca w trakcie
//Praca w trakcie
//Praca w trakcie

void kilometry(double ilosc, int jednostka2, int jednostka3)
{
	switch (jednostka3) {
	case 1:
		cout << "Kocham Prawo";
		break;

	case 2:
		cout << ilosc ;
		break;

	case 3:
		cout << ilosc ;
		break;

	case 4:
		cout << ilosc ;
		break;

	case 5:
		cout << ilosc ;
		break;

	case 6:
		cout << ilosc ;
		break;

	}

//bity,bajty,kilobajty,megabajty,gigabajty,terabajty

void bity(double ilosc, int jednostka, int jednostka1)
{
	switch (jednostka1) {
	case 1:
		cout << "Kocham Prawo";
		break;

	case 2:
		cout << ilosc /8;
		break;

	case 3:
		cout << ilosc /8 / 1024;
		break;

	case 4:
		cout << ilosc /8 /1024 /1024;
		break;

	case 5:
		cout << ilosc /8 /1024 /1024 /1024 ;
		break;

	case 6:
		cout << ilosc /8 /1024 /1024 /1024 /1024;
		break;

	}
}
void bajty(double ilosc, int jednostka, int jednostka1)
{
	switch (jednostka1) {

	case 1:
		cout << ilosc * 8;
		break;

	case 2:
		cout << "Kocham Prawo";
		break;

	case 3:
		cout << ilosc /1024;
		break;

	case 4:
		cout << ilosc / 1024 / 1024;
		break;

	case 5:
		cout << ilosc /1024 /1024 /1024;
		break;

	case 6:
		cout << ilosc /1024 /1024 /1024 /1024;
		break;

	}
}
void kilobajty(double ilosc, int jednostka, int jednostka1)
{
	switch (jednostka1) {

	case 1:
		cout << ilosc * 8 * 1024;
		break;

	case 2:
		cout << ilosc * 1024;
		break;
	case 3:
		cout << "Kocham Prawo";
		break;

	case 4:
		cout << ilosc /1024;
		break;

	case 5:
		cout << ilosc /1024 /1024;
		break;

	case 6:
		cout << ilosc /1024 /1024 /1024;
		break;
	}
}
void megabajty(double ilosc, int jednostka, int jednostka1)
{
	switch (jednostka1) {

	case 1:
		cout << ilosc * 8 * 1024 * 1024;
		break;

	case 2:
		cout << ilosc * 1024 * 1024;
		break;

	case 3:
		cout << ilosc * 1024;
		break;
	case 4:
		cout << "Kocham Prawo";
		break;

	case 5:
		cout << ilosc /1024;
		break;

	case 6:
		cout << ilosc /1024 /1024 ;
		break;

	
	}
}
void gigabajty(double ilosc, int jednostka, int jednostka1)
{
	switch (jednostka1) {

	case 1:
		cout << ilosc * 8 * 1024 * 1024 * 1024;
		break;

	case 2:
		cout << ilosc * 1024 * 1024 *1024;
		break;

	case 3:
		cout << ilosc * 1024 * 1024;
		break;

	case 4:
		cout << ilosc * 1024;
		break;

	case 5:
		cout << "Kocham Prawo";
		break;

	case 6:
		cout << ilosc /1024 ;
		break;

	
	}
}
void terabajty(double ilosc, int jednostka, int jednostka1)
{
	switch (jednostka1) {

	case 1:
		cout << ilosc * 8 * 1024 * 1024 * 1024 * 1024;
		break;

	case 2:
		cout << ilosc * 1024 * 1024 * 1024 * 1024;
		break;

	case 3:
		cout << ilosc * 1024 * 1024 * 1024;
		break;

	case 4:
		cout << ilosc * 1024 * 1024;
		break;

	case 5:
		cout << ilosc * 1024;
		break;

	case 6:
		cout << "Kocham Prawo";
		break;
	}
}
	void zamiana(double ilosc, int jednostka, int jednostka1)
	{
		switch (jednostka) {

		case 1:
			bity(ilosc, jednostka, jednostka1);
			break;

		case 2:
			bajty(ilosc, jednostka, jednostka1);
			break;

		case 3:
			kilobajty(ilosc, jednostka, jednostka1);
			break;

		case 4:
			megabajty(ilosc, jednostka, jednostka1);
			break;

		case 5:
			gigabajty(ilosc, jednostka, jednostka1);
				break;

		case 6:
			terabajty(ilosc, jednostka, jednostka1);
		    break;
		}
	}


int main()
{
	double ilosc;
	cout << "Podaj ilosc:" << endl;
	cin >> ilosc;
	int jednostka, jednostka1;
	cout << "Podaj  co chcesz zamienic: \n 1.bity \n 2.bajty \n 3.kilobajty \n 4.megabjty \n 5.gigabajty \n 6.terabajty \n" << endl;
	cin >> jednostka;
	cout << "Podaj na co chcesz zamienic: \n 1.bity \n 2.bajty \n 3.kilobajty \n 4.megabjty \n 5.gigabajty \n 6.terabajty \n" << endl;
	cin >> jednostka1;
	zamiana(ilosc, jednostka, jednostka1);
}
