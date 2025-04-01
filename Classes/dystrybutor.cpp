#include <iostream>
using namespace std;

class Dystrybutor
{
    int iloscWody;
    int totalNalanaWoda;
    int pojemnosc;
    string kolorDystrybutora;
    bool czyMaCieplaWoda;
    static int liczbaDystrybutorów;
    //-----------------------------------------------------------------------------
    public:
    void nalejDoKubka(int ile, int &kubek)
    {
        if(ile<iloscWody)
        {
            kubek=ile;
            iloscWody=iloscWody-ile;
        }
        else
        {
            kubek=iloscWody;
            iloscWody=0;
        }
    }
    void uzupelnijWode()
    {
        int dodanieWoda;
        cout << "-----------------------------\n";
        cout << "Ile wody chcialbys uzupelnic?: ";
        cin >> dodanieWoda;
        if(dodanieWoda+iloscWody>pojemnosc)
        {
            iloscWody=pojemnosc;
        }
        else
        {
            iloscWody+=dodanieWoda;
        }
    }
    void setPojemnosc(int pojemnosc1)
    {
        pojemnosc=pojemnosc1;
    }
    void setKolorDystrybutora(string kolor)
    {
        kolorDystrybutora=kolor;
    }
    void setCzyMaCieplaWode(bool czyCiepla)
    {
        if(czyCiepla==0)
        {
            czyMaCieplaWoda=0;
        }
        else
        {
            czyMaCieplaWoda=1;
        }
    }
    void wypiszInformacjeOdystrybutorze()
    {
        cout << "Ilosc wody " << iloscWody << ".\n";
        cout << "Pojemnosc " << pojemnosc << ".\n";
        cout << "Kolor dystrybutora to " << kolorDystrybutora << ".\n";
        if(czyMaCieplaWoda==0)
        {
            cout << "Nie ma ciepla wode.\n";
        }
        else
        {
            cout << "Ma cieplej wody.\n";
        }
    }
};

int main()
{
    int pojemnosc, ileWodaNalac, kubek;
    string kolor;
    bool cieplaWoda;
    Dystrybutor dystrybutor1;
    cout << "Podaj pojemnosc: ";
    cin >> pojemnosc;
    cout << "Podaj kolor: ";
    cin >> kolor;
    cout << "Ma ciepla woda? (1 albo 0): ";
    cin >> cieplaWoda;
    dystrybutor1.setPojemnosc(pojemnosc);
    dystrybutor1.setKolorDystrybutora(kolor);
    dystrybutor1.setCzyMaCieplaWode(cieplaWoda);
    dystrybutor1.uzupelnijWode();
    cout <<"Ile wody chcesz nalac do kubka?: ";
    cin >> ileWodaNalac;
    dystrybutor1.nalejDoKubka(ileWodaNalac, kubek);

    dystrybutor1.wypiszInformacjeOdystrybutorze();
    cout << "Kubek ma w sobie "<< kubek << " wody.\n";
    return 88;
}