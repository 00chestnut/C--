#include <iostream>
#include <string>
using namespace std; // GOAT THATS WHY HE'S THE GOAT
class Osoba
{
int pesel;
public:
string imie;
string nazwisko;

void wypisz()
{
    cout << "imie: " << imie << endl << "nazwisko: " << nazwisko << endl << "pesel: " << pesel;
}
void setPesel(int wartosc1)
{
  pesel=wartosc1;
}
};
int main()
{
    int wartliczba1;
    string wartimie, wartnazwisko;
    cout << "podaj imie i nazwisko:" << endl;
    cin >> wartimie;
    cin >> wartnazwisko;
    Osoba lattafa;
    lattafa.imie = wartimie;
    lattafa.nazwisko = wartnazwisko;
    cout << "podaj pesel:" << endl;
    cin >> wartliczba1;
    lattafa.setPesel(wartliczba1);
    lattafa.wypisz();
  return NULL;
}