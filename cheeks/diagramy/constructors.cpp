#include <iostream>
#include <string>

using namespace std;

class Osoba
{
private:
    int id;
    string imie;
    static int liczbaObiektow;

public:
    // Default constructor
    Osoba() : id(0), imie("")
    {
        liczbaObiektow++;
    }

    // Parameterized constructor
    Osoba(int i, string n) : id(i), imie(n)
    {
        liczbaObiektow++;
    }

    // Display
    void wyswietl()
{
    if (!imie.empty()) 
      {  cout << "Cześć jestem " << imie << endl; }
    else
       {  cout << "Brak danych" << endl; } // always displays no data ?
}


    // Static method to return object count
    static int liczbaObiektowStatic()
    {
        return liczbaObiektow;
    }
};

int Osoba::liczbaObiektow = 0;

int main()
{
    int id;
    string imie;

    cout << "Podaj id: ";
    cin >> id;
    cin.ignore();
    cout << "Podaj imię: ";
    getline(cin, imie);

    Osoba o1(id, imie);

    Osoba o2;

    o1.wyswietl();
    o2.wyswietl();

    cout << "Liczba obiektów: " << Osoba::liczbaObiektowStatic() << endl;

    return 0;
}