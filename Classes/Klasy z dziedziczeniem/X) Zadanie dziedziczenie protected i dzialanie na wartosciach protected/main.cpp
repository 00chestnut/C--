#include <iostream>
using namespace std;
class Pracownik                                                                               //klasa bazowa
{
private:
    string imie;
protected:
    string id;
public:
    string nazwisko;

    void setImie(string noweImie)                                                               
    {
        imie = noweImie;
    }
    string getImie()
    {
        return imie;
    }
    string zwrocDane()
    {
        return imie + " " + nazwisko + id;
    }
};

class Nauczyciel : protected Pracownik                                                      //klasa dziedziczaca z dziedziczeniem protected
{
public:
    string przedmiot;

    void setSetImie(string noweImie)
    {
        setImie(noweImie);
    }
    void setNazwisko(string noweNazwisko)
    {
        nazwisko = noweNazwisko;
    }
    string getNazwisko()
    {
        return nazwisko;
    }
    string zwrocDane()
    {
        return getImie() + " " + getNazwisko() + ", przedmiot: " + przedmiot;
    }
};
int main()
{
    Nauczyciel nauczyciel;
    nauczyciel.setSetImie("Jan");
    nauczyciel.setNazwisko("Kowalski");
    nauczyciel.przedmiot="elektronika";
    cout << "Dane nauczyciela: " << nauczyciel.zwrocDane() << endl;
    return 0;
}