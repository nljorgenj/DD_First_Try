#include <iostream>
#include <string>
#include "Karaktär.h"
//#include "Tärning.h"



using namespace std;

int main() {
	locale swedish("swedish");
	locale::global(swedish);

	Karaktär karaktär;
	//Tärning tärning;

	cout << "=======================================================" << endl;
	cout << "== Skapa en rollperson till Drakar och Demoner 2016. ==" << endl;
	cout << "=======================================================" << endl;

	cout << endl;
	karaktär.getNamnFrånSpelare();
	karaktär.getSpelarNamn();
	karaktär.väljKön();
	karaktär.väljVarelse();

	

	return 0;
}
