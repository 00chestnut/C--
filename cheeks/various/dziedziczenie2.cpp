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
class Wychowawca: public Pracownik {
public:
string klasa {""};
string przedmiot {""};
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