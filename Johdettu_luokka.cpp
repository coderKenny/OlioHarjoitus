#include "stdafx.h"
#include "Johdettu_luokka.h"


Johdettu_luokka::Johdettu_luokka(void)
{
}

Johdettu_luokka::Johdettu_luokka(char* oppilaitos)
{
	strcpy(this->oppilaitos,oppilaitos);
}


Johdettu_luokka::~Johdettu_luokka(void)
{
	cout<< "\nJohdettu olio destructed\n";
}


void Johdettu_luokka::nayta_tiedot(void)
{
	cout <<"\n"<< oppilaitos <<" ";
}