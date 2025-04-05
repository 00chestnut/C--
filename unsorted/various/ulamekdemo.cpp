#include <iostream>
#include <cmath>
using namespace std;

class Ulamek
{
private: // prywatna wlasnosc klasy private jest domyślne i nie trzeba go pisac
    int mianownik;

public: // deklaracja publicznych metod i własności.
    int licznik;
    void setMianownik(int liczba) //publiczny setter
    {
        if (liczba==0)
        {
           cout<<"nie ma takiego mainownika";
           exit(-1);
        }
        else
        mianownik=liczba;
    }
    void getMianownik(int &liczba)//getter przez parametr
    {
        liczba = mianownik;
    }
    int getMianownik() //getter przez wartość
    {
        return mianownik;
    }
};

int main()
{
    int l1, m1, mianownik1;
    cout << "podaj licznik i mianownik pierwszego ulamka\n";
    cin >> l1;
    cin >> m1;
    Ulamek ulamek1;
    ulamek1.licznik = l1;
    // ulamek1.mianownik=m1; tak nie możemy bo wlasność mianownik jest prywatna.
    ulamek1.setMianownik(m1);//używamy więc publicznych getterów i setterów
    ulamek1.getMianownik(mianownik1);
    cout<<ulamek1.licznik<<endl;
    cout<<mianownik1<<endl;
    cout<<ulamek1.getMianownik();
    return 0;
}