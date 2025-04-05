#include <iostream>
#include <limits>
#include <cstdlib>
#include <ctime>
using namespace std;

struct obywatel                                     //deklaracja struktury o nazwie obywatel
{
    int wiek;                                       //deklaracja zmiennych znajdujacych sie w tej strukturze
    string imie;
};
obywatel* utworzTablice(int rozmiar)                // Funkcja do tworzenia dynamicznej tablicy o podanym rozmiarze
{
    return new obywatel[rozmiar];
}
void pobierzDane(obywatel tablica[], int rozmiar)   // Funkcja do pobierania danych o obywatelach do tablicy
{
    for (int i = 0; i < rozmiar; ++i) {
        cout << "Podaj dane dla "<< i + 1 << " obywatela: " << endl;
        cout << "Imie: ";
        cin >> tablica[i].imie;
        cout << "Wiek: ";
        cin >> tablica[i].wiek;
    }
}
void wyszukajPoString(obywatel tablica[], int rozmiar, string wartosc)          // Funkcja do wyszukiwania osoby w tablicy po imieniu/nazwisku
{
    bool znaleziono = false;
    for (int i = 0; i < rozmiar; ++i) 
    {
        if (tablica[i].imie == wartosc)       //jezeli imie lub nazwisko osoby ktora wpisalismy sie zgadza to wyswietli jej dane
        {                                                                       //a jezeli nie to powie ze nie znaleziono takiego obywatela
            znaleziono = true;                                                  //funkcja przeszukuje cala tablice za pomoca petli
            cout << "\nObywatel znaleziony!:" << endl;
            cout << "\nImie: " << tablica[i].imie << endl;
            cout << "Wiek: " << tablica[i].wiek << endl;
        }
    }
    if (!znaleziono) {
        cout << "Nie znaleziono obywatela o podanej wartości." << endl;
    }
}
void wyszukajPoInt(obywatel tablica[], int rozmiar, int wartosc)                // Funkcja do wyszukiwania osoby w tablicy po wieku/wzroście
{                 
    bool znaleziono = false;
    for (int i = 0; i < rozmiar; ++i) 
    {
        if (tablica[i].wiek == wartosc)         //dziala tak samo jak funkcja wyszukujaca dane osoby po imieniu i nazwisku ale wyszukuje 
        {                                                                       //po wieku lub wzrosice, OBIE funkcje mozna rozdzielic na osobne dla wieku imienia nawziska i wzrostu
            znaleziono = true;
            cout << "\nObywatel znaleziony!" << endl;
            cout << "\nDane obywatela:" << endl;
            cout << "\nImie: " << tablica[i].imie << endl;
            cout << "Wiek: " << tablica[i].wiek << endl;

        }
    }
    if (!znaleziono) {
        cout << "Nie znaleziono obywatela z podaną wartością." << endl;
    }
}
void usunDane(obywatel tablica[], int rozmiar)                  // Funkcja do usuwania danych z tablicy
{
    delete[] tablica;
}

