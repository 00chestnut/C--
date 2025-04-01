#include <iostream>
#include <string>
using namespace std;

class Bazowa
{
public:
    int wartosc;

    void display()
    {
        cout<<wartosc<<endl;
    }
    void powieksz()
    {
        wartosc++;
    }
};

class Pochodna : public Bazowa
{
public:  
    void display()
    {
        cout<<wartosc<<endl;
    }
    void powieksz()
    {
        wartosc += 2;
    }
};


int main()
{
    Bazowa bazowa;
    Pochodna pochodna;

    bazowa.wartosc=1;
    pochodna.wartosc=1;
    bazowa.powieksz();
    
    pochodna.powieksz();

    bazowa.display();
    pochodna.display();

    return 0;
}