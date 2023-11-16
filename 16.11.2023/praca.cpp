#include <iostream>
using namespace std;

int main()
{
	/*
	 1 | 2 | 3
	 4 | 5 | 6
	 7 | 8 | 9
	 */

	int wybrane;
	string znak;
	int wygraneX = 0, wygraneO = 0, remis = 0;
	string kontynuacja;
	int n = 0;

	gra:
	string tabela[3][3];
	tabela[0][0] = "1";
	tabela[1][0] = "2";
	tabela[2][0] = "3";
	tabela[0][1] = "4";
	tabela[1][1] = "5";
	tabela[2][1] = "6";
	tabela[0][2] = "7";
	tabela[1][2] = "8";
	tabela[2][2] = "9";
	for (n = 0; n <= 9; n++)
	{

		cout << " " << tabela[0][0] << " | " << tabela[1][0] << " | " << tabela[2][0]
			<< "\n " << tabela[0][1] << " | " << tabela[1][1] << " | " << tabela[2][1]
			<< "\n " << tabela[0][2] << " | " << tabela[1][2] << " | " << tabela[2][2];

    for (int m = 0; m <= 3; m++)
		{
			if (tabela[m][0] == tabela[m][1] && tabela[m][0] == tabela[m][2])
			{
				cout << "\nWygrywa gracz " << znak;
				if (znak == "X")
				{
					wygraneX++;
				}
				else
				{
					wygraneO++;
				}
				cout << "\nChcesz kontynuowac gre? (Tak/Nie): ";
				cin >> kontynuacja;
				if (kontynuacja == "Tak")
				{
					goto gra;
				}
				else
				{
					goto koniec;
				}
				break;
			}
			else if (tabela[0][m] == tabela[1][m] && tabela[0][m] == tabela[2][m])
			{
				cout << "\nWygrywa gracz " << znak;
				if (znak == "X")
				{
					wygraneX++;
				}
				else
				{
					wygraneO++;
				}
				cout << "\nChcesz kontynuowac gre? (Tak/Nie): ";
				cin >> kontynuacja;
				if (kontynuacja == "Tak")
				{
					goto gra;
				}
				else
				{
					goto koniec;
				}
				break;
			}
			else if (tabela[0][0] == tabela[1][1] && tabela[0][0] == tabela[2][2])
			{
				cout << "\nWygrywa gracz " << znak;
				if (znak == "X")
				{
					wygraneX++;
				}
				else
				{
					wygraneO++;
				}
				cout << "\nChcesz kontynuowac gre? (Tak/Nie): ";
				cin >> kontynuacja;
				if (kontynuacja == "Tak")
				{
					goto gra;
				}
				else
				{
					goto koniec;
				}
				break;
			}
			else if (tabela[0][2] == tabela[1][1] && tabela[0][2] == tabela[2][0])
			{
				cout << "\nWygrywa gracz " << znak;
				if (znak == "X")
				{
					wygraneX++;
				}
				else
				{
					wygraneO++;
				}
				cout << "\nChcesz kontynuowac gre? (Tak/Nie): ";
				cin >> kontynuacja;
				if (kontynuacja == "Tak")
				{
					goto gra;
				}
				else
				{
					goto koniec;
				}
				break;
			}
			else if (n > 8)
			{
				cout << "\nRemis!\n";
				remis++;
				cout << "\nChcesz kontynuowac gre? (Tak/Nie): ";
				cin >> kontynuacja;
				if (kontynuacja == "Tak")
				{
					goto gra;
				}
				else
				{
					goto koniec;
				}
				break;

			}
		}

		if (n % 2 == 0)
		{
			znak = "X";
		}
		else
		{
			znak = "O";
		}

		cout << "\nGracz " << znak << " podaje pole ktore chce zaznaczyc: ";
		cin >> wybrane;
		if (wybrane < 0 || wybrane > 9)
		{
			while (wybrane < 0 || wybrane > 9)
			{
				cout << "Debilu wybrales zly wynik, wprowadz ponownie: ";
				cin >> wybrane;
			}
		}
		switch (wybrane)
		{
	case 1:
		tabela[0][0] = znak;
		break;
	case 2:
		tabela[1][0] = znak;
		break;
	case 3:
		tabela[2][0] = znak;
		break;
	case 4:
		tabela[0][1] = znak;
	break;
	case 5:
		tabela[1][1] = znak;
		break;
	case 6:
		tabela[2][1] = znak;
		break;
	case 7:
		tabela[0][2] = znak;
		break;
	case 8:
		tabela[1][2] = znak;
		break;
	case 9:
			tabela[2][2] = znak;
			break;
	case 0:
			goto poddanie;
			break;
		}

	
	}


koniec:
cout << "Wygrane gracza X: " << wygraneX << ", wygrane gracza O: " << wygraneO << ", remisy: " << remis;
	return 0;


poddanie:

	if (znak == "X")
	{
		cout << "Gracz X poddal gre, wygrywa gracz O\n";
		wygraneO++;
	}
	else
	{
		cout << "Gracz O poddal gre, wygrywa gracz X\n";
		wygraneX++;
	}
	cout << "\nChcesz kontynuowac gre? (Tak/Nie): ";
	cin >> kontynuacja;
	if (kontynuacja == "Tak")
	{
		goto gra;
	}
	else
	{
		goto koniec;
	}
	return 0;
}