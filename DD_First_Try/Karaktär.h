#pragma once


#include <string>
#include <iostream>
#include <iomanip>
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
	void färdigheter();

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

	int besvärjelsekonst;
	int dyrka;
	int finnaDoldaTing;
	int floraOchFauna;
	int förhandla;
	int förstaHjälpen;
	int geografi;
	int hantverk;
	int heraldik;
	int historia;
	int jaktOchFällor;
	int kulturer;
	int läsaOchSkriva;
	int orientera;
	int riddjur;
	int rörlighet;
	int simma;
	int sjökunnighet;
	int spel;
	int språkModersmål;
	int språk;
	int spåra;
	int stridAvstånd;
	int stridNärstrid;
	int stridObeväpnad;
	int tjuveri;
	int underhålla;
	int vildmarksliv;
	int värdesätta;

};

