#include "Karakt�r.h"



Karakt�r::Karakt�r()
{
	namn = "";
	spelare = "";
	varelse = "";
	yrke = "";
	k�n = "";
	�lder = 0;
	l�ngd = 0;
	vikt = 0;

}


Karakt�r::~Karakt�r()
{
}

void Karakt�r::setNamn(string Namn)
{
	Karakt�r::namn = Namn;
}

string Karakt�r::getNamn() {
	return Karakt�r::namn;
}

void Karakt�r::setSpelare(string Spelare)
{
}

void Karakt�r::setVarelse(string Varelse)
{
}

void Karakt�r::setYrke(string Yrke)
{
}

void Karakt�r::setK�n(string K�n)
{
}

void Karakt�r::set�lder(int �lder)
{
}

void Karakt�r::setL�ngd(int L�ngd)
{
}

void Karakt�r::setVikt(int Vikt)
{
}
