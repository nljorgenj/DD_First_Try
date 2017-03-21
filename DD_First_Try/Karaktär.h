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

	void showLogo();
	void getNamnFrånSpelare();
	void getSpelarNamn();
	void väljVarelse();
	void väljKön();
	void fOffensivHand();
	void startKapital();
	void visaKaraktär();
	void grundegenskaper();
	void väljYrke();
	void placeraVärdePåEgenskaper();

private:
	void sortArray();
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

	int egenskaper[7];
	int styrka;
	int fysik;
	int smidighet;
	int perception;
	int psyke;
	int intelligens;
	int karisma;

	int bärförmåga;
	string skadebonus;
	int förflyttning;
	string forceraRetirera;
	string naturligläkning;
	string återhämtaKra;
	string offensivHand;

	struct Pengar {
		int guld = 0;
		int silver = 0;
		int koppar = 0;
	} pengar;

	string klass;
	string viktigasteEgenskaperna = "";

};

