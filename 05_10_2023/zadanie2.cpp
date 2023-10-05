
#include <iostream>

using namespace std;

int main()
{
  int x, y ;
  cout << "Podaj pierwsza liczbe: ";
   cin >> x ; 
   cout << "Podaj druga liczbe: ";
   cin >> y ;
   
   if (x%y==0)
   cout << "liczba "<< x << " jest podzielna przez " << y ;
    else
    cout << "liczba "<< x << " nie jest podzielna bez reszty  " ;
    
    return 0;
}
