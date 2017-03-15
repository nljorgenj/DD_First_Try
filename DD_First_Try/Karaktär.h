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

	void getNamnFr�nSpelare();
	void getSpelarNamn();
	void v�ljVarelse();
	void v�ljK�n();
	void fOffensivHand();

private:
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

	int styrka;
	int fysik;
	int smidighet;
	int perception;
	int psyke;
	int intelligens;
	int karisma;

	int b�rf�rm�ga;
	string skadebonus;
	string f�rflyttning;
	string forceraRetirera;
	string naturligl�kning;
	string �terh�mtaKra;
	string offensivHand;

	struct pengar {
		int guld = 0;
		int silver = 0;
		int koppar = 0;
	};


};

