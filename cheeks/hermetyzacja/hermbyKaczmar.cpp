#include <iostream>
#include <string>
using namespace std;
class Osoba // adam reworked
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
void getPesel(int &wartosc1)
{
  wartosc1=pesel;
}
};
int main()
{
    int wartliczba1;
    string wartimie, wartnazwisko;
    cout << "podaj imie i nazwisko:" << endl;
    cin >> wartimie;
    cin >> wartnazwisko;
    Osoba asdf;
    asdf.imie = wartimie;
    asdf.nazwisko = wartnazwisko;
    cout << "podaj pesel:" << endl;
    cin >> wartliczba1;
    asdf.setPesel(wartliczba1);
    asdf.wypisz();
  return NULL;
}