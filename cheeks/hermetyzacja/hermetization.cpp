
#include <iostream>
#include <string>
using namespace std;
class liczby
{
// public:
int liczba1;
int liczba2;
public:
void wypisz()
{
    cout << liczba1 << endl << liczba2;
}
void setLiczba(int wartosc1,int wartosc2)
{
  liczba1=wartosc1;
  liczba2=wartosc2;
}
void getLiczba(int &wartosc1,int &wartosc2)
{
  wartosc1=liczba1;
  wartosc2=liczba2;
}
};
int main()
{
    int jeden, dwa,wartliczba1, wartliczba2;
    cout << "podaj liczby:" << endl;
    cin >> jeden;
    cin >> dwa;
    liczby asdf; //tworzymy obiekt klasy liczby
    // cout<<asdf.liczba1; // tego nie można bo własności liczba1 i liczba 2 są private 
    // asdf.liczba1 = jeden;// tego nie można bo własności liczba1 i liczba 2 są private
    // asdf.liczba2 = dwa;// tego nie można bo własności liczba1 i liczba 2 są private
    asdf.setLiczba(jeden,dwa);// używamy publicznego setera do ustalenia wartości własności liczba1 i liczba2
    asdf.getLiczba(wartliczba1,wartliczba2);// używamy publicznego getera do wydobycia wartości własności liczba1 i liczba2
    cout<<wartliczba1<<endl;
    cout<<wartliczba2<<endl;
    // asdf.wypisz();//używamy publicznej metody do wypisania prywatnych własności
  return 0;
}