#include <fstream>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void wypisz(int numery[], int rozmiar)
{
    for (int i = 0; i < rozmiar; i++)
    {
        cout << numery[i] << " ";
    }
    cout << endl;
}

void randomNumbersToFile(int n, int minVal, int maxVal)
{
    ofstream plik("wyjscie.txt");
    if (!plik)
    {
        cerr << "Error opening the file for writing." << endl;
        return;
    }

    srand(time(NULL));
    plik << rand() % (maxVal - minVal + 1) + minVal;
    for (int i = 1; i < n; i++)
    {
        srand(time(NULL) * (i + 1));
        plik << " " << rand() % (maxVal - minVal + 1) + minVal;
    }
}

int fileSize()
{
    ifstream plik("wyjscie.txt");
    int i = 0;
    int fromFile;
    while (plik >> fromFile)
    {
        i++;
    }
    return i;
}

int *fileToArray(int n)
{
    int *arr = new int[n];
    ifstream plik("wyjscie.txt");
    int fromFile;
    for (int i = 0; i < n; i++)
    {
        plik >> fromFile;
        arr[i] = fromFile;
    }
    return arr;
}

double averageFromArray(const int arr[], int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum / static_cast<double>(size);
}

int main()
{
    int numCount, minVal, maxVal;
    cout << "Enter the number of random numbers to generate: ";
    cin >> numCount;
    cout << "Enter the minimum value: ";
    cin >> minVal;
    cout << "Enter the maximum value: ";
    cin >> maxVal;

    randomNumbersToFile(numCount, minVal, maxVal);

    int size = fileSize();
    int *arr = fileToArray(size);
    cout << "Numbers from the file: ";
    wypisz(arr, size);

    double average = averageFromArray(arr, size);
    cout << "Average: " << average << endl;

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "Sum of elements: " << sum << endl;

    delete[] arr;
    return 0;
}