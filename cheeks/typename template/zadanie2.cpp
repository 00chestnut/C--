#include <iostream>
#include <cmath>
using namespace std;
template <typename T1, typename T2>
T1 funkcja(T1 zmienna1, T2 zmienna2)
{
    return zmienna1 * zmienna2;
}
template <>
int funkcja<int, float>(int zmienna1, float zmienna2)
{
    return pow(zmienna1, zmienna2);
}
template <>
float funkcja<float,double>(float zmienna1, double zmienna2)
{
    return zmienna1+zmienna2;
}

int main()
{
    cout << endl;
    funkcja<int, float>(2, 3.0f); //wywołanue jawne
    cout << endl;
    funkcja<float, double>(4.0f, 3.0); 
    cout << endl;
    funkcja(2.0,4.0); // wywołanie niejawne
    return 0;
}