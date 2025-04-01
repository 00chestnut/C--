#include <iostream>
#include <string>
using namespace std;

class Baza
{
    protected:
        int wlasnoscLiczba;
    public:
        string wlasnoscTekst;
        Baza() : Baza(1,"tekst") {}
        Baza(int WLASNOSCLICZBA, string WLASNOSCTEKST) : wlasnoscLiczba(WLASNOSCLICZBA), wlasnoscTekst(WLASNOSCTEKST) {}

        void setWlasnoscLiczba(int podanaLiczba)
        {
            wlasnoscLiczba=podanaLiczba;
        }
        int getWlasnoscLiczba()
        {
            return wlasnoscLiczba;
        }
        void display()
        {
            cout << "Liczba: " << wlasnoscLiczba << ".\n";
            cout << "Tekst: " << wlasnoscTekst << ".\n";
        }
};

class Podrzedna : protected Baza
{
    public:
        int podrzednaWlasnoscInt;

        Podrzedna() : Podrzedna(4) {}
        Podrzedna(int PODRZEDNAWLASNOSCINT) : podrzednaWlasnoscInt(PODRZEDNAWLASNOSCINT)  {}
        void setWlasnoscLiczba(int podanaLiczba)
        {
            wlasnoscLiczba=podanaLiczba;
        }
        int getWlasnoscLiczba()
        {
            return wlasnoscLiczba;
        }
        void setWlasnoscTekst(string podanyTekst) 
        {
            wlasnoscTekst = podanyTekst;
        }
        string getWlasnoscTekst()
        {
            return wlasnoscTekst;
        }
        void display()
            {
                cout << "Liczba: " << getWlasnoscLiczba() << ".\n";
                cout << "Tekst: " << getWlasnoscTekst() << ".\n";
                cout << "Podrzedny int " << podrzednaWlasnoscInt << ".\n";
            }
};
int main()
{
    Baza baza1;
    Podrzedna podrzedna1;
    podrzedna1.setWlasnoscTekst("pociag");
    podrzedna1.setWlasnoscLiczba(2);
    podrzedna1.podrzednaWlasnoscInt=3;
    podrzedna1.display();
    cout << "=========================\n";
    baza1.display();
    return 1;
}