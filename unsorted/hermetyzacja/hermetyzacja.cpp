#include <iostream>
#include <string>
using namespace std;
class osoba
{
    int pesel = 1;

public:
    string imie = "A";
    string nazwisko = "B";
    void wpisz()
    {
        cout << "podaj imie: ";
        cin >> imie;
        cout << "podaj nazwisko: ";
        cin >> nazwisko;
        cout << "podaj pesel: ";
        cin >> pesel;
    }
    void wypisz()
    {
        cout << imie << " " << nazwisko << " " << pesel;
    }
};
int main()
{
    osoba Test;
    Test.wpisz();
    Test.wypisz();

    return 0;
}