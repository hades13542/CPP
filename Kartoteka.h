#pragma once
#include "Karta.h"

class Kartoteka
{
public:
	Kartoteka(std::string ,const int& );
	~Kartoteka();
	Kartoteka& Dodaj(Karta*);
	void UstawNazwe(std::string nowanazwa);
	void Wyswietl() const;
	//void WypiszKartoteke() const;
	unsigned LiczbaWpisow();
	Karta** ListaWpisow() const;
	friend class Karta;
private:
	Karta** _kart;
	std::string _nazwa;
	int _ilosc;	
	int _curr;
};