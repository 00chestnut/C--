#include <iostream>
using namespace std;

class Number1
{
public:
    int cyfra;
    void increment();
};
class Number2 : public Number1
{
public:
    int cyfra;
    void increment();
};
void Number1::increment()
{
    cyfra++;
    cout << "Wywołanie metody increment() zdefiniowanej w klasie N1"
         << endl;
}
void Number2::increment()
{
    cyfra++;
    cyfra++;
    cout << "Wywołanie metody increment() zdefiniowanej w klasie N2"
         << endl;
}
int main()
{
    Number1 liczba1;
    liczba1.increment();
    Number2 liczba2;
    liczba2.increment();
    return 0;
}