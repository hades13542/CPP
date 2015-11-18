#pragma once
#include "Karta.h"


class Student : public Karta
{
public:
	Student(std::string imie, std::string nazwisko,int rok):Karta(imie,nazwisko),_rok(rok){}
	int RokStudiow() const {return _rok;}
private:
	int _rok;
};