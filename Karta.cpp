#include "Karta.h"
#include "Kartoteka.h"

Karta::Karta(std::string imie, std::string nazwisko):_imie(imie),_nazwisko(nazwisko),_akt(NULL){}
Karta::Karta(){}
Karta::~Karta(){}
std::string Karta::Imie() const{
	return _imie;
}
std::string Karta::Nazwisko() const{
	return _nazwisko;
}
void Karta::WypiszKartoteke() const{
		std::cout<<_imie<<" jest w kartotece : "<<_akt->_nazwa<<"\n";
	}

void Karta::UstawImie(std::string noweimie){
	_imie=noweimie;
}