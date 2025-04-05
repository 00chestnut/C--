#include <iostream>
using namespace std;
template <typename T1, typename T2, typename T3>
T1 obw(T1 bok1, T2 bok2, T3 bok3)
{
    return (bok1 + bok2 + bok3);
}
int main()
{
    float bok1{1.5}, bok2{3}, bok3{4.2};
    cout << "Pole wynosi " << obw<float, float, float>(bok1, bok2, bok3) << endl;
    cout << "Pole wynosi " << obw<float, int, float>(bok1, bok2, bok3) << endl;
    cout << endl;
    return 0;
}