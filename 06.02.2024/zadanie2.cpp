
#include <iostream>
using namespace std;


int fibonaci(int a) {
	int b, c1, c2, wynik;
	if (a < 3) wynik = 1;
	else {
		c1 = 1; c2 = 1;
		for ( b = 3; b <= a; b++)
		{
			wynik = c1 + c2;
			c2 = c1;
			c1 = wynik;
		}
	}
	return wynik;
}

int main() {
	int ile, x;
	cout << " Ile elementow ciagu wyswietlic ? (do 47) \n";
	cin >> ile;

	for (x = 1; x<= ile; x++)
		cout << fibonaci(x) << " ";
	return 1;

}
