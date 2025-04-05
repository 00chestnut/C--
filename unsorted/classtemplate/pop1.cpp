// Stworz szablon klasy prostokąt.który zawiera polabok1, bok2 i metodę obwód. 
// Zastosuj  2 parametry uogólnione. Wykonaj specjalizację dla float double, konkretyzację dla int float. 
// Tak stwórz definicje aby secjalizację i konkretyzację wykonać jawnie i niejawnie.
#include <iostream>
using namespace std; 
template <typename T1, typename T2>
class Prostokat
{
public:
    T1 bok1;
    T2 bok2;
    T2 obwod();
};
template <typename T1, typename T2>
T2 Prostokat<T1,T2>::obwod()
{
    return (2 * bok1) + (2 * bok2);
}
template <>
class
    Prostokat<float, double>
{
public:
    float bok1;
    double bok2;
    double obwod()
    {
        return (2 * bok1) + (2 * bok2);
    }
};
int main()
{
    Prostokat<float, double> prostokat1{1.1f, 2.2};                   
    cout << "Obwód wynosi " << prostokat1.obwod() << endl;
    Prostokat<int, float> prostokat2{1, 2.1f};          
    cout << "Obwód wynosi " << prostokat2.obwod() << endl;
    // Prostokat prostokat3{1.1f, 2.0};                                 // niejawnie tak srednio
    // cout << "Obwód wynosi " << prostokat3.obwod() << endl; 
    // Prostokat prostokat4{1.1f, 2.0};           
    // cout << "Obwód wynosi " << prostokat4.obwod() << endl; 
    return 0;
}