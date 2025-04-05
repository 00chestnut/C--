#include <iostream>
using namespace std;

template <typename T1, typename T2, typename T3>
class SzablonKlasy
{
public:
    T1 p1;
    T2 p2;
    T3 p3;

    void display()
    {
        cout << "konkretyzacja" << endl;
    }
};

// Specjalizacja dla (double, float, int)
template <>
class SzablonKlasy<double, float, int>
{
public:
    double p1;
    float p2;
    int p3;

    void display()
    {
        cout << "spec double float int" << endl;
    }
};

// Specjalizacja dla (int, float, double)
template <>
class SzablonKlasy<int, float, double>
{
public:
    int p1;
    float p2;
    double p3;

    void display()
    {
        cout << "spec int float double" << endl;
    }
};

int main()
{
    SzablonKlasy<int, float, double> bob1;
    bob1.display(); // spec int float double

    SzablonKlasy<double, float, int> bob2;
    bob2.display(); // spec double float int

    SzablonKlasy<int, int, int> bob3;
    bob3.display(); // konkretyzacja

    SzablonKlasy<char, double, float> bob4;
    bob4.display(); // konkretyzacja

    return 0;
}