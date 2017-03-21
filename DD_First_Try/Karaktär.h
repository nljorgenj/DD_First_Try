#pragma once


#include <string>
#include <iostream>
#include "T�rning.h"

using namespace std;

class Karakt�r
{
public:
	Karakt�r();
	~Karakt�r();

	void showLogo();
	void getNamnFr�nSpelare();
	void getSpelarNamn();
	void v�ljVarelse();
	void v�ljK�n();
	void fOffensivHand();
	void startKapital();
	void visaKarakt�r();
	void grundegenskaper();
	void v�ljYrke();
	void placeraV�rdeP�Egenskaper();

private:
	void sortArray();
	T�rning t�rning;

	string namn;
	string spelare;
	string varelse;
	string yrke;
	string k�n;
	int �lderskategori; 
	int �lder;
	int l�ngd;
	int vikt;

	int egenskaper[7];
	int styrka;
	int fysik;
	int smidighet;
	int perception;
	int psyke;
	int intelligens;
	int karisma;

	int b�rf�rm�ga;
	string skadebonus;
	int f�rflyttning;
	string forceraRetirera;
	string naturligl�kning;
	string �terh�mtaKra;
	string offensivHand;

	struct Pengar {
		int guld = 0;
		int silver = 0;
		int koppar = 0;
	} pengar;

	string klass;
	string viktigasteEgenskaperna = "";

};

