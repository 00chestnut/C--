#include <iostream>
using namespace std;

class klasa1
{
    public:
    int wlasnosc1;
    void setWlasnosc3(int asdf)
    {
        wlasnosc3 = asdf;
    }
    int getWlasnosc3()
    {
        return wlasnosc3;
    }
    protected:
    int wlasnosc2;
    private:
    int wlasnosc3;
};
class klasa2 : protected klasa1
{
    public:
    void setWlasnosc1(int asdf)
    {
        wlasnosc1 = asdf;
    }
    int getWlasnosc1()
    {
        return wlasnosc1;
    }
    void setWlasnosc2(int asdf)
    {
        wlasnosc2 = asdf;
    }
    int getWlasnosc2()
    {
        return wlasnosc2;
    }
    void setWlasnosc33(int asdf)
    {
        setWlasnosc3(asdf);
    }
    int getWlasnosc33()
    {
        return getWlasnosc3();
    }
};

int main() 
{
    klasa2 aaaa;
    aaaa.setWlasnosc1(11);
    int a = aaaa.getWlasnosc1();
    cout << endl << "wlasnosc1: " << a;
    aaaa.setWlasnosc2(22);
    a = aaaa.getWlasnosc2();
    cout << endl << "wlasnosc2: " << a;
    aaaa.setWlasnosc33(33);
    a = aaaa.getWlasnosc33();
    cout << endl << "wlasnosc3: " << a;
    return 0;
}