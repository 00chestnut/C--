
#include <iostream>
#include <cmath>
using namespace std;

class Ulamek
{
    int licznik; // prywatne wlasnosci klasy
    int mianownik;
    void skracaj(); // deklaracja prywatnej metody skracaj
public:
    Ulamek()
    {
        licznik = 1;
        mianownik = 1;
    }
    Ulamek(int l, int m);                 // deklaracja konstruktora (przeciazamy nazwe Ulamek) przeciazamy konstruktor
    friend Ulamek pomnoz(Ulamek, Ulamek); // deklaracja przyjazni funkcji pomnoz z klasa Ulamek
    friend Ulamek dodaj(Ulamek, Ulamek);  // deklaracja przyjazni funkcji dodaj z klasa Ulamek
    void zapisz(int l, int m);            // deklaracja metody publicznej
    void wypisz()                         // przeciazane nazwy funkcji musza roznic sie lista parametrow
    {
        skracaj();
        cout << licznik << "/" << mianownik; // definicja metody wypisz
    }
}; // koniec definicji klasy
Ulamek::Ulamek(int l, int m) // definicja konstruktora dzieki temu ze konstruktor nazywa sie tak samo jak klasa
                             // mozemy go uzywac do deklaracji obiektu klasy.
{
    licznik = l;
    if (m != 0)
        mianownik = m;
    else
    {
        cout << "Mianownik nie moze miec wartosci 0 ";
        exit(1);
    }
}
void Ulamek::skracaj() // definicja prywatnej metody skracaj
{
    int a, b;
    a = abs(licznik);
    b = abs(mianownik);
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    licznik = licznik / a;
    mianownik = mianownik / a;
}
void Ulamek::zapisz(int l, int m) // definicja metody klasy
{
    licznik = l;
    if (m != 0)
        mianownik = m;
    else
    {
        cout << "Mianownik nie moze miec wartosci 0 ";
        exit(1);
    }
}
Ulamek dodaj(Ulamek ul1, Ulamek ul2)
{
    Ulamek wynik;
    wynik.licznik = ul1.licznik * ul2.mianownik + ul2.licznik * ul1.mianownik;
    wynik.mianownik = ul1.mianownik * ul2.mianownik;
    return wynik;
}
Ulamek pomnoz(Ulamek ul1, Ulamek ul2)
{
    Ulamek wynik;
    wynik.licznik = ul1.licznik * ul2.licznik;
    wynik.mianownik = ul1.mianownik * ul2.mianownik;
    return wynik;
}
int main()
{
    int l1, m1, l2, m2;
    cout << "podaj licznik i mianownik pierwszego ulamka\n";
    cin >> l1;
    cin >> m1;
    cout << "podaj licznik i mianownik drugiego ulamka\n";
    cin >> l2;
    cin >> m2;
    Ulamek ul1; // pierwszy rodzaj deklaracji obiektu klasy Ulamek
    ul1.zapisz(l1, m1);
    Ulamek ul2(l2, m2); // drugi rodzaj deklaracji obiektu klasy Ulamek
    cout << endl;

    ul1.wypisz(); // mamy dwa rodzaje deklaracji poniewaz mamy dwa konstruktory
    cout << " * ";
    ul2.wypisz(); // tylko przez funkcje zapisz i wypisz mamy dostep do licznika i  mianownika
    cout << " = ";
    pomnoz(ul1, ul2).wypisz();
    cout << endl;
    ul1.wypisz(); 
    cout << " + ";
    ul2.wypisz(); 
    cout << " = ";
    dodaj(ul1, ul2).wypisz();
    cout << endl;
    return 0; // dzieki temu uzytkownik moze korzystac z wlasnosci licznik i mianownik tylko w taki sposob
} // w jaki mu pozwolilismy definiujac metody zapisz i wypisz