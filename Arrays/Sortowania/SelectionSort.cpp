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
void posortujBabelkowoTablice(int tablica[], int rozmiarTablicy)
{
    for (int j = rozmiarTablicy; j != 1; j--)
    {
        for (int i = 0; i < j; i++)
        {
            if (tablica[i] > tablica[i + 1])
            {
                int temp = tablica[i];
                tablica[i] = tablica[i + 1];
                tablica[i + 1] = temp;
            }
        }
    }
}
void insertionSort(int tablica[], int rozmiarTablicy)
{
    for (int i = 1; i < rozmiarTablicy; i++)
    {
        int temp, index;
        for (int j = i; j > 0; j--)
        {

            if (tablica[j] < tablica[j - 1])
            {
                temp = tablica[j];
                tablica[j] = tablica[j - 1];
                index = j - 1;
            }
        }
        tablica[index] = temp;
    }
}
void selectionSort(int tablica[], int rozmiarTablicy)
{
    for (int i = rozmiarTablicy; i > 0; i--)
    {
        int max = tablica[0], index=0, temp;

        for (int j = 0; j < rozmiarTablicy - i; j++) // wyszukujemy ekstremalne wartości z tablicy.
        {

            if (tablica[j] > max)
            {
                max = tablica[j];
                index = j;
                cout <<index;
            }
        }
        
        temp = tablica[rozmiarTablicy - i];
        tablica[rozmiarTablicy - i] = max;
        tablica[index] = temp;
    }
}
int main()
{
    int table[25];
    cout << "Tablica przed sortowaniem:"<<endl;
    wypelnijLosowo(table, 25);
    wypiszTablice(table, 25);
    cout << endl;
    cout << "Tablica po insertion sort:"<<endl;
    insertionSort(table, 25);
    wypiszTablice(table, 25);
    cout << endl;
    cout << "Tablica po bubble sort:"<<endl;
    posortujBabelkowoTablice(table, 25);
    wypiszTablice(table, 25);
    cout << endl;
    cout << "Tablica po selection sort:"<<endl;
    selectionSort(table, 25);
    wypiszTablice(table, 25);
}