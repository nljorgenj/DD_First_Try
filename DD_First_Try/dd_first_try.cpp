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

	cout << "=======================================================" << endl;
	cout << "== Skapa en rollperson till Drakar och Demoner 2016. ==" << endl;
	cout << "=======================================================" << endl;

	cout << endl;
	karakt�r.getNamnFr�nSpelare();
	karakt�r.getSpelarNamn();
	karakt�r.v�ljK�n();
	karakt�r.v�ljVarelse();

	

	return 0;
}
