#include <iostream>
using namespace std;

class Pracownik
{
public:
    string imie;
    string nazwisko;
    ~Pracownik(){cout<<"jestem DESTRUKTOREM klasy bazowej"<<endl;}                              //konstruktor destruktora
    Pracownik() { cout << "bezparametrowy bazowej" << endl; };
    Pracownik(string pImie, string pNazwisko)
    {
        imie = pImie;
        nazwisko = pNazwisko;
        cout << "parametrowy bazowej" << endl;
    }
    string zwrocDane()
    {
        return imie + " " + nazwisko;
    }
};


class Nauczyciel : public Pracownik
{
public:
    ~Nauczyciel() {cout<<"jestem DESTRUKTOREM klasy pochodnej"<<endl;}                          //konstruktor destruktora
    string przedmiot;
    
    Nauczyciel() { cout << "bezparametrowy pochodnej" << endl; };
    Nauczyciel(string pImie, string pNazwisko, string pPrzedmiot) : Pracownik(pImie, pNazwisko)
    {
        cout << "parametrowy1 pochodnej" << endl;
        przedmiot = pPrzedmiot;
    }
    string zwrocDane()
    {
        return imie + " " + nazwisko + ", przedmiot: " + przedmiot;
    }
};
int main()
{
    Nauczyciel nauczyciel1;
    nauczyciel1.imie = "Jan";
    nauczyciel1.nazwisko = "Kowalski";
    nauczyciel1.przedmiot = "język angielski";
    cout << "Dane nauczyciela: " << nauczyciel1.zwrocDane() << endl;
    Nauczyciel nauczyciel2("Adam", "Nowak", "język niemiecki");
    cout << "Dane nauczyciela: " << nauczyciel2.zwrocDane() << endl;
    Nauczyciel nauczyciel3 = Nauczyciel("Jan", "Nowak", "cwelowanie");
    nauczyciel3.przedmiot = "język francuski";
    cout << "Dane nauczyciela: " << nauczyciel3.zwrocDane() << endl;
    return 0;
}