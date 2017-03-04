#pragma once

#include <iostream>
#include "Tärning.h"

using namespace std;

class Grundegenskaper
{
public:
	Grundegenskaper();
	~Grundegenskaper();

	void setStyrka(int Styrka);
	void setFysik(int Fysik);
	void setSmidighet(int Smidighet);
	void setPerception(int Perception);
	void setPsyke(int Psyke);
	void setIntelligens(int Intelligens);
	void setKarisma(int Karisma);

	int getStyrka(void);
	Tärning tärning;

private:
	int styrka;
	int fysik;
	int smidighet;
	int perception;
	int psyke;
	int intelligens;
	int karisma;


};

