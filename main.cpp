// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal sie
// i dzialal zgodnie z ponizszym opisem, a wynik jego dzialania byl
// taki sam jak podany na końcu tego pliku.
 
// Nalezy zaimplementowac klasy reprezentujące kartę osobową w
// kartotece i kartotetkę. Projekt klas powinien pozwalac na towrzenie
// roznych klas osob np. student, wykladowca i umieszczanie
// ich w kartotece.
 
// Klasa student powinna dostarczać informacje o: imieniu, nazwisku i
// roku studiów.
// Klasa wykładowca powinna dostarczać informacje o: imieniu, nazwisku
// i ulubionym zwierzeciu.
 
// Prosze zwrocic uwage, ze karta osoby jest powiazana z kartoteka, a
// kartoteka z karta osoby w taki sposob, ze zawsze wyswietlane sa
// aktualne informacje.
 
// Po odkomentowaniu ktorejkolwiek z linii definiujących makra ERROR_
// powinien pojawic sie blad kompilacji. Jezeli taki blad sie nie
// pojawi kod zostanie uznany za niekompilujacy sie poprawnie, co
// bedzie rownoznaczne z otrzymaniem 0 punktow.
 
// UWAGA! W tym zadaniu bardzo wazne jest zarzadzanie
// pamiecia. Jakiekolwiek problemy z pamiecia oznaczaja -1.5 punktu za
// wykonanie programu.
 
// UWAGA! Przy implementacji nie wolno korzystac ze zmiennych
// statycznych. Nie wolno też przeładować funkcji
// Kartoteka::Dodaj. Funkcja ta może być zaimplementowana tylko raz.
 
// Makefile dolaczony do rozwiazania powinien tworzyc plik wykonywalny
// o nazwie Lab03. Program nalezy kompilowac z flagami -Wall -g.
 
// Makefile powinien zawierac rowniez cel "clean", ktory usuwa pliki
// obiektowe i plik wykonywalny.
 
// Pliku Main.cpp, nie wolno modyfikowac.
 
// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod). Prosze utrzymac spojnosc
// nazewnictwa w programie oraz jezyka w komentarzach.
 
// Przy wykonaniu zadania nie wolno korzystać z internetu, notatek,
// ani żadnych innych materiałów (w tym własnych wcześniej
// przygotowanych plików)
 
// Kody źródłowe muszą znajdować się w katalogu ~/oop/lab_LABNR. Prawa
// do tego katalogu muszą być równe 700 (tylko dostęp dla
// właściciela).
 
// Skonczone zadanie nalezy wyslac uruchamiajac skrypt 
// ~gach/WyslijZadanie.sh
// bedac w katalogu zawierajacym rozwiazanie
 
#include"lab03.h"
#include<iostream>
 
//#define ERROR_FIRST
//#define ERROR_SECOND
 
#include"lab03.h"
 
 
int main ()
{
  // Studenci
  Student* spongebob =  new Student  ("Spongebob", "Kanciastoporty", 4);
  Student* dexter = new Student ("Dexter", "", 2);
 
  std::cout<<"Student:\t"<<spongebob->Imie()<<" "<<spongebob->Nazwisko()<<"\trok studiow: "<<spongebob->RokStudiow()<<"\n";
  std::cout<<"Student:\t"<<dexter->Imie()<<" "<<dexter->Nazwisko()<<"\trok studiow: "<<dexter->RokStudiow()<<"\n";
 
#ifdef ERROR_FIRST
  std::cout<<"Student:\t"<<spongebob->Imie()<<" "<<spongebob->Nazwisko()<<"\tulubione zwierze: "<<spongebob->UlubioneZwierze()<<"\n";
#endif
  
  const unsigned int liczbaStudentow = 2;
  Kartoteka kartotekaStudentow ("Studenci", liczbaStudentow);
  kartotekaStudentow.Dodaj(spongebob);
   
  spongebob->WypiszKartoteke();  // wypisuje: Spongebob jest w kartotece: "Studenci"
 
  kartotekaStudentow.UstawNazwe("InniStudenci");
  kartotekaStudentow.Dodaj(dexter);

  spongebob->WypiszKartoteke();  // wypisuje: Spongebob jest w kartotece: "InniStudenci"
  dexter->WypiszKartoteke(); // wypisuje: Dexter jest w kartotece: "InniStudenci"
  
  kartotekaStudentow.Wyswietl(); // wypisuje: Kartoteka "Studenci" zawiera 2 wpisy: Spongebob, Dexter
  spongebob->UstawImie("Gabka");
  kartotekaStudentow.Wyswietl(); // wypisuje: Kartoteka "Studenci" zawiera 2 wpisy: Gabka, Dexter

  // wykladowcy
  Wykladowca* bruce = new Wykladowca ("Bruce", "Wayne", "nietoperz"); 
  Wykladowca* clark = new Wykladowca ("Clark", "Kent", "tchorz");
  Wykladowca* peter = new Wykladowca ("Peter", "Parker", "pajak");
 
  std::cout<<"Wykladowca:\t"<<bruce->Imie()<<" "<<bruce->Nazwisko()<<"\tulubione zwierze: "<<bruce->UlubioneZwierze()<<"\n";
  std::cout<<"Wykladowca:\t"<<clark->Imie()<<" "<<clark->Nazwisko()<<"\tulubiony zwierze: "<<clark->UlubioneZwierze()<<"\n";
  std::cout<<"Wykladowca:\t"<<peter->Imie()<<" "<<peter->Nazwisko()<<"\tulubiony zwierze: "<<peter->UlubioneZwierze()<<"\n";
    
#ifdef ERROR_SECOND
  std::cout<<"Wykladowca:\t"<<bruce->Imie()<<" "<<bruce->Nazwisko()<<"\trok studiow: "<<bruce->RokStudiow()<<"\n";
#endif

  const unsigned int liczbaWykladowcow = 3;
  Kartoteka kartotekaWykladowcow ("Wykladowcy", liczbaWykladowcow);
  kartotekaWykladowcow.Dodaj(bruce).Dodaj(clark).Dodaj(peter);
 
  bruce->WypiszKartoteke();  // wypisuje: Bruce jest w kartotece: "Wykladowcy"
  clark->WypiszKartoteke();  // wypisuje: Clark jest w kartotece: "Wykladowcy"
  peter->WypiszKartoteke();  // wypisuje: Peter jest w kartotece: "Wykladowcy"
 
  kartotekaWykladowcow.Wyswietl(); // wypisuje: Kartoteka "Wykladowcy" zawiera 3 wpisy: Bruce, Clark, Peter
 
  // ludzie
  Student* faye = new Student ("Faye", "Valentine", 5);
  Student* luke = new Student ("Luke", "Lucky", 1);
  Wykladowca* jozef = new Wykladowca ("Jozef", "K.", "pies"); 
  Wykladowca* rincewind = new Wykladowca ("Rincewind", "", "tchorz");
 
  const unsigned int liczbaLudzi = 4;
  Kartoteka ludzie ("Ludzie", liczbaLudzi);
  ludzie.Dodaj(faye).Dodaj(luke).Dodaj(jozef).Dodaj(rincewind);
 
  std::cout<<"\nKartoteka ludzi:\n";
  for (unsigned int indeksOsoby = 0; indeksOsoby < ludzie.LiczbaWpisow(); ++indeksOsoby)
    (*(ludzie.ListaWpisow()+indeksOsoby))->WypiszKartoteke();
  
  return 0;
}
/*
Student:    Spongebob Kanciastoporty    rok studiow: 4
Student:    Dexter  rok studiow: 2
Spongebob jest w kartotece: "Studenci"
Spongebob jest w kartotece: "InniStudenci"
Dexter jest w kartotece: "InniStudenci"
Kartoteka "InniStudenci" zawiera 2 wpisow: Spongebob, Dexter
Kartoteka "InniStudenci" zawiera 2 wpisow: Gabka, Dexter
Wykladowca: Bruce Wayne ulubione zwierze: nietoperz
Wykladowca: Clark Kent  ulubiony zwierze: tchorz
Wykladowca: Peter Parker    ulubiony zwierze: pajak
Bruce jest w kartotece: "Wykladowcy"
Clark jest w kartotece: "Wykladowcy"
Peter jest w kartotece: "Wykladowcy"
Kartoteka "Wykladowcy" zawiera 3 wpisow: Bruce, Clark, Peter
 
Kartoteka ludzi:
Faye jest w kartotece: "Ludzie"
Luke jest w kartotece: "Ludzie"
Jozef jest w kartotece: "Ludzie"
Rincewind jest w kartotece: "Ludzie"
*/
