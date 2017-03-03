#include "Karaktär.h"



Karaktär::Karaktär()
{
	namn = "";
	spelare = "";
	varelse = "";
	yrke = "";
	kön = "";
	ålder = 0;
	längd = 0;
	vikt = 0;

}


Karaktär::~Karaktär()
{
}

void Karaktär::setNamn(string Namn)
{
	Karaktär::namn = Namn;
}

string Karaktär::getNamn() {
	return Karaktär::namn;
}

void Karaktär::setSpelare(string Spelare)
{
}

void Karaktär::setVarelse(string Varelse)
{
}

void Karaktär::setYrke(string Yrke)
{
}

void Karaktär::setKön(string Kön)
{
}

void Karaktär::setÅlder(int Ålder)
{
}

void Karaktär::setLängd(int Längd)
{
}

void Karaktär::setVikt(int Vikt)
{
}
