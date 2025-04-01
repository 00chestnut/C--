#include <iostream>
using namespace std;

class Pracownik                                                       //klasa bazowa
{
public:
string imie;
string nazwisko;

string zwrocDane() 
{
    return imie + " " + nazwisko;
}
};

class Nauczyciel: public Pracownik                                  //klasa dziedziczaca publicznie
{
public:
string przedmiot;
string zwrocDane() 
{
    return imie + " " + nazwisko + ", przedmiot: " + przedmiot;
}
};
int main() 
{
Nauczyciel nauczyciel;                                              
nauczyciel.imie = "Jan";                                            //mamy dostep do imienia i nazwiska, poniewaz klasa
nauczyciel.nazwisko = "Kowalski";                                  //dziedziczaca ma dziedziczenie publiczne
nauczyciel.przedmiot = "elektronika";
cout << "Dane nauczyciela: " << nauczyciel.zwrocDane() << endl;
return 1;
}