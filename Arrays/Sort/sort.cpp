#include <iostream>
#include <cstdlib>
using namespace std;
void wypelnijLosowo(int tablica[], int rozmiarTablicy)
{
    for (int i = 0; i < rozmiarTablicy; i++)
    {
        srand(time(NULL) * (i + 1));
        tablica[i] = rand() % 10;
    }
}
void wypiszTablice(int tablica[], int rozmiarTablicy)
{
    for (int i = 0; i < rozmiarTablicy; i++)
    {
        cout << tablica[i] << ", ";
    }
}
void sortowanie(int tablica[], int rozmiarTablicy)
{
    for (int i = 1; i < rozmiarTablicy; i++)
    {
        for (int j = i; j > 0; j--)
        {
            int temp;

            if (tablica[j] < tablica[j - 1])
            {
                temp = tablica[j];
                tablica[j] = tablica[j - 1];
                tablica[j - 1] = temp;
            }
        }
    }
}

int main()
{
    int tablica[10];
    wypelnijLosowo(tablica, 10);
    cout << "tablica przed sortowaniem:" << endl;
    wypiszTablice(tablica, 10);
    cout << endl;
    sortowanie(tablica, 10);
    cout << "tablica po sortowaniu:" << endl;
    wypiszTablice(tablica, 10);

    return 0;
}