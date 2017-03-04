#include <iostream>
#include <string>
#include "Karaktär.h"
//#include "Tärning.h"

using namespace std;

int main() {
	Karaktär karaktär;
	//Tärning tärning;

	cout << "=======================================================" << endl;
	cout << "== Skapa en rollperson till Drakar och Demoner 2016. ==" << endl;
	cout << "=======================================================" << endl;

	cout << endl;
	
	cout << "Skriv in rollpersonens namn: " << flush;
	string namn;
	getline(cin, namn);
	karaktär.setNamn(namn);
	karaktär.grundegenskaper.setStyrka(karaktär.grundegenskaper.tärning.T(6,3,0));


	cout << "Rollpersonens namn är: " <<  karaktär.getNamn() << endl;
	cout << endl << "Styrka = " << karaktär.grundegenskaper.getStyrka() << endl << endl;

	return 0;
}
