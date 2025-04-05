#include <iostream>
#include <string>
using namespace std;

class Dystrybutor
{
private:
    int iloscWody;
    int totalNalanaWoda;
    int pojemnosc;
    string kolorDystrybutora;
    bool czyMaCieplaWode;
    static int liczbaDystrybutorow;

public:
    // constructor
    Dystrybutor()
    {
        iloscWody = 0;
        totalNalanaWoda = 0;
        pojemnosc = 0;
        kolorDystrybutora = "Brak";
        czyMaCieplaWode = false;
        liczbaDystrybutorow++;
    }

    // fill cup
    void nalejDoKubka(int ile, int &kubek)
    {
        if (ile <= iloscWody)
        {
            kubek += ile;
            iloscWody -= ile;
            totalNalanaWoda += ile;
            cout << "Nalano " << ile << " ml do kubka. W kubku jest teraz: " << kubek << " ml." << endl;
        }
        else
        {
            cout << "Za malo wody w dystrybutorze!" << endl;
        }
    }

    // refill tank
    void uzupelnijWode()
    {
        iloscWody = pojemnosc;
        cout << "Dystrybutor uzupelniony do " << pojemnosc << " ml." << endl;
    }

    // setters
    void setPojemnosc(int nowaPojemnosc)
    {
        pojemnosc = nowaPojemnosc;
    }

    void setKolorDystrybutora(string kolor)
    {
        kolorDystrybutora = kolor;
    }

    void setCzyMaCieplaWode(bool czyCiepla)
    {
        czyMaCieplaWode = czyCiepla;
    }

    // display
    void wypiszInformacjeODystrybutorze()
    {
        cout << "Kolor dystrybutora: " << kolorDystrybutora << endl;
        cout << "Czy ma ciepla wode: " << (czyMaCieplaWode ? "Tak" : "Nie") << endl;
        cout << "Ilosc wody: " << iloscWody << " ml" << endl;
        cout << "Pojemnosc dystrybutora: " << pojemnosc << " ml" << endl;
        cout << "Total nalana woda: " << totalNalanaWoda << " ml" << endl;
        cout << "Liczba dystrybutorow: " << liczbaDystrybutorow << endl;
    }

    // undergound method
    static int getLiczbaDystrybutorow()
    {
        return liczbaDystrybutorow;
    }
};

// startup static
int Dystrybutor::liczbaDystrybutorow = 0;

int main()
{
    Dystrybutor d1;
    d1.setPojemnosc(2000);
    d1.setKolorDystrybutora("Niebieski");
    d1.setCzyMaCieplaWode(true);
    d1.uzupelnijWode();

    int kubek = 0;
    d1.nalejDoKubka(250, kubek);

    d1.wypiszInformacjeODystrybutorze();

    cout << "Liczba dystrybutorow: " << Dystrybutor::getLiczbaDystrybutorow() << endl; // delete this

    return 0;
}