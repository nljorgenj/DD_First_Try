#pragma once

#include <iostream>
#include "Grundegenskaper.h"

using namespace std;

class Karaktär
{
public:
	Karaktär();
	~Karaktär();

	void setNamn(string Namn);
	void setSpelare(string Spelare);
	void setVarelse(string Varelse);
	void setYrke(string Yrke);
	void setKön(string Kön);
	void setÅlder(int Ålder);
	void setLängd(int Längd);
	void setVikt(int Vikt);

	string getNamn();
	class Grundegenskaper grundegenskaper;


private:
	string namn;
	string spelare;
	string varelse;
	string yrke;
	string kön;
	int ålder;
	int längd;
	int vikt;

};

