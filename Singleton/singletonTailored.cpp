#include <iostream>
using namespace std;

class Singleton
{
private:
    static Singleton *instance;
    Singleton() {}

public:
    static Singleton *getInstance()
    {
        if (instance == nullptr)
        {
            instance = new Singleton();
        }
        return instance;
    }
    void sayHi()
    {
        cout << "I am Singleton" << endl;
    }
};
Singleton *Singleton::instance = nullptr;
int main()
{
    Singleton *s = Singleton::getInstance();
    s->sayHi();
    Singleton *t = Singleton::getInstance();
    t->sayHi();
    return 0;
}
