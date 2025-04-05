#include <iostream>
using namespace std;

class Pracownik
{
private:
    string pesel;

public:
    string imie;
    string nazwisko;
    void wyswietlDane()
    {
        cout << "Imię: " << imie << endl;
        cout << "Nazwisko: " << nazwisko << endl;
        cout << "Pesel: " << pesel << endl;
    }
    void setPesel(const string &newPesel)
    {
        pesel = newPesel;
    }
};

Pracownik *pobierzDane(Pracownik *w_p)
{
    cout << "Imię = ";
    cin >> w_p->imie;
    cout << "Nazwisko = ";
    cin >> w_p->nazwisko;
    string newPesel;
    cout << "Pesel = ";
    cin >> newPesel;
    w_p->setPesel(newPesel);
    return w_p;
}
void wyswietlDane(const Pracownik *w_p)
{
    cout << w_p->imie;
    cout << w_p->nazwisko;
    cout << w_p->pesel;
}
Pracownik *pobierzDane(Pracownik *);
void wyswietlDane(const Pracownik *);

int main()
{
    Pracownik *w_pracownik = new Pracownik();
    w_pracownik = pobierzDane(w_pracownik);
    wyswietlDane(w_pracownik);
    delete w_pracownik;
    return 0;
}
