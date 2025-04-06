#include <iostream>
#include <string>
using namespace std;

class Ksiazka
{
    private:
        string tytul;
        string autor;
        int rokWydania;
        static int zliczanieKsiazek;
    public:

    Ksiazka() : Ksiazka("brak","brak",0000) {zliczanieKsiazek++;};                                                                   
    Ksiazka(string TYTUL, string AUTOR, int ROK) : tytul(TYTUL), autor(AUTOR), rokWydania(ROK) {zliczanieKsiazek++;}                  
    Ksiazka(const Ksiazka &copied) : tytul{copied.tytul}, autor{copied.autor}, rokWydania{copied.rokWydania} {zliczanieKsiazek++;}    

    void setTytul()                                                                 
        {
            string tytul1;
            cout << "Podaj tytul: ";
            cin >> tytul1;
            tytul=tytul1;
        }
        void setAutor()                                                                
        {
            string autor1;
            cout << "Podaj Autora: ";
            cin >> autor1;
            autor=autor1;
        }
        void setRok(int podanyRok)                                                                 
        {
            rokWydania=podanyRok;
        }
        string getTytul()                                                              
        {
            return tytul;
        }
        string getAutor()                                                              
        {
            return autor;
        }
        int getRok()                                                                  
        {
            return rokWydania;
        }
        void wypisz()
        {
            cout << "Tytul ksiazki: " << tytul << ".\n";
            cout << "Autor ksiazki: " << autor << ".\n";
            cout << "Rok wydania ksiazki: " << rokWydania << ".\n";
        }
    friend Ksiazka pomniejszonyRok(Ksiazka ksiazkaPomniejszana);
};

int Ksiazka::zliczanieKsiazek = 0;

Ksiazka pomniejszonyRok(Ksiazka ksiazkaPomniejszana)
{
    int pomniejszonyRok;
    pomniejszonyRok = ksiazkaPomniejszana.getRok()-100;
    ksiazkaPomniejszana.setRok(pomniejszonyRok);
    return ksiazkaPomniejszana;
}
int main()
{
    Ksiazka ksiazka1("Balladyna", "Adam",1987);
    Ksiazka ksiazka2=ksiazka1;
    Ksiazka ksiazka3("Maly Ksiaze", "Leonardo", 2000);
    ksiazka1.wypisz();
    cout << "=================================\n";
    ksiazka2.wypisz();
    cout << "=================================\n";
    Ksiazka ksiazka4=pomniejszonyRok(ksiazka3);
    ksiazka4.wypisz();
    return 1;
}