#include "Taydentaja.h"


Taydentaja::Taydentaja(void)
{
}


Taydentaja::~Taydentaja(void)
{
}

string Taydentaja::getTutkinto()
{
	return tutkinto;
}

void Taydentaja::setTutkinto(string tutkinto)
{
	this->tutkinto=tutkinto;
}


string Taydentaja::toString()
{
	string palautus = "Olen Oppilas luokan olio nimeltani "+getEtunimi()+" "+getSukunimi()+"\nOppilasnumero : "+to_string(getOppilasnumero())+"\nMahdollinen SOTU : ";

	if(getSotu()!=nullptr)
		palautus+=(*getSotu());

	palautus+="\n\n\n";

	return palautus;
}
