#include <iostream>
using namespace std;


class Animal
{
    public:
    virtual void makeSound() = 0;
};


class Dog : public Animal
{
    public:

    void makeSound()
    {
        cout << "Hau! - Dog\n";
    }
};


class Cat : public Animal
{
    public:

    void makeSound()
    {
        cout << "Miau! - Cat\n";
    }
};

int main()
{
    Animal *zwierze;

    zwierze = new Dog;
    zwierze -> makeSound();
    delete zwierze;

    zwierze = new Cat;
    zwierze -> makeSound();
    delete zwierze;
    return 1;
}