#include <iostream>
#include <string>
#include "Karakt�r.h"
//#include "T�rning.h"



using namespace std;

int main() {
	locale swedish("swedish");
	locale::global(swedish);

	Karakt�r karakt�r;
	//T�rning t�rning;

	karakt�r.showLogo();


	cout << endl;
	karakt�r.getNamnFr�nSpelare();
	karakt�r.getSpelarNamn();
	karakt�r.v�ljK�n();
	karakt�r.fOffensivHand();
	karakt�r.startKapital();
	karakt�r.v�ljVarelse();
	karakt�r.grundegenskaper();
	karakt�r.v�ljYrke();
	karakt�r.placeraV�rdeP�Egenskaper();
	karakt�r.f�rdigheter();
	karakt�r.visaKarakt�r();

	return 0;
}
