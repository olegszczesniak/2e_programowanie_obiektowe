// ConsoleApplication2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
    int nr_marki;
    cout << "Wprowadz numer z przedzialow od 1 do 30:";
    cin >> nr_marki;

    switch (nr_marki)

    {

    case 1:
        cout << "Audi";
            break;

    case 2:
        cout << "BMW";
        break;


    case 3:
        cout << "Citroen";
        break;


    case 4:
        cout << "Dacia";
        break;


    case 5:
        cout << "Fiat";
        break;

    case 6:
        cout << "Ford";
        break;

    case 7:
        cout << "Hyundai";
        break;

    case 8:
        cout << "Kia";
        break;

    case 9:
        cout << "Mercedes";
        break;

    case 10:
        cout << "Nissan";
        break;

    case 11:
        cout << "Opel";
        break;

    case 12:
        cout << "Peugeuot";
        break;

    case 13:
        cout << "Renault";
        break;

    case 14:
        cout << "Seat";
        break;

    case 15:
        cout << "Skoda";
        break;

    case 16:
        cout << "Toyota";
        break;

    case 17:
        cout << "Volkswagen";
        break;

    case 18:
        cout << "Volvo";
        break;


    case 19:
        cout << "Abarth";
        break;

    case 20:
        cout << "Alpina";
        break;

    case 21:
        cout << "Bentley";
        break;

    case 22:
        cout << "BYD";
        break;

    case 23:
        cout << "Cupra";
        break;

    case 24:
        cout << "Dodge";
        break;

    case 25:
        cout << "DS";
        break;

    case 26:
        cout << "Ferrari";
        break;


    case 27:
        cout << "Honda";
        break;

    case 28:
        cout << "Isuzu";
        break;

    case 29:
        cout << "Lamborghini";
        break;

    case 30:
        cout << "Jeep";
        break;

    default:
        cout << "Podana bledna liczbe";
    }
}
