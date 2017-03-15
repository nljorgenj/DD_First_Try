#include "T�rning.h"



T�rning::T�rning()
{
	srand(time(NULL)); // Seed the time
}


T�rning::~T�rning()
{
}

int T�rning::rangeRandomAlg2(int min, int max)
{
	int n = max - min + 1;
	int remainder = RAND_MAX % n;
	int x;
	do {
		x = rand();
	} while (x >= RAND_MAX - remainder);
	return min + x % n;
}

int T�rning::T(int antalsidor, int antal, int modifikation)
{
	int resultat = 0;
	for (int i = 0; i < antal; i++) {
		resultat += rangeRandomAlg2(1, antalsidor);
		cout << "resultat = " << resultat << endl;
	}
	resultat += modifikation;
	return resultat;
}

