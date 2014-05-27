#pragma once
#include "kanta_luokka.h"
#include "stdafx.h"
class Johdettu_luokka : public Kanta_luokka
{
public:
	Johdettu_luokka(void);
	Johdettu_luokka(char*);
	~Johdettu_luokka(void);

	void nayta_tiedot(void);

private:
	char oppilaitos[40];
};

