#include <iostream>
using namespace std;
// Definicja klasy Pracownik:
class Pracownik {
public:
string imie;
string nazwisko;
void wyswietlDane() {
cout << "Imię: " << imie << endl;
cout << "Nazwisko: " << nazwisko << endl;
}
};
// Prototypy funkcji zewnętrznych:
Pracownik& pobierzDane(Pracownik&);
void wyswietlDane(const Pracownik&);
// PROGRAM GŁÓWNY
int main() {
// Utworzenie obiektu pracownik jako instancji klasy Pracownik:
Pracownik pracownik;
// Pobranie danych pracownika z klawiatury:
pracownik = pobierzDane(pracownik);
// Prezentacja danych pracownika na ekranie monitora:
wyswietlDane(pracownik);
return 0;
}
// Definicje funkcji zewnętrznych:
Pracownik& pobierzDane(Pracownik& p) {
cout << "Imię = "; cin >> p.imie;
cout << "Nazwisko = "; cin >> p.nazwisko;
return p;
}
void wyswietlDane(const Pracownik& p) {
cout << "Imię: " << p.imie << endl;
cout << "Nazwisko: " << p.nazwisko << endl;
}