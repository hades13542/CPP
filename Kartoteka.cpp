#include "Kartoteka.h"

Kartoteka::Kartoteka(std::string nazwa,const int& ilosc):_nazwa(nazwa),_ilosc(ilosc),_curr(0){
	_kart=NULL;
	_kart = new Karta* [_ilosc];
	for (int i = 0; i < _ilosc; ++i)
	{
		_kart[i]= new Karta();
	}
}
Kartoteka::~Kartoteka(){
	for (int i = 0; i < _ilosc; ++i)
	{
		delete _kart[i];
	}
	delete [] _kart;
}
Kartoteka& Kartoteka::Dodaj(Karta* nowy){
	_kart[_curr]=nowy;
	_curr++;
	nowy->_akt=this;
	return *this;
}
void Kartoteka::UstawNazwe(std::string nowanazwa){
	_nazwa=nowanazwa;
}
void Kartoteka::Wyswietl() const{
	std::cout << "Kartoteka \""<<_nazwa<<"\" zawiera "<<_ilosc<<" wpisow ";
	for (int i = 0; i < _ilosc; ++i)
	{
		std::cout<<_kart[i]->_imie;
		if(i!=(_ilosc-1)){
			std::cout<<", ";
		}
	}
	std::cout<<"\n";
}

unsigned Kartoteka::LiczbaWpisow(){
	return (unsigned)_ilosc;
}

Karta** Kartoteka::ListaWpisow() const{
	return _kart;
	}
