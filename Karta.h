#pragma once
#include <iostream>

class Karta
{
public:
	Karta(std::string imie, std::string nazwisko):_imie(imie),_nazwisko(nazwisko){}
	virtual ~Karta();
	virtual std::string Imie() const;
	virtual std::string Nazwisko() const;
protected:
	std::string _imie;
	std::string _nazwisko;
};