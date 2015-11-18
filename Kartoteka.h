#pragma once
#include "Karta.h"

class Kartoteka
{
public:
	Kartoteka(std::string ,const int& );
	~Kartoteka();
	void Dodaj(Karta* nowy);
	void UstawNazwe(std::string nowanazwa);
	void Wyswietl() const;
	void WypiszKartoteke() const;
	friend class Karta;
private:
	Karta** _kart;
	std::string _nazwa;
	int _ilosc;	
};