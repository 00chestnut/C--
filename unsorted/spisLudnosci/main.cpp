#include <iostream>
#include <limits>
#include <cstdlib>
#include <ctime>
#include "sprawdzian2.h"
using namespace std;

int main() {

    int rozmiar;
    char wybor;
    int szukanaWartosc;

    cout << "Podaj ilosc obywateli do wprowadzenia: ";                     //Tworzy tabele zgodnie z rozmiarem podanym przez uzytkownika
    cin >> rozmiar;
    obywatel* tablica = utworzTablice(rozmiar);
    pobierzDane(tablica, rozmiar);

    do {
        
        cout << "Czy chcesz wyszukac po imieniu (wpisz 'a') czy po wieku (wpisz 'b'): ";
        cin >> wybor;                                                      //Pyta sie w jaki sposob uzytkownik chce przeszukac tablice itp.

        if (wybor == 'a')
        {
            string szukanaWartosc;
            cout << "Podaj imie do wyszukania: ";
            cin >> szukanaWartosc;
            wyszukajPoString(tablica, rozmiar, szukanaWartosc);
        } 
        else if (wybor == 'b') 
        {
            cout << "Podaj wartosc do wyszukania: ";
            cin >> szukanaWartosc;
            wyszukajPoInt(tablica, rozmiar, szukanaWartosc);
        } 
        else 
        {
            cout << "Nie znaleziono podanej wartosci." << endl;
        }

        cout << "\nCzy chcesz wyszukać ponownie? (Tak - 't', Nie - 'n'): ";
        cin >> wybor;
    } while(wybor == 't' || wybor == 'T');

    srand(time(NULL));                                     // Po zakończeniu pętli, wypisujemy losowe pożegnanie w jednym z języków
    int liczba = rand() % 5 + 1;
    switch (liczba) 
    {
        case 1:
            cout << "Arrivederci!" << endl;                   // włoski
            break;
        case 2:
            cout << "Adiós!" << endl;                         // hiszpański
            break;
        case 3:
            cout << "Bi sahhattik!" << endl;                 // arabski
            break;
        case 4:
            cout << "Goodbye!" << endl;                       // angielski
            break;
        case 5:
            cout << "Auf Wiedersehen!" << endl;               // niemiecki
            break; 
    }
    usunDane(tablica, rozmiar); 
    return 0; }