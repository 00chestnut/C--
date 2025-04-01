#include <iostream>
using namespace std;

class Pracownik                                                                     //klasa bazowa
{
public:
    string imie;
    string nazwisko;

    string zwrocDane() 
    {
        return imie + " " + nazwisko;
    }
};

class Nauczyciel: public Pracownik                                                  //klasa pochodna
{ 
public:
    string przedmiot;

    string zwrocDane() 
    {
        return imie + " " + nazwisko + ", przedmiot: " + przedmiot;
    }
};
class Wychowawca: public Nauczyciel                                                 //klasa pochodna klasy pochodnej
{
public:
    string klasa;
    string zwrocDane() 
    {
        return imie + " " + nazwisko + ", klasa: " + klasa + ", przedmiot: " + przedmiot;
    }
};

int main() 
{
Wychowawca wychowawca;
wychowawca.imie = "Jan"; 
wychowawca.nazwisko = "Cieślar";
wychowawca.przedmiot = "Wychowanie Fizyczne";                                       //poniewaz dziedziczenie jest publiczne to klasa wychowawca
wychowawca.klasa = "5A";                                                            //moze uzywac wartosci z klasy nauczyciel i pracownik
cout << "Dane wychowawcy: " << wychowawca.zwrocDane() << endl;
return 1;
}