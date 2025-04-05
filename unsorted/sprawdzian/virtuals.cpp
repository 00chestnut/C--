// Zadanie 1: Zwierzęta
// Napisz program, w którym:

// Istnieje abstrakcyjna klasa Animal z czysto wirtualną metodą makeSound().
// Klasy pochodne, takie jak Dog i Cat, implementują tę metodę.
// Utwórz dynamicznie obiekty zwierząt.
//  wywołaj metodę makeSound() dla każdego zwierzęcia.
// Przykładowy wynik:
// Hau!
// Miau!

#include <iostream>
using namespace std; 
class Animal
{
public:
    string opowiadaj;
    virtual void makeSound()=0;
    
}; 
class Dog : public Animal
{
public:
    string bark;
    Dog() {};
    Dog(string bark)
    {
        this->bark = bark;
    }
    virtual void makeSound()
    {
        cout << bark << endl;
    }
}; 
class Cat : public Animal
{
public:
    string meow;
    Cat() {};
    Cat(string meow)
    {
        this->meow = meow;
    }
    virtual void makeSound()
    {
        cout << meow << endl;
    }
}; 
class Parrot : public Animal
{
public:
    string talking;
    Parrot() {};
    Parrot(string talking)
    {
        this->talking = talking;
    }
    virtual void makeSound()
    {
        cout << talking << endl;
    }
};

int main()
{
    Animal *zwierz;

    cout << "Dog's Sound:\n";
    zwierz = new Dog("Woof");
    zwierz->makeSound();
    delete zwierz;
 
    cout << "Cat's Sound:\n";
    zwierz = new Cat("Meow");
    zwierz->makeSound();
    delete zwierz;

    cout << "Parrots's Sound:\n";
    zwierz = new Parrot("Give");
    zwierz->makeSound();
    delete zwierz;
}