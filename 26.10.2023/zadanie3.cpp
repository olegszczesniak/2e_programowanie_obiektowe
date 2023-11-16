#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int a;
    cout << "Podaj liczbę rzutów kostką: ";
    cin >> a;

    srand(time(0));

    for (int i = 0; i < a; i++) {
        int b = rand() % 6 + 1;
        cout << "Rzut numer " << (i + 1) << ": " << b << endl;
    }

    return 0;
}