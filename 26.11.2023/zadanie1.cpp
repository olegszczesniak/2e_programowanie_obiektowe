#include <iostream>
#include <cmath>
#include<string>

using namespace std;


int main()
{
    string n = "1010";
    int number;
    for (int i = n.length()-1; i >= 0; i--) {
        string znak = n.substr(i, 1);
        number = stoi(znak);
        cout << number * pow(2, n.length() - 1 - i) << endl;
    }
    
    return 0;
}