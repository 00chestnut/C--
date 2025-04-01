#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    int suma;
    int zPliku;
    ifstream odczyt("wyjazd.txt");
    while (!odczyt.eof())
    {
        odczyt >> zPliku;
        suma=suma+zPliku;
    }
    cout << suma;
    odczyt.close();
    return 0;
}