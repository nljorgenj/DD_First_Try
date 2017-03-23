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

	karaktär.showLogo();


	cout << endl;
	karaktär.getNamnFrånSpelare();
	karaktär.getSpelarNamn();
	karaktär.väljKön();
	karaktär.fOffensivHand();
	karaktär.startKapital();
	karaktär.väljVarelse();
	karaktär.grundegenskaper();
	karaktär.väljYrke();
	karaktär.placeraVärdePåEgenskaper();
	karaktär.färdigheter();
	karaktär.visaKaraktär();

	return 0;
}
