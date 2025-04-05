// Napisz szablon funkcji pobierającej dwa argumenty, która bedzie się dwa razy specjalizować i raz konkretyzować dla zmiennych typu:
// int,float -zwraca srednią argumentów (Z przecinkiem).
// float,int-komunikat o pogodzie 
// double,double-iloczyn argumentów
// Spróbuj tak skonstruować szablon by były możliwe wywołania niejawne. Wywołaj jawnie i niejawnie w sumie trzy razy funkcję.
#include <iostream>
using namespace std;
template <typename T1, typename T2>
T1 bbpbpbp(T1 zmienna1, T2 zmienna2)
{
    cout << "piękna pogoda dzisiaj. temperatura w stopniach celsjusza:" << endl;
    return 28; 
}
template <> 
int bbpbpbp<int, float>(int zmienna1, float zmienna2)
{
    cout << "Int float średnia" << endl;
    return ((zmienna2 + zmienna1)/2.0f); // nie zwraca z przecinkiem 
}
template <> 
double bbpbpbp<double, double>(double zmienna1, double zmienna2)
{
    cout << "Iloczyn double double" << endl;
    return zmienna1 * zmienna2;
}
int main()
{
    cout << bbpbpbp<int, float>(6, 3.0f) << endl;      
    cout << bbpbpbp<float, int>(2.5f, 3) << endl; 
    cout << bbpbpbp<double, double>(2.0, 3.0) << endl; 
    return 0;
}
 