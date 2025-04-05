#include <iostream>
using namespace std;
template <typename T1, typename T2>
class Szablon
{
public:
    T1 m1;
    T2 m2;
    T2 display()
    {
        cout<< m1 << "\n" <<m2<<" konkkretyzacja "<<endl;
        return 0;
    }


};
template <>
class
    Szablon<double,float>
{
public:
    double m1;
    float m2;
 
    float display()
    {
        cout<<" spec double float "<<endl;
        return m1 * m2;
    }
};
template <>
class
    Szablon<int, float>
{
public:
    int m1;
    double m2;
    double display()
    {
        cout<<" spec int float "<<endl;
        return m1 / m2;
    }
};
int main()
{
    Szablon<double, float> szablon{1.1, 2.9f};             
    cout<< szablon.display() << endl;   
    Szablon<int, float> szablon2{1, 2.123f};           
    cout<< szablon2.display() << endl;   
    Szablon<int, int> szablon3{21, 23};             
    cout << szablon3.display() << endl;   
    return 0;
}