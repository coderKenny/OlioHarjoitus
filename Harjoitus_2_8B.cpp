// Harjoitus_2_8B.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "Johdettu_luokka.h"
#include "Kanta_luokka.h"

int _tmain(int argc, _TCHAR* argv[])
{
	char nimi[30]={'K','e','n','n','e','t','h',' ','E','k','b','o','m'};
	char osoite[30]={'K','e','t','o','l','a','n','k','a','t','u',' ','5',' ','a','s',' ','1','8'};
	char oppilaitos[40]={'O','p','i','f','r','a','m','e'};

	cout<<nimi<<endl;
	cout<<osoite<<endl<<endl;
	Kanta_luokka* kantaOlio = new Kanta_luokka(nimi,osoite);
	Johdettu_luokka* johdettuOlio = new Johdettu_luokka(oppilaitos);

	Kanta_luokka* yleisOsoitin1;
	Kanta_luokka* yleisOsoitin2;

	yleisOsoitin1=kantaOlio;
	yleisOsoitin2=johdettuOlio;

	//kantaOlio->nayta_tiedot();
	yleisOsoitin1->nayta_tiedot();
	cout <<endl;
	yleisOsoitin2->nayta_tiedot();
	cout<<endl<<endl;

	yleisOsoitin1->Kanta_luokka::nayta_tiedot();


	delete kantaOlio;
	delete johdettuOlio;

	getchar();
	return 0;
}

