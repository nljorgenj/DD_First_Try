#pragma once


#include <string>
#include <iostream>
#include "Tärning.h"

using namespace std;

class Karaktär
{
public:
	Karaktär();
	~Karaktär();

	void getNamnFrånSpelare();
	void getSpelarNamn();
	void väljVarelse();
	void väljKön();
	void fOffensivHand();

private:
	Tärning tärning;

	string namn;
	string spelare;
	string varelse;
	string yrke;
	string kön;
	int ålderskategori; 
	int ålder;
	int längd;
	int vikt;

	int styrka;
	int fysik;
	int smidighet;
	int perception;
	int psyke;
	int intelligens;
	int karisma;

	int bärförmåga;
	string skadebonus;
	string förflyttning;
	string forceraRetirera;
	string naturligläkning;
	string återhämtaKra;
	string offensivHand;

	struct pengar {
		int guld = 0;
		int silver = 0;
		int koppar = 0;
	};


};

