#pragma once
#include "Karta.h"

class Wykladowca : public Karta
{
public:
	Wykladowca(std::string imie, std::string nazwisko, std::string zwierze):Karta(imie,nazwisko),_zwierze(zwierze){}
	std::string UlubioneZwierze() const {return _zwierze;}
private:
	std::string _zwierze;
};