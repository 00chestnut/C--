#include <iostream>
using namespace std;
// Definicja klasy bazowej Pracownik:
class Pracownik
{
private:
    string imie{};

protected:
    string id;

public:
    // Definicje prywatnych zmiennych członkowskich:
    string nazwisko{};
    void setImie(string noweImie)
    {
        imie = noweImie;
    }
    
    string getImie()
    {
        return imie;
    }


    // Definicja publicznej funkcji członkowskiej:
    string zwrocDane()
    {
        return imie + " " + nazwisko + id;
    }
};
// Definicja klasy pochodnej Nauczyciel:
class Nauczyciel : private Pracownik
{ // dziedziczenie protected
public:
    // Definicja zmiennej członkowskiej:
    string przedmiot{""};

    void setSetImie(string noweImie)
    {
        setImie(noweImie);
    }

    void setNazwisko(string noweNazwisko)
    {
        nazwisko = noweNazwisko;
    }

    string getNazwisko(){
        return nazwisko;
    }

    // Definicja funkcji członkowskiej:
    string zwrocDane()
    {
        return getImie() + " " + getNazwisko() + ", przedmiot: " + przedmiot;
    }
  
    /* UWAGA
     * Dostęp do prywatnych zmiennych członkowskich imie i nazwisko należących do klasy bazowej
     * uzyskano za pomocą publicznych metod dostępowych — setterów i getterów,
     * które również zostały zdefiniowane w tej klasie.
     */
};
int main()
{
    // Utworzenie obiektu nauczyciel jako instancji klasy pochodnej Nauczyciel:
    Nauczyciel nauczyciel;
    // Nadanie wartości zmiennym członkowskim obiektu nauczyciel:
    // nauczyciel.imie=Jan tak nie mogę bo imie protected zostało protected.
    nauczyciel.setSetImie("Jan");
    nauczyciel.setNazwisko("Kowalski");
    nauczyciel.przedmiot="elektronika";
    /* UWAGA
     * Prywatne zmienne członkowskie imie i nazwisko należące do klasy bazowej Pracownik nie są dziedziczone
     * do klasy pochodnej Nauczyciel. Dostęp do tych zmiennych członkowskich z poziomu klasy Nauczyciel
     * uzyskano przez wykorzystanie publicznych metod dostępowych (setterów) zdefiniowanych w klasie Pracownik,
     * które podlegają dziedziczeniu. Dostęp do prywatnej zmiennej członkowskiej przedmiot zdefiniowanej
     * w klasie Nauczyciel uzyskano w analogiczny sposób.
     */
    // Wywołanie metody zwrocDane() zdefiniowanej w klasie pochodnej:
    cout << "Dane nauczyciela: " << nauczyciel.zwrocDane() << endl;
    return 0;
}