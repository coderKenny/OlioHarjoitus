#pragma once

#include "stdafx.h"

class Kanta_luokka
{
private:
		char nimi[30];
		char osoite[30];
public:
	void aseta_nimi(char *n) {strcpy(nimi,n);}
	void aseta_osoite(char *o) {strcpy(osoite,o);}
	void tulosta_nimi() {cout<<nimi;}
	void tulosta_osoite() {cout<<osoite;}
	
	Kanta_luokka(){} // oletuskonstruktori vaaditaan tässä
	Kanta_luokka(char *name,char *addr) // Kantaluokan konstruktori
	{
		strcpy(nimi,name);
		strcpy(osoite,addr);
	}
	
	virtual void nayta_tiedot(void)
	{
		cout<<"\n"<<nimi<<", "<<osoite<<" ";
	}

	~Kanta_luokka(void);

};





