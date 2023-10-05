
#include <iostream>

using namespace std;

int main()
{
    int x ;
    cout<<"Podaj wiek: ";
    cin >> x ;
    
    if(x<=11 && x>=0)
    cout << "Jest dzieckiem! " ; 
    
    else if(x>11 && x<=17)
    cout << "Jest nastolatkiem! " ;
    
    else
    cout<< "Jest dorosly! " ;

    return 0;
}
