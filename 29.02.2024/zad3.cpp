

// PRACA W TRAKCIE

// PRACA W TRAKCIE

// PRACA W TRAKCIE

// PRACA W TRAKCIE

#include <iostream>
using namespace std;

void pobierzLancuch(string& lancuch) {
	cin >> lancuch;
}

void sumaLancuchow(string lancuch1, string lancuch2, string& lancuch3)
{
	lancuch3 = lancuch 1 + " " + lancuch2;
}

void wyswietlLancuch(string lancuch)
{
	cout << lancuch << endl;
}

int main() {
	string nazwaJezyka = "", wersjaJezyka = "";
	string jezyk = "";

	cout << "podaj nazwe jezyka programowania: ";
	pobierzLancuch(nazwaJezyka);


	cout << "podaj wersje";
	pobierzLancuch(wersjaJezyka);

	sumaLancuchow(nazwaJezyka, wersjaJezyka, jezyk);

	cout << "Jezyk Programowania: " ;
	wyswietlLancuch(jezyk);

	reurn 1;
}








