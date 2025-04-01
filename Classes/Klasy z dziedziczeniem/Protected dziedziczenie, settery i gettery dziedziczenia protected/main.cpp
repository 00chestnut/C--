#include <iostream>
using namespace std;

class Pracownik                                                                         //klasa bazowa
{
public:
    string imie;
    string nazwisko;
    string zwrocDane() 
    {
        return imie + " " + nazwisko;
    }
};

class Nauczyciel: protected Pracownik                                                   //klasa podrzedna z dziedziczeniem protected
{ 
private:
    string przedmiot;
public:
    void setPrzedmiot(string pPrzedmiot) 
    {
        przedmiot = pPrzedmiot;
    }   
    string getPrzedmiot() 
    {
        return przedmiot;
    }
    string zwrocDane() 
    {
        return getImie() + " " + getNazwisko() + ", przedmiot: " + przedmiot;
    }
    void setImie(string pImie) 
    {
        imie = pImie;
    }
    void setNazwisko(string pNazwisko) 
    {
        nazwisko = pNazwisko;
    }
    string getImie() 
    {
        return imie;
    }
    string getNazwisko() 
    {
        return nazwisko;
    }
};

int main() 
{
Nauczyciel nauczyciel;
nauczyciel.setImie("Jan");                                              //musimy uzywac setterow poniewaz
nauczyciel.setNazwisko("Kowalski");                                     //dziedziczymy w sposob protected
nauczyciel.setPrzedmiot("elektronika");                                 //przedmiot ma setter bo jest prywatny
cout << "Dane nauczyciela: " << nauczyciel.zwrocDane() << endl;
return 1;
}