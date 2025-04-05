#include <fstream>
#include <iostream>
using namespace std;
void Plikewpisywanie()
{
    fstream plik;
    plik.open("plik.txt", ios::app);
    int powturzenie = 0, dodanielicbydopliku = 0;
    cout << "podej ile liczb w pliku" << endl;
    cin >> powturzenie;
    for (int i = 1; i <= powturzenie; i++)
    {
        cout << "podej liczbe" << endl;
        cin >> dodanielicbydopliku;
        plik << " " << dodanielicbydopliku;
    }
    plik.close();
}
void otwieranie()
{
    int zPliku;
    ifstream plik("plik.txt");
    cout << " liczby w piku " << endl;
    while (!plik.eof())
    {
        plik >> zPliku;
        cout << zPliku << ", ";
    }
    cout << endl;
    plik.close();
}
void sumapliku()
{
    int zPliku, suma = 0;
    cout << "suma " << endl;
    ifstream sumaa("plik.txt");
    while (!sumaa.eof())
    {
        sumaa >> zPliku;
        suma = zPliku + suma;
    }
    sumaa.close();
    cout << suma;
}