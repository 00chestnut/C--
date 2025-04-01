
#include <iostream>
#include <cstdlib>
using namespace std;
void losoweliczby(int tablica[], int rozmiarTablicy)
{
    for (int i = 0; i < rozmiarTablicy; i++)
    {
        srand(time(NULL) * (i + 1));
        tablica[i] = rand() % 25;
    }
}
void wypisz(int tablica[], int rozmiarTablicy)
{
    for (int i = 0; i < rozmiarTablicy; i++)
    {
        cout << tablica[i] << ", ";
    }
}
void insertionsort(int tablica[], int rozmiarTablicy)
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
    int tablica[25];
    losoweliczby(tablica, 25);
    cout << "tablica przed sortowaniem:" << endl;
    wypisz(tablica, 25);
    cout << endl;
    insertionsort(tablica, 25);
    cout << "tablica po sortowaniu:" << endl;
    wypisz(tablica, 25);

    return 0;
}