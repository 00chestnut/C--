#include <iostream>
using namespace std;

int sequence(int n)
{

    if (n <= 1)
        return 1;
    else
        return 2 * (sequence(n) - 1) - 4;
}

int main()
{
    int liczba;
    cout << "Podaj numer w ciągu do obliczenia: ";
    cin >> liczba;
    cout << sequence(liczba) << endl;
    return 0;
}
