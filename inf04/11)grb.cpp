// grupa B
// Założenia aplikacji:
// ‒ Zastosowany obiektowy język programowania zgodny z zainstalowanym na stanowisku
// egzaminacyjnym: C++ lub C#, lub Java, lub Python
// ‒ Tablica oraz operacje na niej wykonywane są implementowane z wykorzystaniem klasy
// ‒ Pola klasy:
// ‒ Tablica liczb całkowitych (ma być tradycyjną tablicą, a w Python listą)
// ‒ Liczba elementów tablicy zapisana jako liczba całkowita. Pole
// przechowuje faktyczną liczbę elementów. Wszystkie operacje
// są ograniczone wartością tego pola
// ‒ Oba pola są dostępne tylko w tej klasie oraz niedostępne dla
// klas potomnych
// ‒ Konstruktor klasy:
// ‒ Przyjmuje jako argument rozmiar tablicy
// ‒ Ustawia wartość pola liczby elementów tablicy na wartość
// argumentu
// ‒ Wypełnia tablicę, będącą polem klasy, pseudolosowymi
// liczbami całkowitymi z zakresu od 1 do 6
// ‒ Metody klasy:
// ‒ Wyświetlająca wszystkie elementy tablicy w postaci
// „<index_tablicy>: <wartość>”. Nie zwraca wartości
// ‒ Wyszukująca wszystkie wystąpienie wartości, przekazanej
// jako argument. Metoda zwraca indeksy szukanego elementu
// lub liczbę -1, gdy elementu nie znaleziono
// ‒ Wyświetlająca wszystkie wartości podzielne przez 3 z tablicy
// i zwracająca ich liczbę
// ‒ Licząca iloczyn wartości w tablicy i zwracająca
// tą wartość
// -Znajdującą wartości extremalne i zwracającą je.
// ‒ Wszystkie metody są dostępne poza klasą
// ‒ Program główny:
// ‒ Tworzy obiekt klasy z rozmiarem tablicy większym od 10
// ‒ Sprawdza działanie wszystkich metod:
// ‒ Komunikacja z użytkownikiem musi być zrozumiała.
// ‒ Program powinien być zapisany czytelnie, z zachowaniem zasad czystego formatowania kodu
// ‒ Dla obiektów, pól, metod i zmiennych należy stosować znaczące nazewnictwo angielskie lub polskie.
// Dopuszcza się dla klasy i pola tablicowego nazewnictwo ogólne (np. tab, tablica, table)

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Tablica
{
private:
    int *tablica;
    int rozmiar;

public:
    Tablica(int n) : rozmiar(n), tablica(new int[n])
    {
        srand(time(0));
        for (int i = 0; i < n; i++)
            tablica[i] = rand() % 6 + 1;
    }

    ~Tablica() { delete[] tablica; }

    void wyswietl()
    {
        for (int i = 0; i < rozmiar; i++)
            cout << i << ": " << tablica[i] << endl;
    }

    void wyszukaj(int wartosc)
    {
        bool znaleziono = false;
        for (int i = 0; i < rozmiar; i++)
            if (tablica[i] == wartosc)
            {
                cout << "Znaleziono na indeksie: " << i << endl;
                znaleziono = true;
            }
        if (!znaleziono)
            cout << "Nie znaleziono wartosci " << wartosc << endl;
    }

    int PodzielnePrzez3()
    {
        int liczba = 0;
        for (int i = 0; i < rozmiar; i++)
            if (tablica[i] % 3 == 0)
            {
                cout << tablica[i] << " ";
                liczba++;
            }
        cout << endl
             << "Ilość podzielnych przez 3: ";
        return liczba;
    }

    int obliczIloczyn()
    {
        int iloczyn = 1;
        for (int i = 0; i < rozmiar; i++)
            iloczyn *= tablica[i];
        return iloczyn;
    }
    int findMin()
    {
        int minVal = tablica[0];
        for (int i = 1; i < 15; i++)
        {
            if (tablica[i] < minVal)
                minVal = tablica[i];
        }
        return minVal;
    }
    int findMax()
    {
        int maxVal = tablica[0];
        for (int i = 1; i < 15; i++)
        {
            if (tablica[i] > maxVal)
                maxVal = tablica[i];
        }
        return maxVal;
    }
};

int main()
{
    Tablica tab(15);
    cout << "Elementy tablicy:" << endl;
    tab.wyswietl();
    cout << "\nWyszukiwanie liczby 3:" << endl;
    tab.wyszukaj(3);
    cout << "\nWartosci podzielne przez 3:" << endl;
    cout << "Liczba: " << tab.PodzielnePrzez3() << endl;
    cout << "\nIloczyn wartosci: " << tab.obliczIloczyn() << endl;
    cout << "\nWartość największa: " << tab.findMax();
    cout << "\nWartość najmniejsza: " << tab.findMin();
    return 0;
}
