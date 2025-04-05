#include <iostream>
using namespace std;
class Figury
{
public:
    virtual double polePowierzchni()
    {
        cout << endl
             << "wywołałeś funkcję z klasy bazowej";
        return 0;
    };
};
class Trojkat : public Figury
{
public:
    int podstawa;
    int wysokosc;
    Trojkat() {};
    Trojkat(int podstawa1, int wysokosc1)
    {
        podstawa = podstawa1;
        wysokosc = wysokosc1;
    }
    double polePowierzchni()
    {
        return podstawa * wysokosc / 2;
    }
};
class Rownoleglobok : public Figury
{
public:
    int podstawa;
    int wysokosc;
    Rownoleglobok() {};
    Rownoleglobok(int podstawa1, int wysokosc1) {podstawa=podstawa1; wysokosc=wysokosc1;};
    double polePowierzchni()
    {
        return podstawa * wysokosc;
    }
};
class Kolo : public Figury
{
public:
    int promien;
    Kolo() {};
    Kolo(int promien1)
    {
        promien = promien1;
    }
    double polePowierzchni()
    {
        return 3.14 * (promien * promien);
    }
};
int main()
{
    Figury *figura;
    figura=new Trojkat(2,1);
    cout<<endl<<figura->polePowierzchni()<<endl;
    delete figura;
    figura=new Rownoleglobok(1,1);
    cout<<figura->polePowierzchni()<<endl;
    delete figura;
    figura=new Kolo(1);
    cout<<figura->polePowierzchni();
    delete figura;
    return 0;
}