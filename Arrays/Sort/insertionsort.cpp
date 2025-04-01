#include <iostream>
#include <cstdlib>
using namespace std;
void wypelnijLosowo(int array[], int rozmiarTablicy)
{
    for (int i = 0; i < rozmiarTablicy; i++)
    {
        srand(time(NULL) * (i + 1));
        array[i] = rand() % 10;
    }
}
void wypiszTablice(int array[], int rozmiarTablicy)
{
    for (int i = 0; i < rozmiarTablicy; i++)
    {
        cout << array[i] << ", ";
    }
}
void insertionSort(int array[], int rozmiarTablicy)
{
    for (int i = 1; i < rozmiarTablicy; i++)
    {
        int temp, index;
        for (int j = i; j > 0; j--)
        {

            if (array[j] < array[j - 1])
            {
                temp = array[j];
                array[j] = array[j - 1];
                index = j - 1;
            }
        }
        array[index] = temp;
    }
}
int main()
{
    int arr[11];
    wypelnijLosowo(arr, 11);
    wypiszTablice(arr, 11);
    cout << endl;
    insertionSort(arr, 11);
    wypiszTablice(arr, 11);
}