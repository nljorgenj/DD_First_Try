#include "Grundegenskaper.h"



Grundegenskaper::Grundegenskaper()
{
	styrka = 0;
	fysik = 0;
	smidighet = 0;
	perception = 0;
	psyke = 0;
	intelligens = 0;
	karisma = 0;

}


Grundegenskaper::~Grundegenskaper()
{
}

void Grundegenskaper::setStyrka(int Styrka)
{
	styrka = Styrka;
}

void Grundegenskaper::setFysik(int Fysik)
{
	fysik = Fysik;
}

void Grundegenskaper::setSmidighet(int Smidighet)
{
	smidighet = Smidighet;
}

void Grundegenskaper::setPerception(int Perception)
{
	perception = Perception;
}

void Grundegenskaper::setPsyke(int Psyke)
{
	psyke = Psyke;
}

void Grundegenskaper::setIntelligens(int Intelligens)
{
	intelligens = Intelligens;
}

void Grundegenskaper::setKarisma(int Karisma)
{
	karisma = Karisma;
}

int Grundegenskaper::getStyrka(void)
{
	return styrka;
}
