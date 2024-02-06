


#include <iostream>

using namespace std;

double liczenie(int mile)
{

	double kilometr;
	kilometr = mile * 1.609;
	cout << "WYNIK: " << kilometr << endl;
	return 1;

}

int main()
{

	double mile;
	cout << "Podaj ilosc: " << endl;
	cin >> mile;
	liczenie(mile);

}


