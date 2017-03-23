#include "Karakt�r.h"

#include <sstream>
#include <algorithm>

Karakt�r::Karakt�r()
{
	namn = "";
	spelare = "";
	varelse = "";
	yrke = "";
	k�n = "";
	offensivHand = "";
	�lderskategori = 0;
	�lder = 0;
	l�ngd = 0;
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

	b�rf�rm�ga = 0;
	skadebonus = "";
	f�rflyttning = 0;
	forceraRetirera = "";
	naturligl�kning = "";
	�terh�mtaKra = "";
	offensivHand = "";

	klass = "";

	besv�rjelsekonst = 0;
	dyrka = 0;
	finnaDoldaTing = 0;
	floraOchFauna = 0;
	f�rhandla = 0;
	f�rstaHj�lpen = 0;
	geografi = 0;
	hantverk = 0;
	heraldik = 0;
	historia = 0;
	jaktOchF�llor = 0;
	kulturer = 0;
	l�saOchSkriva = 0;
	orientera = 0;
	riddjur = 0;
	r�rlighet = 0;
	simma = 0;
	sj�kunnighet = 0;
	spel = 0;
	spr�kModersm�l = 0;
	sp�ra = 0;
	stridAvst�nd = 0;
	stridN�rstrid = 0;
	stridObev�pnad = 0;
	tjuveri = 0;
	underh�lla = 0;
	vildmarksliv = 0;
	v�rdes�tta = 0;

}


Karakt�r::~Karakt�r()
{
}

void Karakt�r::showLogo()
{
	cout << "=======================================================" << endl;
	cout << "== Skapa en rollperson till Drakar och Demoner 2016. ==" << endl;
	cout << "=======================================================" << endl;

}

void Karakt�r::getNamnFr�nSpelare()
{
	bool klart = false;
	do {
		system("cls");
		this->showLogo();
		cout << "Skriv in rollpersonens namn: " << flush;
		string namn;
		getline(cin, namn);
		if(namn.length()>1) {
			this->namn = namn;
			klart = true;
		}
		else {
			cout << endl << "Minst 2 bokst�ver i namnet" << endl << endl;
			system("pause");
		}

	} while (!klart);


}

void Karakt�r::getSpelarNamn()
{
	bool klart = false;
	do {
		system("cls");
		this->showLogo();
		cout << "Skriv in spelarens namn: " << flush;
		string spelare;
		getline(cin, spelare);

		if (spelare.length() > 1) {
			this->spelare = spelare;
			klart = true;
		}
		else {
			cout << endl << "Minst 2 bokst�ver i namnet" << endl << endl;
			system("pause");
		}

	} while (!klart);

}

void Karakt�r::v�ljVarelse()
{

	bool valetutf�rt = false;
	do {
		system("cls");
		this->showLogo();
		cout << "V�lj varelse fr�n nedanst�ende lista: " << endl;
		cout << "\t1.\tAlv" << endl;
		cout << "\t2.\tAnka" << endl;
		cout << "\t3.\tDv�rg" << endl;
		cout << "\t4.\tHalvl�ngdsfolk" << endl;
		cout << "\t5.\tM�nniska" << endl;
		cout << "\t6.\tVargfolk" << endl << endl;
		cout << "Ditt val: " << flush;

		int val = 0;
		string inmatning = "";
		cin >> inmatning;

		istringstream(inmatning) >> val;

		valetutf�rt = true;

		switch (val) {
		case 1:
			this->varelse = "Alv";
			this->styrka = -1;
			this->fysik = -1;
			this->smidighet = 1;
			this->karisma = 1;
			this->�lderskategori = t�rning.T(4, 1, 0);

			switch (this->�lderskategori) {
			case 1:
				this->�lder = t�rning.T(55, 1, 15);
				break;
			case 2:
				this->�lder = t�rning.T(49, 1, 71);
				break;
			case 3:
				this->�lder = t�rning.T(79, 1, 121);
				break;
			case 4:
				this->�lder = t�rning.T(99, 1, 200);
				break;
			default:
				break;
			}

			this->l�ngd = t�rning.T(30, 1, 150);
			this->vikt = t�rning.T(30, 1, 40);
			this->f�rflyttning = 8;
			break;
		case 2:
			this->varelse = "Anka";
			this->styrka = -2;
			this->fysik = -1;
			this->smidighet = 1;
			this->perception = 2;
			this->�lderskategori = t�rning.T(4, 1, 0);
			
			switch (this->�lderskategori) {
			case 1:
				this->�lder = t�rning.T(10, 1, 10);
				break;
			case 2:
				this->�lder = t�rning.T(9, 1, 21);
				break;
			case 3:
				this->�lder = t�rning.T(9, 1, 31);
				break;
			case 4:
				this->�lder = t�rning.T(9, 1, 41);
				break;
			default:
				break;
			}
			
			this->l�ngd = t�rning.T(40, 1, 110);
			this->vikt = t�rning.T(10, 1, 20);
			this->f�rflyttning = 6;

			break;
		case 3:
			this->varelse = "Dv�rg";
			this->styrka = 1;
			this->fysik = 1;
			this->smidighet = -2;
			this->psyke = 1;
			this->karisma = -1;
			this->�lderskategori = t�rning.T(4, 1, 0);
			
			switch (this->�lderskategori) {
			case 1:
				this->�lder = t�rning.T(20, 1, 20);
				break;
			case 2:
				this->�lder = t�rning.T(19, 1, 41);
				break;
			case 3:
				this->�lder = t�rning.T(39, 1, 61);
				break;
			case 4:
				this->�lder = t�rning.T(49, 1, 101);
				break;
			default:
				break;
			}
			

			this->l�ngd = t�rning.T(30, 1, 130);
			this->vikt = t�rning.T(30, 1, 40);
			this->f�rflyttning = 6;

			break;
		case 4:
			this->varelse = "Halvl�ngdsfolk";
			this->styrka = -2;
			this->fysik = -1;
			this->smidighet = 1;
			this->karisma = 1;
			this->psyke = 1;
			this->�lderskategori = t�rning.T(4, 1, 0);
			
			switch (this->�lderskategori) {
			case 1:
				this->�lder = t�rning.T(30, 1, 15);
				break;
			case 2:
				this->�lder = t�rning.T(44, 1, 46);
				break;
			case 3:
				this->�lder = t�rning.T(29, 1, 91);
				break;
			case 4:
				this->�lder = t�rning.T(29, 1, 121);
				break;
			default:
				break;
			}
			
			this->l�ngd = t�rning.T(30, 1, 110);
			this->vikt = t�rning.T(20, 1, 25);
			this->f�rflyttning = 6;

			break;
		case 5:
			this->varelse = "M�nniska";
			this->�lderskategori = t�rning.T(4, 1, 0);
			
			switch (this->�lderskategori) {
			case 1:
				this->�lder = t�rning.T(5, 1, 15);
				break;
			case 2:
				this->�lder = t�rning.T(9, 1, 21);
				break;
			case 3:
				this->�lder = t�rning.T(19, 1, 31);
				break;
			case 4:
				this->�lder = t�rning.T(19, 1, 51);
				break;
			default:
				break;
			}
			
			this->l�ngd = t�rning.T(40, 1, 160);
			this->vikt = t�rning.T(30, 1, 50);
			this->f�rflyttning = 8;

			break;
		case 6:
			this->varelse = "Vargfolk";
			this->styrka = 1;
			this->smidighet = 2;
			this->psyke = -1;
			this->intelligens = -1;
			this->karisma = -1;
			this->�lderskategori = t�rning.T(4, 1, 0);
			
			switch (this->�lderskategori) {
			case 1:
				this->�lder = t�rning.T(10, 1, 10);
				break;
			case 2:
				this->�lder = t�rning.T(9, 1, 21);
				break;
			case 3:
				this->�lder = t�rning.T(9, 1, 31);
				break;
			case 4:
				this->�lder = t�rning.T(9, 1, 41);
				break;
			default:
				break;
			}
			
			this->l�ngd = t�rning.T(50, 1, 170);
			this->vikt = t�rning.T(35, 1, 55);
			this->f�rflyttning = 10;


			break;
		default:
			cout << "Felaktigt val!" << endl;
			system("pause");
			valetutf�rt = false;
		}
	} while (!valetutf�rt);

}

void Karakt�r::v�ljK�n()
{

	bool valetutf�rt = false;
	do {
		system("cls");
		this->showLogo();
		cout << "V�lj k�n fr�n nedanst�ende lista: " << endl;
		cout << "\t1.\tMan" << endl;
		cout << "\t2.\tKvinna" << endl << endl;
		cout << "Ditt val: " << flush;

		int val = 0;
		string inmatning = "";
		cin >> inmatning; cout << endl;

		istringstream(inmatning) >> val;

		valetutf�rt = true;

		switch (val) {
		case 1:
			this->k�n = "Man";
			break;
		case 2:
			this->k�n = "Kvinna";
			break;
		default:
			cout << "Felaktigt val!" << endl;
			valetutf�rt = false;
			system("pause");

		}
	} while (!valetutf�rt);

}

void Karakt�r::fOffensivHand()
{
	int resultat = t�rning.T(10, 1, 0);
	if (resultat < 8) {
		this->offensivHand = "H�ger";
	}
	else {
		this->offensivHand = "V�nster";
	}
}

void Karakt�r::startKapital()
{
	int resultat = t�rning.T(10, 1, 0);
	switch (resultat) {
	case 1:
		pengar.silver = (t�rning.T(6, 2, 0) * 5);
		break;
	case 2:
	case 3:
		pengar.silver = (t�rning.T(6, 3, 0) * 5);
		break;
	case 4:
	case 5:
	case 6:
	case 7:
		pengar.silver = (t�rning.T(6, 4, 0) * 5);
		break;
	case 8:
	case 9:
		pengar.silver = (t�rning.T(6, 5, 0) * 5);
		break;
	case 10:
		pengar.silver = (t�rning.T(6, 6, 0) * 5);
		break;
	default:
		break;
	}

	resultat = t�rning.T(10, 1, 0);
	switch (resultat) {
	case 1:
		this->klass = "Adel";
		pengar.silver = pengar.silver * 10;
		break;
	case 2:
	case 3:
		this->klass = "�verklass";
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
		this->klass = "Egendomsl�s";
		pengar.silver = (int) (pengar.silver * 0.5);
		break;
	default:
		break;
	}


}

void Karakt�r::visaKarakt�r()
{
	system("cls");
	this->showLogo();
	cout << "Namn:    " << namn << endl;
	cout << "Spelare: " << spelare << endl;
	cout << "Varelse: " << varelse << endl;
	cout << "Yrke:    " << yrke << endl;
	cout << "K�n:     " << k�n << endl;

	// cout << "" << �lderskategori << endl;
	cout << "�lder:   " << �lder << endl;
	cout << "L�ngd:   " << l�ngd << endl;
	cout << "Vikt:    " << vikt << endl << endl;

	cout << "Styrka:      " << styrka << endl;
	cout << "Fysik:       " << fysik << endl;
	cout << "Smidighet:   " << smidighet << endl;
	cout << "Perception:  " << perception << endl;
	cout << "Psyke:       " << psyke << endl;
	cout << "Intelligens: " << intelligens << endl;
	cout << "Karisma:     " << karisma << endl << endl;

	cout << "B�rf�rm�ga: " << b�rf�rm�ga << endl;
	// cout << "" << skadebonus << endl;
	cout << "F�rflyttning: " << f�rflyttning << endl;
	// cout << "" << forceraRetirera << endl;
	// cout << "" << naturligl�kning << endl;
	// cout << "" << �terh�mtaKra << endl;
	cout << "Offensiv hand: " << offensivHand << endl << endl;

	cout << "Klass:  " << klass << endl;
	cout << "Koppar: " << pengar.koppar << endl;
	cout << "Silver: " << pengar.silver << endl;
	cout << "Guld:   " << pengar.guld << endl << endl;


	cout << "Besv�rjelsekonst: " << besv�rjelsekonst << "\t\tDyrka:           " << dyrka << endl;
	cout << "Finna Dolda Ting: " << finnaDoldaTing <<   "\t\tFlora och Fauna: " << floraOchFauna << endl;
	cout << "F�rhandla:        " << f�rhandla <<        "\t\tF�rsta hj�lpen:  " << f�rstaHj�lpen << endl;
	cout << "Geografi:         " << geografi <<         "\t\tHantverk:        " << hantverk << endl;
	cout << "Heraldik:         " << heraldik <<         "\t\tHistoria:        " << historia << endl;
	cout << "Jakt och F�llor:  " << jaktOchF�llor <<    "\t\tKulturer:        " << kulturer << endl;
	cout << "L�sa och Skriva:  " << l�saOchSkriva <<    "\t\tOrientera:       " << orientera << endl;
	cout << "Riddjur:          " << riddjur <<          "\t\tR�rlighet:       " << r�rlighet << endl;
	cout << "Simma:            " << simma <<            "\t\tSj�kunnighet:    " << sj�kunnighet << endl;
	cout << "Spel:             " << spel <<             "\t\tSpr�k modersm�l: " << spr�kModersm�l << endl;
	cout << "Spr�k:            " << spr�k <<            "\t\tSp�ra:           " << sp�ra << endl;
	cout << "Strid Avst�nd:    " << stridAvst�nd <<     "\t\tStrid N�rstrid:  " << stridN�rstrid << endl;
	cout << "Strid Obev�pnad:  " << stridObev�pnad <<   "\t\tTjuveri:         " << tjuveri << endl;
	cout << "Underh�lla:       " << underh�lla <<       "\t\tVildmarksliv:    " << vildmarksliv << endl;
	cout << "V�rdes�tta:       " << v�rdes�tta << endl;

}

void Karakt�r::grundegenskaper()
{


	int slag[4] = { 0,0,0,0 };
	int minsta = 0;
	int summa = 0;

	for (int i = 0; i < 7; i++) {
		for (int k = 0; k < 4; k++) {
			slag[k] = t�rning.T(6, 1, 0);
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

void Karakt�r::v�ljYrke()
{

	bool valetutf�rt = false;
	do {
		system("cls");
		this->showLogo();
		cout << "V�lj ett yrke fr�n nedanst�ende lista!" << endl << endl;
		cout << "\t1.\tHantverkare" << endl << "\t\tViktiga grundegenskaper �r smidighet, perception, karisma och intelligens." << endl << endl;
		cout << "\t2.\tJ�gare" << endl << "\t\tViktiga grundegenskaper �r smidighet, perception, intelligens, fysik och psyke." << endl << endl;
		cout << "\t3.\tKrigare" << endl << "\t\tViktiga grundegenskaper �r styrka, smidighet och intelligens." << endl << endl;
		cout << "\t4.\tK�pman" << endl << "\t\tViktiga grundegenskaper �r karisma, perception, intelligens och smidighet." << endl << endl;
		cout << "\t5.\tL�rd" << endl << "\t\tViktiga grundegenskaper �r intelligens och karisma." << endl << endl;
		cout << "\t6.\tMagiker" << endl << "\t\tViktiga grundegenskaper �r intelligens, smidighet och karisma." << endl << endl;
		cout << "\t7.\tRiddare" << endl << "\t\tViktiga grundegenskaper �r smidighet, intelligens, styrka, karisma och perception." << endl << endl;
		cout << "\t8.\tSj�farare" << endl << "\t\tViktiga grundegenskaper �r smidighet, fysik, intelligens, perception och psyke." << endl << endl;
		cout << "\t9.\tTjuv" << endl << "\t\tViktiga grundegenskaper �r smidighet, intelligens, perception och karisma." << endl << endl;
		cout << "Ditt val: " << flush;

		int val = 0;
		string inmatning = "";
		cin >> inmatning; cout << endl;

		istringstream(inmatning) >> val;

		valetutf�rt = true;

		switch (val) {
		case 1:
			// Hantverkare
			// Viktiga grundegenskaper: SMI, PER, KAR, INT
			this->yrke = "Hantverkare";
			this->viktigasteEgenskaperna = "smidighet, perception, karisma och intelligens.";
			break;
		case 2:
			// J�gare
			// Viktiga grundegenskaper: SMI, PER, INT, FYS, PSY
			this->yrke = "J�gare";
			this->viktigasteEgenskaperna = "smidighet, perception, intelligens, fysik och psyke.";
			break;
		case 3:
			// Krigare
			// Viktiga grundegenskaper: STY, SMI, INT, 
			this->yrke = "Krigare";
			this->viktigasteEgenskaperna = "styrka, smidighet och intelligens.";
			break;
		case 4:
			// K�pman
			// Viktiga grundegenskaper: KAR, PER, INT, SMI
			this->yrke = "K�pman";
			this->viktigasteEgenskaperna = "karisma, perception, intelligens och smidighet.";
			break;
		case 5:
			// L�rd
			// Viktiga grundegenskaper: INT, KAR, 
			this->yrke = "L�rd";
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
			// Sj�farare
			// Viktiga grundegenskaper: SMI, FYS, INT, PER, PSY
			this->yrke = "Sj�farare";
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
			valetutf�rt = false;
			system("cls");
		}
	} while (!valetutf�rt);


}

void Karakt�r::placeraV�rdeP�Egenskaper()
{

	bool b_egenskaper[7] = { false,false,false,false,false,false,false };
	this->sortArray();

	for (int k = 6; k > -1; k--) {
		bool valetutf�rt = false;

		do {
			system("cls");
			this->showLogo();
			cout << "Du ska nu placera ut f�ljande v�rden p� dina grundegenskaper:" << endl;
			for (int i = 6; i > -1; i--) {
				if(this->egenskaper[i] != 0) {
					cout << this->egenskaper[i] << ", " << flush;
				}
			}
			cout << endl << endl;
			cout << "Dina viktigaste grundegenskaper baserat p� ditt valda yrke " << this->yrke << " �r: " << endl;
			cout << this->viktigasteEgenskaperna << endl << endl;
			cout << "Beroende p� vald ras kan du redan ha minus eller plus p� dina egenskaper. De ser ut som f�ljer: " << endl;
			cout << "STY: " << this->styrka << ", FYS: " << this->fysik << ", SMI: " << this->smidighet << ", PER: " << this->perception << ", PSY: " << this->psyke << ", INT: " << this->intelligens << ", KAR: " << this->karisma << endl << endl;
			cout << "V�lj grundegenskap f�r detta v�rde: " << this->egenskaper[k] << endl << endl;

			if (!b_egenskaper[0]) { cout << "\t1.\tStyrka" << endl; }
			if (!b_egenskaper[1]) { cout << "\t2.\tFysik" << endl; }
			if (!b_egenskaper[2]) { cout << "\t3.\tSmidighet" << endl; }
			if (!b_egenskaper[3]) { cout << "\t4.\tPerception" << endl; }
			if (!b_egenskaper[4]) { cout << "\t5.\tPsyke" << endl; }
			if (!b_egenskaper[5]) { cout << "\t6.\tIntelligens" << endl; }
			if (!b_egenskaper[6]) { cout << "\t7.\tKarisma" << endl; }
			cout << endl << "Ditt val: " << flush;

			int val = 0;
			string inmatning = "";
			cin >> inmatning; cout << endl;

			istringstream(inmatning) >> val;

			valetutf�rt = true;

			switch (val) {
			case 1:
				if (!b_egenskaper[0]) {
					this->styrka += this->egenskaper[k];
					b_egenskaper[0] = true;
					this->egenskaper[k] = 0;
				}
				else {
					cout << "du har redan satt ett v�rde p� denna egenskap!" << endl << endl;
					valetutf�rt = false;
				}

				break;
			case 2:
				if (!b_egenskaper[1]) {
					this->fysik += this->egenskaper[k];
					b_egenskaper[1] = true;
					this->egenskaper[k] = 0;
				}
				else {
					cout << "du har redan satt ett v�rde p� denna egenskap!" << endl << endl;
					valetutf�rt = false;
				}
				break;
			case 3:
				if (!b_egenskaper[2]) {
					this->smidighet += this->egenskaper[k];
					b_egenskaper[2] = true;
					this->egenskaper[k] = 0;
				}
				else {
					cout << "du har redan satt ett v�rde p� denna egenskap!" << endl << endl;
					valetutf�rt = false;
				}
				break;
			case 4:
				if (!b_egenskaper[3]) {
					this->perception += this->egenskaper[k];
					b_egenskaper[3] = true;
					this->egenskaper[k] = 0;
				}
				else {
					cout << "du har redan satt ett v�rde p� denna egenskap!" << endl << endl;
					valetutf�rt = false;
				}
				break;
			case 5:
				if (!b_egenskaper[4]) {
					this->psyke += this->egenskaper[k];
					b_egenskaper[4] = true;
					this->egenskaper[k] = 0;
				}
				else {
					cout << "du har redan satt ett v�rde p� denna egenskap!" << endl << endl;
					valetutf�rt = false;
				}
				break;
			case 6:
				if (!b_egenskaper[5]) {
					this->intelligens += this->egenskaper[k];
					b_egenskaper[5] = true;
					this->egenskaper[k] = 0;
				}
				else {
					cout << "du har redan satt ett v�rde p� denna egenskap!" << endl << endl;
					valetutf�rt = false;
				}
				break;
			case 7:
				if (!b_egenskaper[6]) {
					this->karisma += this->egenskaper[k];
					b_egenskaper[6] = true;
					this->egenskaper[k] = 0;
				}
				else {
					cout << "du har redan satt ett v�rde p� denna egenskap!" << endl << endl;
					valetutf�rt = false;
				}
				break;
			default:
				cout << endl << "Felaktigt val!" << endl << endl;
				valetutf�rt = false;
				break;
			}
		} while (!valetutf�rt);

	}
}

void Karakt�r::f�rdigheter()
{
	if (this->yrke == "Hantverkare") {
		this->besv�rjelsekonst = 0;
		this->dyrka = ((this->intelligens+this->smidighet)/2)*2;
		this->finnaDoldaTing = this->perception;
		this->floraOchFauna = this->intelligens*2;
		this->f�rhandla = this->karisma*3;
		this->f�rstaHj�lpen = this->intelligens;
		this->geografi = this->intelligens;
		this->hantverk = this->smidighet*4;
		this->heraldik = this->intelligens;
		this->historia = this->intelligens;
		this->jaktOchF�llor = ((this->perception + this->smidighet) / 2);
		this->kulturer = this->intelligens;
		this->l�saOchSkriva = 0;
		this->orientera = ((this->intelligens + this->perception) / 2);
		this->riddjur = this->smidighet;
		this->r�rlighet = this->smidighet;
		this->simma = 0;
		this->sj�kunnighet = ((this->intelligens + this->perception) / 2);
		this->spel = this->perception;
		this->spr�kModersm�l = this->intelligens*3;
		this->spr�k = 0;
		this->sp�ra = this->perception;
		this->stridAvst�nd = this->smidighet;
		this->stridN�rstrid = ((this->styrka + this->smidighet) / 2);
		this->stridObev�pnad = this->smidighet;
		this->tjuveri = this->smidighet;
		this->underh�lla = this->karisma;
		this->vildmarksliv = 0;
		this->v�rdes�tta = this->perception*3;
	}
	if (this->yrke == "J�gare") {
		this->besv�rjelsekonst = 0;
		this->dyrka = ((this->intelligens + this->smidighet) / 2);
		this->finnaDoldaTing = this->perception*2;
		this->floraOchFauna = this->intelligens * 3;
		this->f�rhandla = this->karisma;
		this->f�rstaHj�lpen = this->intelligens;
		this->geografi = this->intelligens*3;
		this->hantverk = this->smidighet * 2;
		this->heraldik = this->intelligens;
		this->historia = this->intelligens;
		this->jaktOchF�llor = ((this->perception + this->smidighet) / 2)*4;
		this->kulturer = this->intelligens;
		this->l�saOchSkriva = 0;
		this->orientera = ((this->intelligens + this->perception) / 2)*4;
		this->riddjur = this->smidighet*2;
		this->r�rlighet = this->smidighet*3;
		this->simma = ((this->smidighet + this->fysik) / 2)*2;
		this->sj�kunnighet = ((this->intelligens + this->perception) / 2);
		this->spel = this->perception;
		this->spr�kModersm�l = this->intelligens * 3;
		this->spr�k = 0;
		this->sp�ra = this->perception*4;
		this->stridAvst�nd = this->smidighet*4;
		this->stridN�rstrid = ((this->styrka + this->smidighet) / 2)*2;
		this->stridObev�pnad = this->smidighet*2;
		this->tjuveri = this->smidighet;
		this->underh�lla = this->karisma;
		this->vildmarksliv = ((this->fysik + this->psyke) / 2)*4;
		this->v�rdes�tta = this->perception;

	}
}

void Karakt�r::sortArray()
{
	//Now we call the sort function
	sort(this->egenskaper, this->egenskaper + 7);
}


