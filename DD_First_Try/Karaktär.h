#pragma once

#include <iostream>
#include "Grundegenskaper.h"

using namespace std;

class Karakt�r
{
public:
	Karakt�r();
	~Karakt�r();

	void setNamn(string Namn);
	void setSpelare(string Spelare);
	void setVarelse(string Varelse);
	void setYrke(string Yrke);
	void setK�n(string K�n);
	void set�lder(int �lder);
	void setL�ngd(int L�ngd);
	void setVikt(int Vikt);

	string getNamn();
	class Grundegenskaper grundegenskaper;


private:
	string namn;
	string spelare;
	string varelse;
	string yrke;
	string k�n;
	int �lder;
	int l�ngd;
	int vikt;

};

