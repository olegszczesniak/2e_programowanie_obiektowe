#include <iostream>

using namespace std;

int main()
{
    int suma = 0;
    int ujemne = 0;
    int dodatnie = 0;
    int parzyste = 0;
    int nieparzyste = 0;
    int ostatnialiczba = -1;
    int liczba;

    while (true) {
        cout << "Podaj liczbe: ";
        cin >> liczba;

        if (liczba == ostatnialiczba) {
            cout << "Liczba jest taka sama jak ostatnia!!! " << endl;
            cout << "" << endl;
            cout << "Ostatnia wpisana liczba to: " << ostatnialiczba << endl;
            cout << "Ilosc podanych liczb: " << (ujemne + dodatnie) << endl;
            cout << "Ilosc podanych liczb ujemnych: " << ujemne << endl;
            cout << "Ilosc podanych liczb dodatnich: " << dodatnie << endl;
            cout << "Ilosc podanych liczb przystych: " << parzyste << endl;
            cout << "Ilosc podanych liczb nieparzystych: " << nieparzyste << endl;
            break;
        }

        suma = suma + liczba;

        if (liczba < 0) {
            ujemne++;
        }
        else {
            dodatnie++;
        }

        if (liczba % 2 == 0) {
            parzyste++;
        }
        else {
            nieparzyste++;
        }

        ostatnialiczba = liczba;

        if (suma > 100 || ujemne > 10) {
            cout << "Ostatnia wpisana liczba to: " << ostatnialiczba << endl;
            cout << "Ilosc podanych liczb: " << (ujemne + dodatnie) << endl;
            cout << "Ilosc podanych liczb ujemnych: " << ujemne << endl;
            cout << "Ilosc podanych liczb dodatnich: " << dodatnie << endl;
            cout << "Ilosc podanych liczb przystych: " << parzyste << endl;
            cout << "Ilosc podanych liczb nieparzystych: " << nieparzyste << endl;
            break;
        }

       
    }
}