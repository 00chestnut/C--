#include <iostream>
#include "sprawdzian.h"
using namespace std;


int main()
{
    int liczbaOsob;
    Osoby *Osoba;
    Osoba = new Osoby[liczbaOsob];
    cout << "Podaj ile osob chcesz wprowadzic: ";
    cin >> liczbaOsob;
    Osoby* tablica = utworzTablice(liczbaOsob);
    cout << "\n";
    wypelnianie(liczbaOsob, Osoba);
    wypisanieOsob(liczbaOsob, Osoba);
    return 0;
}