#include <iostream>
using namespace std;
// Definicja klasy bazowej Pracownik:
class Pracownik {
public: // wszystkie elementy członkowskie klasy są publiczne
// Definicje zmiennych członkowskich:
string imie {""};
string nazwisko {""};
// Definicja funkcji członkowskiej:
string zwrocDane() {
return imie + " " + nazwisko;
}
};
// Definicja klasy pochodnej Nauczyciel:
class Nauczyciel: public Pracownik{ // dziedziczenie publiczne
public:
// Definicja zmiennej członkowskiej:
string przedmiot {""};
// Definicja funkcji członkowskiej:
string zwrocDane() {
return imie + " " + nazwisko + ", przedmiot: " + przedmiot;
}};
class Wychowawca: public Nauczyciel {
public:
string klasa {""};
string zwrocDane() {
return imie + " " + nazwisko + ", klasa: " + klasa + ", przedmiot: " + przedmiot;
}
};
int main() {
// Utworzenie obiektu nauczyciel jako instancji klasy pochodnej Wychowawca:
Wychowawca wychowawca;
// Nadanie wartości zmiennym członkowskim obiektu nauczyciel:
wychowawca.imie = "Jan"; // zmienna odziedziczona po klasie bazowej
wychowawca.nazwisko = "Cieślar"; // zmienna odziedziczona
wychowawca.przedmiot = "Wychowanie Fizyczne"; // zmienna natywna — zdefiniowana w klasie pochodnej
wychowawca.klasa = "5A";
/* UWAGA
* Ze względu na to, że dziedziczenie jest publiczne, w klasie pochodnej dostępne są wszystkie publiczne zmienne
* członkowskie odziedziczone po klasie bazowej. W klasie pochodnej zmienne te (imie i nazwisko)
* również są publiczne.
*/
// Wywołanie metody zwrocDane() zdefiniowanej w klasie pochodnej:
cout << "Dane wychowawcy: " << wychowawca.zwrocDane() << endl;
return 0;
}