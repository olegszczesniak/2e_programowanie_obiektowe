
#include <iostream>

using namespace std;

int main()
{
    
    int x ;
    
    cout<<" Podaj rok: ";
    cin >> x ;
    
    bool y = ( x % 4 == 0 )  || x % 400 == 0 ;
    
    if ( x < 1582)
    
    cout << " W roku " << x << " luty ma 28 dni " ;
    
    else if (y)
    
    cout << " W roku " << x << " luty ma 29 dni " ;
    
    else
    
    cout << " W roku " << x << " luty ma 28 dni " ; 

    return 21;
    
}
