#include <iostream>
#include <string>
#include "Karakt�r.h"

using namespace std;

int main() {
	Karakt�r karakt�r;

	cout << "=======================================================" << endl;
	cout << "== Skapa en rollperson till Drakar och Demoner 2016. ==" << endl;
	cout << "=======================================================" << endl;

	cout << endl;
	
	cout << "Skriv in rollpersonens namn: " << flush;
	string namn;
	getline(cin, namn);
	karakt�r.setNamn(namn);
	karakt�r.grundegenskaper.setStyrka(12);


	cout << "Rollpersonens namn �r: " <<  karakt�r.getNamn() << endl;
	cout << endl << "Styrka = " << karakt�r.grundegenskaper.getStyrka() << endl << endl;

	return 0;
}
