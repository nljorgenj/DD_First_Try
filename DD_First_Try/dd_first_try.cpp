#include <iostream>
#include <string>
#include "Karakt�r.h"
//#include "T�rning.h"

using namespace std;

int main() {
	Karakt�r karakt�r;
	//T�rning t�rning;

	cout << "=======================================================" << endl;
	cout << "== Skapa en rollperson till Drakar och Demoner 2016. ==" << endl;
	cout << "=======================================================" << endl;

	cout << endl;
	
	cout << "Skriv in rollpersonens namn: " << flush;
	string namn;
	getline(cin, namn);
	karakt�r.setNamn(namn);
	karakt�r.grundegenskaper.setStyrka(karakt�r.grundegenskaper.t�rning.T(6,3,0));


	cout << "Rollpersonens namn �r: " <<  karakt�r.getNamn() << endl;
	cout << endl << "Styrka = " << karakt�r.grundegenskaper.getStyrka() << endl << endl;

	return 0;
}
