#include <iostream>
#include <string>
using namespace std;

int main()
{

	string login = "login1";
	string haslo = "haslo1";
	int bledy = 3;

	do {
		cout << "Wprowadz login: ";
		cin >> login;

		if (login != "login1")
		{
			cout << "Bledny login!\n";
			bledy--;
		}
		else
		{
			do {
				cout << "Wprowadz haslo: ";
				cin >> haslo;

				if (haslo != "haslo1")
				{
					cout << "Bledne haslo!\n";
					bledy--;
				}
				else
				{
					cout << "Zalogowano";
					goto exit;
				}
			} while (bledy > 0);
		}
		if (bledy == 0)
		{
			cout << "Zablokowano mozliwosc logowania";
		}
	} while (bledy > 0);

	return 0;
	
}