#include "Kartoteka.h"

Kartoteka::Kartoteka(std::string nazwa,const int& ilosc):_nazwa(nazwa),_ilosc(ilosc){
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
void Kartoteka::Dodaj(Karta* nowy){

}
void Kartoteka::UstawNazwe(std::string nowanazwa){
	_nazwa=nowanazwa;
}
void Kartoteka::Wyswietl() const{
	std::cout << "Kartoteka "<<_nazwa<<" zawiera"<<_ilosc<<" wpisy ";
	for (int i = 0; i < _ilosc; ++i)
	{
		std::cout<<_kart[i]->_imie <<" \n";
	}
}
void Kartoteka::WypiszKartoteke() const{
}
