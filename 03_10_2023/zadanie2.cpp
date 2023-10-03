#include <iostream>
using namespace std;

int main() {
	int a, b , h , x;

	cout << "Menu: \n 1- kwadrat \n 2- trojkat \n 3- romb \n 4-trapez " << endl << endl;

	cout << "Podaj figure:";
	cin >> x;

	switch (x)
	{
	case 1:
		cout << "Podaj bok: ";
		cin >> a;
		cout << "Pole kwadratu:" << a * a;

	}
}
