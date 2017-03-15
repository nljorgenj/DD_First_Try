#include "Karaktär.h"

#include <sstream>

Karaktär::Karaktär()
{
	namn = "";
	spelare = "";
	varelse = "";
	yrke = "";
	kön = "";
	offensivHand = "";
	ålderskategori = 0;
	ålder = 0;
	längd = 0;
	vikt = 0;

	styrka = 0;
	fysik = 0;
	smidighet = 0;
	perception = 0;
	psyke = 0;
	intelligens = 0;
	karisma = 0;

	bärförmåga = 0;
	skadebonus = "";
	förflyttning = "";
	forceraRetirera = "";
	naturligläkning = "";
	återhämtaKra = "";
	offensivHand = "";



}


Karaktär::~Karaktär()
{
}

void Karaktär::getNamnFrånSpelare()
{
	cout << "Skriv in rollpersonens namn: " << flush;
	string namn;
	getline(cin, namn);
	this->namn = namn;
	cout << endl;

}

void Karaktär::getSpelarNamn()
{
	cout << "Skriv in spelarens namn: " << flush;
	string spelare;
	getline(cin, spelare);
	this->spelare = spelare;
	cout << endl;
}

void Karaktär::väljVarelse()
{
	bool valetutfört = false;
	do {
		cout << "Välj varelse från nedanstående lista: " << endl;
		cout << "\t1.\tAlv" << endl;
		cout << "\t2.\tAnka" << endl;
		cout << "\t3.\tDvärg" << endl;
		cout << "\t4.\tHalvlängdsfolk" << endl;
		cout << "\t5.\tMänniska" << endl;
		cout << "\t6.\tVargfolk" << endl << endl;
		cout << "Ditt val: " << flush;

		int val = 0;
		string inmatning = "";
		cin >> inmatning;

		istringstream(inmatning) >> val;

		valetutfört = true;

		switch (val) {
		case 1:
			this->varelse = "Alv";
			this->styrka = -1;
			this->fysik = -1;
			this->smidighet = 1;
			this->karisma = 1;
			this->ålderskategori = tärning.T(4, 1, 0);
			switch (this->ålderskategori) {
			case 1:
				this->ålder = tärning.T(55, 1, 15);
				break;
			case 2:
				this->ålder = tärning.T(49, 1, 71);
				break;
			case 3:
				this->ålder = tärning.T(79, 1, 121);
				break;
			case 4:
				this->ålder = tärning.T(99, 1, 200);
				break;
			default:
			}
			this->längd = tärning.T(30, 1, 150);
			this->vikt = tärning.T(30, 1, 40);
			break;
		case 2:
			this->varelse = "Anka";
			this->styrka = -2;
			this->fysik = -1;
			this->smidighet = 1;
			this->perception = 2;
			this->ålderskategori = tärning.T(4, 1, 0);
			switch (this->ålderskategori) {
			case 1:
				this->ålder = tärning.T(10, 1, 10);
				break;
			case 2:
				this->ålder = tärning.T(9, 1, 21);
				break;
			case 3:
				this->ålder = tärning.T(9, 1, 31);
				break;
			case 4:
				this->ålder = tärning.T(9, 1, 41);
				break;
			default:
			}
			this->längd = tärning.T(40, 1, 110);
			this->vikt = tärning.T(10, 1, 20);

			break;
		case 3:
			this->varelse = "Dvärg";
			this->styrka = 1;
			this->fysik = 1;
			this->smidighet = -2;
			this->psyke = 1;
			this->karisma = -1;
			this->ålderskategori = tärning.T(4, 1, 0);
			switch (this->ålderskategori) {
			case 1:
				this->ålder = tärning.T(20, 1, 20);
				break;
			case 2:
				this->ålder = tärning.T(19, 1, 41);
				break;
			case 3:
				this->ålder = tärning.T(39, 1, 61);
				break;
			case 4:
				this->ålder = tärning.T(49, 1, 101);
				break;
			default:
			}
			this->längd = tärning.T(30, 1, 130);
			this->vikt = tärning.T(30, 1, 40);

			break;
		case 4:
			this->varelse = "Halvlängdsfolk";
			this->styrka = -2;
			this->fysik = -1;
			this->smidighet = 1;
			this->karisma = 1;
			this->psyke = 1;
			this->ålderskategori = tärning.T(4, 1, 0);
			switch (this->ålderskategori) {
			case 1:
				this->ålder = tärning.T(30, 1, 15);
				break;
			case 2:
				this->ålder = tärning.T(44, 1, 46);
				break;
			case 3:
				this->ålder = tärning.T(29, 1, 91);
				break;
			case 4:
				this->ålder = tärning.T(29, 1, 121);
				break;
			default:
			}
			this->längd = tärning.T(30, 1, 110);
			this->vikt = tärning.T(20, 1, 25);

			break;
		case 5:
			this->varelse = "Människa";
			this->ålderskategori = tärning.T(4, 1, 0);
			switch (this->ålderskategori) {
			case 1:
				this->ålder = tärning.T(5, 1, 15);
				break;
			case 2:
				this->ålder = tärning.T(9, 1, 21);
				break;
			case 3:
				this->ålder = tärning.T(19, 1, 31);
				break;
			case 4:
				this->ålder = tärning.T(19, 1, 51);
				break;
			default:
			}
			this->längd = tärning.T(40, 1, 160);
			this->vikt = tärning.T(30, 1, 50);

			break;
		case 6:
			this->varelse = "Vargfolk";
			this->styrka = 1;
			this->smidighet = 2;
			this->psyke = -1;
			this->intelligens = -1;
			this->karisma = -1;
			this->ålderskategori = tärning.T(4, 1, 0);
			switch (this->ålderskategori) {
			case 1:
				this->ålder = tärning.T(10, 1, 10);
				break;
			case 2:
				this->ålder = tärning.T(9, 1, 21);
				break;
			case 3:
				this->ålder = tärning.T(9, 1, 31);
				break;
			case 4:
				this->ålder = tärning.T(9, 1, 41);
				break;
			default:
			}
			this->längd = tärning.T(50, 1, 170);
			this->vikt = tärning.T(35, 1, 55);


			break;
		default:
			cout << "Felaktigt val!" << endl;
			valetutfört = false;
		}
	} while (!valetutfört);

}

void Karaktär::väljKön()
{
	
	bool valetutfört = false;
	do {
		cout << "Välj kön från nedanstående lista: " << endl;
		cout << "\t1.\tMan" << endl;
		cout << "\t2.\tKvinna" << endl << endl;
		cout << "Ditt val: " << flush;

		int val = 0;
		string inmatning = "";
		cin >> inmatning;

		istringstream(inmatning) >> val;

		valetutfört = true;

		switch (val) {
		case 1:
			this->kön = "Man";
			break;
		case 2:
			this->kön = "Kvinna";
			break;
		default:
			cout << "Felaktigt val!" << endl;
			valetutfört = false;
		}
	} while (!valetutfört);

}

void Karaktär::fOffensivHand()
{
	int resultat = tärning.T(10, 1, 0);
	if (resultat < 8) {
		this->offensivHand = "Höger";
	}
	else {
		this->offensivHand = "Vänster";
	}
}

