
#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

int main()
{
    
    int liczba1,liczba2,typ,wynik;
    
    cout << "Menu: \n1 - dodawanie \n2 - odejmowanie \n3 - mnozenie \n4 - dzielenie \n0 - koniec"  << endl << endl;
    
    cout<<"podaj liczbe: " << endl;
    cin >> liczba1;
 
    cout << "podaj druga liczbe: "<< endl;
    cin >> liczba2;
    
    cout << "podaj typ dzialania: " << endl;
    cin >> typ;
    
    if (typ==1) 
    wynik=liczba1+liczba2 ;
    
    else if (typ==2)
    wynik= liczba1-liczba2 ;
    
    else if (typ==3)
    wynik= liczba1*liczba2 ;
    
    else if (typ==4)
    wynik= liczba1/liczba2 ;
    
    else if (typ==0)
    return 0;
    
    cout << "Wynik: " << wynik << endl;

    return 1;
    
}
