#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	ifstream plik("plik.txt");
	char tekst[10] = {};

	if (!plik) cout << "B³¹d odczytu pliku.";
	else
	{
		plik.seekg(0);
		plik.read(tekst, 4);
	}
	plik.close();

	cout << tekst << endl;

	system("PAUSE");
	return EXIT_SUCCESS;

}
