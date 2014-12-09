// HARJOITUS 6
// Harri Vastamäki
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
		cout << "Onneksi olkoon, saat ostettua lihapiirakan ja sinulle jää vielä " << ylim << " euroa." << endl;
	else
		cout << "Valitettavasti rahasi eivät riitä lihapiirakkaan." << endl;
}