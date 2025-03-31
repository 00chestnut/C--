#include <iostream>
using namespace std;
// Definicja klasy Pracownik:
class Pracownik {
const int id = 0; // inicjalizacja stałej const wartością domyślną
string imie, nazwisko;
public:
// Prototypy konstruktorów:
Pracownik();
Pracownik(int, string, string);
// Prototyp funkcji członkowskiej:
void wyswietlDane();
};
// Definicja konstruktora domyślnego z listą inicjalizatorów zmiennych członkowskich:
Pracownik::Pracownik():
id {-1},
imie {"Imię domyślne"},
nazwisko {"Nazwisko domyślne"} {
cout << "Komunikat kontrolny: wywołano konstruktor domyślny ..." << endl;
}
// Definicja konstruktora parametrycznego z listą inicjalizatorów zmiennych członkowskich:
Pracownik::Pracownik(int pId, string pImie, string pNazwisko):
id {pId},
imie {pImie},
nazwisko {pNazwisko} {
cout << "Komunikat kontrolny: wywołano konstruktor parametryczny ..."
<< endl;
}
// Definicja funkcji członkowskiej:
void Pracownik::wyswietlDane() {
cout << "Numer identyfikacyjny: " << id << endl;
cout << "Imię: " << imie << endl;
cout << "Nazwisko: " << nazwisko << endl;
}
int main() {
// Utworzenie obiektu pracownik1 jako instancji klasy Pracownik:
Pracownik pracownik1;   
/* UWAGA
* Konstruktor domyślny zdefiniowany przez programistę został wywołany w sposób niejawny.
* Konstruktor ten można oczywiście wywołać w sposób jawny:
* Pracownik pracownik1 = Pracownik();
* Obiekt pracownik1 został utworzony i zainicjowany wartościami domyślnymi.
*/
// Wyświetlenie wartości przechowywanych w zmiennych członkowskich obiektu pracownik1:
pracownik1.wyswietlDane();
cout << endl;
// Utworzenie obiektu pracownik2 jako instancji klasy Pracownik:
Pracownik pracownik2(1, "Jan", "Kowalski");
/* UWAGA
* Konstruktor parametryczny zdefiniowany przez programistę został wywołany w sposób niejawny.
* Obiekt pracownik2 został utworzony i zainicjowany wartościami argumentów podanych w wywołaniu
* tego konstruktora.
* Konstruktor parametryczny można oczywiście wywołać w sposób jawny:
* Pracownik pracownik2 = Pracownik(1, "Jan", "Kowalski");
*/
// Wyświetlenie wartości przechowywanych w zmiennych członkowskich obiektu pracownik2:
pracownik2.wyswietlDane();
Pracownik pracownik3 {2,"bob","the bill"}; //tak też można inicjalizować
return 0;
}