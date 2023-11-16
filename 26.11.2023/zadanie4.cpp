#include <iostream>


using namespace std;

int main() {
    int tab[10];
    
    for(int b = 0;b < 10; b++){
        cout << "Podaj liczbe: " ;
        cin >> tab[b];
        
    }
    for(int c=9;c >= 0; c--){
        cout << tab[c];
    }

}