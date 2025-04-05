// W klasie bazowej jedna wlasność ma być dostępna w programie bezposrednio, a druga  nie, ale ma być dostępna w klasie pochodnej poprzez nazwę.
// W klasie pochodnej odziedziczone własności mają być private. Wyedytuj wszystkie wlasnosci klasy pochodnej w programie głównym.
#include <iostream>
using namespace std;

class base
{
protected:
    int p1 = 1;

public:
    int p2 = 3;
    int getp1() { return p1; }
    int getp2() { return p2; }
    void setp1(int pp1) { p1 = pp1; }
    void setp2(int pp2) { p2 = pp2; }
};

class dollop : private base
{
public:
    dollop(int ip1, int ip2)
    {
        setp2(ip2);
        setp1(ip1);
    }

    void display()
    {
        cout << p2 << " ," << getp1() << endl;
    }

    void setSetP1(int pp1)
    {
        setp1(pp1);
    }

    void setSetP2(int pp2)
    {
        setp2(pp2);
    }
};

int main()
{
    dollop point(1, 3);
    point.setSetP1(4);
    point.setSetP2(6);
    point.display();
    return 0;
}