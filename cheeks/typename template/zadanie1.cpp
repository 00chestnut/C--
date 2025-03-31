// Napisz szablon funkcji pobierającej dwa argumenty, która bedzie się dwa razy specjalizować i raz konkretyzować dla zmiennych typu:
// int,float -zwraca pierwszy argument do potegi drugiego.
// float,double-sumę argumentów
// double,double-iloczyn argumentów
// Spróbuj tak skonstruować szablon by były możliwe wywołania niejawne. Wywołaj jawnie i niejawnie w sumie trzy razy funkcję
#include <iostream>
#include <cmath>
using namespace std;
template <typename T1, typename T2>
T1 conc(T1 zmienna1, T2 zmienna2)
{
    cout << "Ogólny szablon" << endl;
    return zmienna1;
}
template <> // 1
int conc<int, float>(int zmienna1, float zmienna2)
{
    cout << "Specjalizacja int float potęga" << endl;
    return (pow(zmienna1, zmienna2));
}
template <> // 2
float conc<float, double>(float zmienna1, double zmienna2)
{
    cout << "Specjalizacja float double suma" << endl;
    return zmienna1 + zmienna2;
}
template <> // 3
double conc<double, double>(double zmienna1, double zmienna2)
{
    cout << "Specjalizacja double double iloczyn" << endl;
    return zmienna1 * zmienna2;
}
int main()
{
    cout << conc<int, float>(2, 3.0f) << endl;      // 1
    cout << conc<float, double>(2.5f, 3.5) << endl; // 2
    cout << conc<double, double>(2.0, 3.0) << endl; // 3
    return 0;
}
