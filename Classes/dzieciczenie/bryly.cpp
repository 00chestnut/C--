#include <iostream>
using namespace std;

class Shape
{
public:
int wysokosc;
virtual int oblicz() { };
Shape() { }
Shape(int asdf)
{
    wysokosc = asdf;
}
};

class Roller : public Shape
{
public:
int promien;
Roller() { }
Roller(int asdf, int aaaa) : Shape(asdf)
{
    promien = aaaa;
}
int oblicz() { cout << endl << (3.14*promien)*wysokosc; return (3.14*promien)*wysokosc; };
};

class Cone : public Roller
{
public:
Cone() { }
Cone(int asdf, int aaaa) : Roller(asdf, aaaa) { }
int oblicz() { cout << endl << ((3.14*promien)*wysokosc)/3; return ((3.14*promien)*wysokosc)/3; }
};

class Cuboid : public Shape
{
public:
int dlugosc1;
int dlugosc2;
Cuboid() { }
Cuboid(int asdf, int aaaa, int bbbb) : Shape(asdf)
{
    dlugosc1 = aaaa;
    dlugosc2 = bbbb;
}
int oblicz() { cout << endl << (dlugosc1*dlugosc2)*wysokosc; return (dlugosc1*dlugosc2)*wysokosc; }
};

int main()
{
    Shape *abcd;
    Roller dddd;
    abcd = &dddd;
    dddd.promien = 6;
    abcd -> wysokosc = 4;
    abcd -> oblicz();
    Roller *hhhh;
    Cone jjjj;
    hhhh = &jjjj;
    hhhh -> promien = 4;
    hhhh -> wysokosc = 5;
    hhhh -> oblicz();
    Shape *kkkk;
    Cuboid iiii;
    kkkk = &iiii;
    iiii.dlugosc1 = 5;
    iiii.dlugosc2 = 4;
    kkkk -> wysokosc = 5;
    kkkk -> oblicz();

    return NULL;
}