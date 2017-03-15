#include "Karakt�r.h"

#include <sstream>

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

	styrka = 0;
	fysik = 0;
	smidighet = 0;
	perception = 0;
	psyke = 0;
	intelligens = 0;
	karisma = 0;

	b�rf�rm�ga = 0;
	skadebonus = "";
	f�rflyttning = "";
	forceraRetirera = "";
	naturligl�kning = "";
	�terh�mtaKra = "";
	offensivHand = "";

	klass = "";

}


Karakt�r::~Karakt�r()
{
}

void Karakt�r::getNamnFr�nSpelare()
{
	cout << "Skriv in rollpersonens namn: " << flush;
	string namn;
	getline(cin, namn);
	this->namn = namn;
	cout << endl;

}

void Karakt�r::getSpelarNamn()
{
	cout << "Skriv in spelarens namn: " << flush;
	string spelare;
	getline(cin, spelare);
	this->spelare = spelare;
	cout << endl;
}

void Karakt�r::v�ljVarelse()
{
	bool valetutf�rt = false;
	do {
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
			}
			this->l�ngd = t�rning.T(50, 1, 170);
			this->vikt = t�rning.T(35, 1, 55);
			this->f�rflyttning = 10;


			break;
		default:
			cout << "Felaktigt val!" << endl;
			valetutf�rt = false;
		}
	} while (!valetutf�rt);

}

void Karakt�r::v�ljK�n()
{
	
	bool valetutf�rt = false;
	do {
		cout << "V�lj k�n fr�n nedanst�ende lista: " << endl;
		cout << "\t1.\tMan" << endl;
		cout << "\t2.\tKvinna" << endl << endl;
		cout << "Ditt val: " << flush;

		int val = 0;
		string inmatning = "";
		cin >> inmatning;

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


}

