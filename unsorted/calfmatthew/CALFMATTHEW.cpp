#include <iostream>
using namespace std;

class film
{
private:
    string tytul;
    string Rezyser;
    int rokwydania;
    static int count;

public:
    film() : tytul("Titanic"), Rezyser("Mieczysław"), rokwydania(2012)
    {
        count++;
    }
    film(string rz, string tt, int rw) : film()
    {
        Rezyser = rz;
        tytul = tt;
        rokwydania = rw;
        count++;
    }
    film(const film &copied) : tytul(copied.tytul), Rezyser(copied.Rezyser), rokwydania(copied.rokwydania)
    {
        count++;
    }
    string getRezyser() { return Rezyser; }
    string getTytul() { return tytul; }
    int getRokWydania() { return rokwydania; }
    static int getCount() { return count; }
   void setRezyser(string rz) { Rezyser = rz; }
    void setTytul(string tt) { tytul = tt; }
    void setRokWydania(int rw) { rokwydania = rw; }
    void display()
    {
        cout << "Tytuł filmu: " << tytul << endl;
        cout << "Reżyser: " << Rezyser << endl;
        cout << "Rok premiery: " << rokwydania << endl;
        cout << endl;
    }
};
int film::count = 0;
int main()
{
    film f1;
    f1.display();
    film f2("Andrzej", "Drzewa", 2001);
    f2.display();
    film f3(f2);
    f3.display();
    cout << "Filmów: " << film::getCount() - 1 << endl;
    return 00;
}