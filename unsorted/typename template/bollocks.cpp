#include <iostream>
using namespace std;
template <typename T1, typename T2>
T1 funkcja(T2 zmienna)
{
    cout << "konkretyzacja";
    return zmienna;
}
template <> // definicja szablonu specjalizowanego
double funkcja<double, float>(
    float zmienna)
{
    cout << "specjalizacja double float ";
    return zmienna;
}
template <>
float funkcja<float,double>(double zmienna)
{
    cout << "specjalizacja float double";
    return zmienna;
}
int main()
{
    cout << endl;
    funkcja<double, float>(2); // specjalizowanie szablonu ma priorytet nad konkretyzacja
    funkcja<float, double>(3); // kolejna specjalizacja
    funkcja<int, int>(2);      // konkretyzacja;
    return 0;
}