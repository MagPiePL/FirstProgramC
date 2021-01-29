// Zad6Rozdzial5.cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
	unsigned long long laczna_ilosc = 0;
	unsigned long long Dane[3][12];
	const char* miesiac[12] =
	{
		"Styczen",
		"Luty",
		"Marzec",
		"Kwiecien",
		"Maj",
		"Czerwiec",
		"Lipiec",
		"Sierpien",
		"Wrzesien",
		"Pazdziernik",
		"Listopad",
		"Grudzien",
	};
	cout << "W PIERWSZYM ROKU:\n";
	int b = 0;
	int y = 0;
	int liczba1 = 0;
	for (int i = 0; i < 3; ++i)
	{
		const string liczba[2] = { "DRUGIM", "TRZECIM" };
		for (int c = 0; c < 12; ++c)
		{
			cout << "Podaj liczbe sprzedazy w " << miesiac[c] << " = ";
			cin >> Dane[y][c];
			cout << endl;
		}
		if (i == 2)
			break;
		cout << "W " << liczba[b] << " ROKU\n";
		b++;
		y++;
	}
	y = 0;
	for (int i = 0; i < 3; ++i)
	{
		for (int c = 0; c < 12; ++c)
		{
			laczna_ilosc += Dane[y][c];
		}
		y++;
	}

	cout << "Lacznie przez 3 lata zostalo sprzedanych: " << laczna_ilosc << " ksiazek.\n";
	cout << "Jedna ksiazka kosztuje 40 zl to znaczy ze zarobilbys: " << (laczna_ilosc * 40) << " zl.\n";

	return 0;
}