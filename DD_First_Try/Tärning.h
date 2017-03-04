#pragma once
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>


class Tärning
{
public:
	Tärning();
	~Tärning();

	int rangeRandomAlg2(int min, int max);
	int T(int antalsidor, int antal, int modifikation);

};

