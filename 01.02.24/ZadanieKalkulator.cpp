
#include <iostream>
using namespace std;

double odejmowanie(double a, double b);

double dodawanie(double a, double b);

double dzielenie(double a, double b);

double mnozenie(double a, double b);


int main()

{

	double a, b;
	int znak;
	cout << "1 = + , 2 = - , 3 = * , 4 = / \n";
	cout << "Podaj pierwsza liczbe: ";
	cin >> a;


	do {
		cout << "Podaj znak: ";
		cin >> znak;
	} while (znak < 1 || znak > 4);


	cout << "Podaj druga liczbe: ";
	cin >> b;

	if (znak == '%' && b == 0)
	{
		cout << "NIE DZIEL PRZEZ 0";
		return 0;
	}


	switch (znak) {


	case 1:
		cout << "Suma to: " << dodawanie(a, b);
		break;


	case 2:
		cout << "Roznica to: " << odejmowanie(a, b);
		break;


	case 3:
		cout << "Iloczyn to: " << mnozenie(a, b);
		break;


	case 4:
		cout << "Iloraz to: " << dzielenie(a, b);
		break;
	}


}

double dodawanie(double a, double b)
{
	return a + b;
}

double odejmowanie(double a, double b)
{
	return a - b;
}

double mnozenie(double a, double b)
{
	return a * b;
}

double dzielenie(double a, double b)
{
	return a / b;
}

