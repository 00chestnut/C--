#include <iostream>
using namespace std;
class automat_do_pizzy
{
private:
    int ileSera;
    int ileSzynki;
    int ileBrokuly;
    bool czyDuza;

    float cenaSera;
    float cenaSzynki;
    float cenaBrokuly;
    float cenaCiastaMalego;

public:
    // Constructor
    automat_do_pizzy(float cenaSera, float cenaSzynki, float cenaBrokuly, float cenaCiastaMalego)
        : cenaSera(cenaSera), cenaSzynki(cenaSzynki), cenaBrokuly(cenaBrokuly), cenaCiastaMalego(cenaCiastaMalego)
    {
        ileSera = 0;
        ileSzynki = 0;
        ileBrokuly = 0;
        czyDuza = false;
        cenaSera = 2/100;
        cenaSzynki = 3/100;
        cenaBrokuly = 1/100;
    }

    // Setters
    void setIleSera(int ileSera) { this->ileSera = ileSera; }
    void setIleSzynki(int ileSzynki) { this->ileSzynki = ileSzynki; }
    void setIleBrokuly(int ileBrokuly) { this->ileBrokuly = ileBrokuly; }
    void setCzyDuza(bool czyDuza) { this->czyDuza = czyDuza; }

    // Getters
    int getIleSera() { return ileSera; }
    int getIleSzynki() { return ileSzynki; }
    int getIleBrokuly() { return ileBrokuly; }
    bool getCzyDuza() { return czyDuza; }

    // Methods
    float cenaPizzy()
    {
        float cena = cenaCiastaMalego;
        if (czyDuza)
        {
            cena = 2.0;
        }
        cena += 3;
        cena += ileSera / cenaSera;
        cena += ileSzynki / cenaSzynki;
        cena += ileBrokuly / cenaBrokuly;
        return cena;
    }

    int ileKalorii()
    {
        int kalorie = 200; // Wartość bazowa dla małej pizzy
        kalorie += ileSera / 402;
        kalorie += ileSzynki / 145;
        kalorie += ileBrokuly / 37;
        if (czyDuza)
            kalorie *= 2;
        return kalorie;
    }

    bool czyVege()
    {
        return ileSzynki == 0;
    }
};

int main()
{
    int choiceSer;
    int choiceSzynka;
    int choiceBrokuly;
    string choiceSize;
    automat_do_pizzy pizza(1.0, 1.5, 0.5, 5.0);
    pizza.setIleSera(choiceSer;);
    pizza.setIleSzynki(choiceSzynka;);
    pizza.setIleBrokuly(choiceBrokuly;);
    pizza.setCzyDuza(choiceSize;);

    cout << "Cena pizzy: " << pizza.cenaPizzy() << endl;
    cout << "Ilość kalorii: " << pizza.ileKalorii() << endl;
    cout << "Czy pizza jest wegetariańska? " << (pizza.czyVege() ? "Tak" : "Nie") << endl;

    return 0;
}