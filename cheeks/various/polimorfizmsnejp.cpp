#include <iostream>
using namespace std;

class Shape
{
public:
int wysokosc;
virtual int objetosc() { cout << endl << "wywołałeś funkcję z klasy bazowej debilu"; return 0; };
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
int objetosc() { cout << endl << (3.14*(promien*promien))*wysokosc; return (3.14*(promien*promien))*wysokosc; };
};

class Cone : public Roller
{
public:
Cone() { }
Cone(int asdf, int aaaa) : Roller(asdf, aaaa) { }
int objetosc() { cout << endl << ((3.14*(promien*promien))*wysokosc)/3; return ((3.14*(promien*promien))*wysokosc)/3; }
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
int objetosc() { cout << endl << (dlugosc1*dlugosc2)*wysokosc; return (dlugosc1*dlugosc2)*wysokosc; }
};

int main()
{
    Shape *abcd;
    Roller dddd;
    abcd = &dddd;
    dddd.promien = 6;
    abcd -> wysokosc = 4;
    abcd -> objetosc();
    Cone jjjj;
    abcd = &jjjj;
    jjjj.promien = 4;
    abcd -> wysokosc = 5;
    abcd -> objetosc();
    Cuboid iiii;
    abcd = &iiii;
    iiii.dlugosc1 = 5;
    iiii.dlugosc2 = 4;
    abcd -> wysokosc = 5;
    abcd -> objetosc();

    return NULL;
}