#include <iostream>
#include <string>
#include "Karaktär.h"

using namespace std;

int main() {
	Karaktär karaktär;

	cout << "=======================================================" << endl;
	cout << "== Skapa en rollperson till Drakar och Demoner 2016. ==" << endl;
	cout << "=======================================================" << endl;

	cout << endl;
	
	cout << "Skriv in rollpersonens namn: " << flush;
	string namn;
	getline(cin, namn);
	karaktär.setNamn(namn);
	karaktär.grundegenskaper.setStyrka(12);


	cout << "Rollpersonens namn är: " <<  karaktär.getNamn() << endl;
	cout << endl << "Styrka = " << karaktär.grundegenskaper.getStyrka() << endl << endl;

	return 0;
}
