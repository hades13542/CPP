#pragma once
#include "Karta.h"


class Student : public Karta
{
public:
	Student(std::string imie, std::string nazwisko,int rok):Karta(imie,nazwisko),_rok(rok){}
	~Student();
	std::string Imie() const {return _imie;}
	std::string Nazwisko() const {return _nazwisko;}
	int RokStudiow() const {return _rok;}
private:
	int _rok;
};