#pragma once
#include "Karta.h"

class Wykladowca : public Karta
{
public:
	Wykladowca(std::string imie, std::string nazwisko, std::string zwierze):Karta(imie,nazwisko),_zwierze(zwierze){}
	~Wykladowca();
	std::string Imie() const {return _imie;}
	std::string Nazwisko() const {return _nazwisko;}
	int UlubioneZwierze() const {return _zwierze;}
private:
	std::string _zwierze;
};