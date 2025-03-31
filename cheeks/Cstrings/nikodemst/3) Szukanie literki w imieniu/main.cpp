#include <iostream>
#include <cstring>
using namespace std;
int literkaWnapisie(char napis[30], char literka)
{
    int licznik = 0;
    for (short i = 0; napis[i] != '\0'; i++)
    {
        if (napis[i] == literka)
        {
            licznik++;
            cout << i << ", ";
        }
    }
    return licznik;
}
int literkaWnapisie2(char napis[30], char literka)
{
    return strlen(napis)-strlen(strchr(napis,literka));
}
int main()
{
    char tablicaZnakow[30], literka;

    cout << "podej imie i nazwisko" << endl;
    cin.get(tablicaZnakow, 30);
    cin.ignore(50, '\n');
    cout << "podej literke";
    cin >> literka;
    cout << literkaWnapisie2(tablicaZnakow, literka);
    return 0;
}