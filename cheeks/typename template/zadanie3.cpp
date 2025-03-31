// Napisz klas "SzablonKlasy" z dwoma polami i metod display która wywietla komunikaty:
// dla specjalizacji double,float-"spec double float"
// dla specjalizacji int,float-"spec int,float"
// dla konkretyzacji - "konkretyzacja"
#include <iostream>
using namespace std;

template <typename T1, typename T2>
class SzablonKlasy
{
public:
    T1 p1;
    T2 p2;
    void display()
    {
        cout << "konkretyzacja " << endl;
    };
};

template <>
void SzablonKlasy<double, float>::display()
{
    cout << "spec double float\n ";
};
template <>
void SzablonKlasy<int, float>::display()
{
    cout << "spec int float\n ";
};
int main()
{
    SzablonKlasy<int, float> bob1;
    bob1.display();
    SzablonKlasy<double, float> bob2;
    bob2.display();
    SzablonKlasy<int, int> bob3;
    bob3.display();
    return 0;
};
