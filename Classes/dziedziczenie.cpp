#include <iostream>
using namespace std;

class Bazowa
{
    public:
    int wlasnoscPUB;
     void setWlasnoscPRO(int wlasnoscPRO)
    {
        this->wlasnoscPRO=wlasnoscPRO;
    }
    int getWlasnoscPRO()
    {
        return wlasnoscPRO;
    }
    protected:
    int wlasnoscPRO;

};
class Pochodna: protected Bazowa
{
     public:
    void setWlasnoscPUB(int wlasnoscPUB)
    {
       this->wlasnoscPUB = wlasnoscPUB;
    }
    int getWlasnoscPUB()
    {
        return wlasnoscPUB;
    }
    void setWlasnoscPRO(int wlasnoscPRO )
    {
        this->wlasnoscPRO = wlasnoscPRO;
    }
    int getWlasnoscPRO()
    {
        return wlasnoscPRO;
    }
};
int main() 
{
    Pochodna pochodnia;
    pochodnia.setWlasnoscPUB(123124);
    int adam = pochodnia.getWlasnoscPUB();
    cout << endl << "wlasnosc publiczna: " << adam;
    pochodnia.setWlasnoscPRO(123123123);
    adam = pochodnia.getWlasnoscPRO();
    cout << endl << "wlasnosc prywatna: " << adam;
    return 0;
}