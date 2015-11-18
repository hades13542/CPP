#pragma once
#include <iostream>

class Kartoteka;
class Karta
{
public:
	Karta(std::string, std::string);
	Karta();
	virtual ~Karta();
	virtual std::string Imie() const;
	virtual std::string Nazwisko() const;
	friend class Kartoteka;
	virtual void WypiszKartoteke() const;
	virtual void UstawImie(std::string);
protected:
	std::string _imie;
	std::string _nazwisko;
	Kartoteka* _akt;
};