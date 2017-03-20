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

	for(int i=7;i<7;i++) {
		egenskaper[i] = 0;
	}
	styrka = 0;
	fysik = 0;
	smidighet = 0;
	perception = 0;
	psyke = 0;
	intelligens = 0;
	karisma = 0;

	bärförmåga = 0;
	skadebonus = "";
	förflyttning = 0;
	forceraRetirera = "";
	naturligläkning = "";
	återhämtaKra = "";
	offensivHand = "";

	klass = "";

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
				break;
			}

			this->längd = tärning.T(30, 1, 150);
			this->vikt = tärning.T(30, 1, 40);
			this->förflyttning = 8;
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
				break;
			}
			
			this->längd = tärning.T(40, 1, 110);
			this->vikt = tärning.T(10, 1, 20);
			this->förflyttning = 6;

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
				break;
			}
			

			this->längd = tärning.T(30, 1, 130);
			this->vikt = tärning.T(30, 1, 40);
			this->förflyttning = 6;

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
				break;
			}
			
			this->längd = tärning.T(30, 1, 110);
			this->vikt = tärning.T(20, 1, 25);
			this->förflyttning = 6;

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
				break;
			}
			
			this->längd = tärning.T(40, 1, 160);
			this->vikt = tärning.T(30, 1, 50);
			this->förflyttning = 8;

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
				break;
			}
			
			this->längd = tärning.T(50, 1, 170);
			this->vikt = tärning.T(35, 1, 55);
			this->förflyttning = 10;


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
		cin >> inmatning; cout << endl;

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

void Karaktär::startKapital()
{
	int resultat = tärning.T(10, 1, 0);
	switch (resultat) {
	case 1:
		pengar.silver = (tärning.T(6, 2, 0) * 5);
		break;
	case 2:
	case 3:
		pengar.silver = (tärning.T(6, 3, 0) * 5);
		break;
	case 4:
	case 5:
	case 6:
	case 7:
		pengar.silver = (tärning.T(6, 4, 0) * 5);
		break;
	case 8:
	case 9:
		pengar.silver = (tärning.T(6, 5, 0) * 5);
		break;
	case 10:
		pengar.silver = (tärning.T(6, 6, 0) * 5);
		break;
	default:
		break;
	}

	resultat = tärning.T(10, 1, 0);
	switch (resultat) {
	case 1:
		this->klass = "Adel";
		pengar.silver = pengar.silver * 10;
		break;
	case 2:
	case 3:
		this->klass = "Överklass";
		pengar.silver = pengar.silver * 5;
		break;
	case 4:
	case 5:
	case 6:
	case 7:
		this->klass = "Medelklass";
		pengar.silver = pengar.silver * 2;
		break;
	case 8:
	case 9:
		this->klass = "Underklass";
		break;
	case 10:
		this->klass = "Egendomslös";
		pengar.silver = (int) (pengar.silver * 0.5);
		break;
	default:
		break;
	}


}

void Karaktär::visaKaraktär()
{
	cout << "Namn:    " << namn << endl;
	cout << "Spelare: " << spelare << endl;
	cout << "Varelse: " << varelse << endl;
	// cout << "Yrke  " << yrke << endl;
	cout << "Kön:     " << kön << endl;

	// cout << "" << ålderskategori << endl;
	cout << "Ålder:   " << ålder << endl;
	cout << "Längd:   " << längd << endl;
	cout << "Vikt:    " << vikt << endl << endl;

	cout << "Styrka:      " << styrka << endl;
	cout << "Fysik:       " << fysik << endl;
	cout << "Smidighet:   " << smidighet << endl;
	cout << "Perception:  " << perception << endl;
	cout << "Psyke:       " << psyke << endl;
	cout << "Intelligens: " << intelligens << endl;
	cout << "Karisma:     " << karisma << endl << endl;

	cout << "Bärförmåga: " << bärförmåga << endl;
	// cout << "" << skadebonus << endl;
	cout << "Förflyttning: " << förflyttning << endl;
	// cout << "" << forceraRetirera << endl;
	// cout << "" << naturligläkning << endl;
	// cout << "" << återhämtaKra << endl;
	cout << "Offensiv hand: " << offensivHand << endl << endl;

	cout << "Klass:  " << klass << endl;
	cout << "Koppar: " << pengar.koppar << endl;
	cout << "Silver: " << pengar.silver << endl;
	cout << "Guld:   " << pengar.guld << endl;

}

void Karaktär::grundegenskaper()
{


	int slag[4] = { 0,0,0,0 };
	int minsta = 0;
	int summa = 0;

	for (int i = 0; i < 7; i++) {
		for (int k = 0; k < 4; k++) {
			slag[k] = tärning.T(6, 1, 0);
			if (minsta == 0) {
				minsta = slag[k];
			}
			if (slag[k] < minsta) {
				minsta = slag[k];
			}
		}
		for (int j = 0; j < 4; j++) {
			if (slag[j] == minsta) {
				slag[j] = 0;
				break;
			}
		}
		for (int l = 0; l < 4; l++) {
			summa = summa + slag[l];
		}
		this->egenskaper[i] = summa;
		summa = 0;
		minsta = 0;

		// cout << i << ": " << this->egenskaper[i] << endl;
	}
}

void Karaktär::väljYrke()
{


	bool valetutfört = false;
	do {
		cout << "Välj ett yrke från nedanstående lista!" << endl << endl;
		cout << "\t1.\tHantverkare" << endl << "\t\tViktiga grundegenskaper är smidighet, perception, karisma och intelligens." << endl << endl;
		cout << "\t2.\tJägare" << endl << "\t\tViktiga grundegenskaper är smidighet, perception, intelligens, fysik och psyke." << endl << endl;
		cout << "\t3.\tKrigare" << endl << "\t\tViktiga grundegenskaper är styrka, smidighet och intelligens." << endl << endl;
		cout << "\t4.\tKöpman" << endl << "\t\tViktiga grundegenskaper är karisma, perception, intelligens och smidighet." << endl << endl;
		cout << "\t5.\tLärd" << endl << "\t\tViktiga grundegenskaper är intelligens och karisma." << endl << endl;
		cout << "\t6.\tMagiker" << endl << "\t\tViktiga grundegenskaper är intelligens, smidighet och karisma." << endl << endl;
		cout << "\t7.\tRiddare" << endl << "\t\tViktiga grundegenskaper är smidighet, intelligens, styrka, karisma och perception." << endl << endl;
		cout << "\t8.\tSjöfarare" << endl << "\t\tViktiga grundegenskaper är smidighet, fysik, intelligens, perception och psyke." << endl << endl;
		cout << "\t9.\tTjuv" << endl << "\t\tViktiga grundegenskaper är smidighet, intelligens, perception och karisma." << endl << endl;
		cout << "Ditt val: " << flush;

		int val = 0;
		string inmatning = "";
		cin >> inmatning; cout << endl;

		istringstream(inmatning) >> val;

		valetutfört = true;

		switch (val) {
		case 1:
			// Hantverkare
			// Viktiga grundegenskaper: SMI, PER, KAR, INT
			this->yrke = "Hantverkare";
			this->viktigasteEgenskaperna = "smidighet, perception, karisma och intelligens.";
			break;
		case 2:
			// Jägare
			// Viktiga grundegenskaper: SMI, PER, INT, FYS, PSY
			this->yrke = "Jägare";
			this->viktigasteEgenskaperna = "smidighet, perception, intelligens, fysik och psyke.";
			break;
		case 3:
			// Krigare
			// Viktiga grundegenskaper: STY, SMI, INT, 
			this->yrke = "Krigare";
			this->viktigasteEgenskaperna = "styrka, smidighet och intelligens.";
			break;
		case 4:
			// Köpman
			// Viktiga grundegenskaper: KAR, PER, INT, SMI
			this->yrke = "Köpman";
			this->viktigasteEgenskaperna = "karisma, perception, intelligens och smidighet.";
			break;
		case 5:
			// Lärd
			// Viktiga grundegenskaper: INT, KAR, 
			this->yrke = "Lärd";
			this->viktigasteEgenskaperna = "intelligens och karisma.";
			break;
		case 6:
			// Magiker
			// Viktiga grundegenskaper: INT, SMI, KAR, 
			this->yrke = "Magiker";
			this->viktigasteEgenskaperna = "intelligens, smidighet och karisma.";
			break;
		case 7:
			// Riddare
			// Viktiga grundegenskaper: SMI, INT, STY, KAR, PER
			this->yrke = "Riddare";
			this->viktigasteEgenskaperna = "smidighet, intelligens, styrka, karisma och perception.";
			break;
		case 8:
			// Sjöfarare
			// Viktiga grundegenskaper: SMI, FYS, INT, PER, PSY
			this->yrke = "Sjöfarare";
			this->viktigasteEgenskaperna = "smidighet, fysik, intelligens, perception och psyke.";
			break;
		case 9:
			// Tjuv
			// Viktiga grundegenskaper: SMI, INT, PER, KAR, 
			this->yrke = "Tjuv";
			this->viktigasteEgenskaperna = "smidighet, intelligens, perception och karisma.";
			break;
		default:
			cout << "Felaktigt val!" << endl;
			valetutfört = false;
		}
	} while (!valetutfört);


}

void Karaktär::placeraVärdePåEgenskaper()
{
	cout << "Du ska nu placera ut följande värden på dina grundegenskaper:" << endl;
	for (int i = 0; i < 7; i++) {
		cout << "värde " << (i+1) << " = " << this->egenskaper[i] << endl;
	}
	cout << "Beroende på vald ras kan du redan ha minus eller plus på dina egenskaper. De ser ut som följer: " << endl;
	cout << this->styrka << ", " << this->fysik << ", " << this->smidighet << ", " << this->perception << ", " << this->psyke << ", " << this->intelligens << ", " << this->karisma << ", " << endl;

}

