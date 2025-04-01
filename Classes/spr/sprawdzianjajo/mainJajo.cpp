#include <iostream>
using namespace std;

class Jajo
{
    private:
    string kod;
    string typChowu;
    string krajPochodzenia;
    string reszta;
    static int iloscJaj;
    void setTypChowu()
    {
        if(kod[0]=0)
        {
            typChowu="0";
        }
        else if(kod[0]=1)
        {
            typChowu=1;
        }
        else if(kod[0]=2)
        {
            typChowu="2";
        }
        else if(kod[0]=3)
        {
            typChowu="3";
        }
        else
        {
            typChowu="Zly numerek.";
        }

    }
    void setKrajPochodzenia()
    {
        if((string)kod[1]=="P" && (string)kod[2]=="L")
        {
            krajPochodzenia="Polska";
        }
        else if((string)kod[1]=="G" && (string)kod[2]=="E")
        {
            krajPochodzenia="Niemcy";
        }
        else
        {
            krajPochodzenia="Jajo z nieznanaego kraju";
        }
    }
    void setReszta()
    {
        reszta=kod[4]+kod[5]+kod[6]+kod[7]+kod[8]+kod[9]+kod[10]+kod[11];
    }
    public:
    void setKod(string kodJaja)
    {
        iloscJaj++;
        kod=kodJaja;
    }
    string getTypChowuSlownie()
    {
        string typChowku;
        if(typChowu=0)
        {
            typChowku="Ekologiczne jajo.";
        }
        else if(typChowu=1)
        {
            typChowku="Na wolnym wybiegu jajo.";
        }
        else if(typChowu=2)
        {
            typChowku="Ściółkowe jajo.";
        }
        else if(typChowu=3)
        {
            typChowku="Klatkowe jajo.";
        }
        else
        {
            typChowku="Zly numerek.";
        }
        return typChowku;
    }
    /*void Jajo(string kod)
    {

    }*/
    void print()
    {
        cout << "Typ chowu twojego jaja to: " << getTypChowuSlownie << ".\n";
        cout << "Kraj pochodzenia twojego jaja to: " << krajPochodzenia << ".\n";
        cout << "Reszta twojego jaja to: " << reszta << ".\n";
    }

};

int main()
{
    string kodJaja;
    Jajo jajo1;
    cout << "Podaj kod jaja: ";
    cin >> kodJaja;
    jajo1.setKod(kodJaja);
    jajo1.setTypChowu();
    jajo1.setKrajPochodzenia();
    jajo1.setReszta();
    jajo1.getTypChowuSlownie();
    jajo1.print();
    return 50;
}