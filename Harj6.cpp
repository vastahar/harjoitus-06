// HARJOITUS 6
// Harri Vastam�ki
// IIOS14S1

#include <iostream>
using namespace std;

int lihis;
int raha;
int ylim;

void main()
{
	int raha;
	cout << "Paljonko lompakossasi on rahaa? ";
	cin >> raha;
	int lihis;
	cout << "Paljonko lihapiirakka maksaa? ";
	cin >> lihis;
	int ylim;
	ylim = (raha - lihis);
	if (raha >= lihis)
		cout << "Onneksi olkoon, saat ostettua lihapiirakan ja sinulle j�� viel� " << ylim << " euroa." << endl;
	else
		cout << "Valitettavasti rahasi eiv�t riit� lihapiirakkaan." << endl;
}