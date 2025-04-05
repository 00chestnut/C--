#include <iostream>
using namespace std;

class Drzewo
{
    bool czyIglaste;
    bool czyTwarde;
    int obwódPnia;
    string nazwa;
    public:
    void wypisz()
    {
        cout << endl << "Czy drzewo jest iglaste? " << czyIglaste;
        cout << endl << "Czy drzewo jest twarde? " << czyTwarde;
        cout << endl << "Obwód pnia drzewa: " << obwódPnia;
        cout << endl << "Nazwa drzewa: " << nazwa;
    }
    Drzewo()
    {
        czyIglaste=false;
        czyTwarde=false;
        obwódPnia=0;
        nazwa=" ";
        cout << endl << "Użyto konstruktora bezparemetycznego";
    }
    Drzewo(bool Igly, bool Twarde, int obwod, string naz):
        czyIglaste {Igly},
        czyTwarde {Twarde},
        obwódPnia {obwod},
        nazwa {naz}
    {
        cout << endl << "Użyto konstruktora parametrycznego";
    }
    Drzewo(const Drzewo& asdf)
    {
        czyIglaste = asdf.czyIglaste;
        czyTwarde = asdf.czyTwarde;
        obwódPnia = asdf.obwódPnia;
        nazwa = asdf.nazwa;
        cout << endl << "Użyto konstruktora kopiującego";
    }
};

int main()
{
    Drzewo asdf1;
    asdf1.wypisz();
    Drzewo asdf2(1,0,55,"jaca");
    asdf2.wypisz();
    Drzewo asdf3(asdf2);
    asdf3.wypisz();

    return NULL;
}