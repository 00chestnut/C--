#include <iostream>
using namespace std;

class Osoba{
    private:
        int pesel{};
    public:
        string imie, nazwisko;
    void print(){
        cout << "name:\n" << imie << "\nnazwisko:\n" << nazwisko << "\npesel:\n" << pesel << '\n';
    }
    Osoba(){
        cout << "enter name:\n";
        cin >> imie;
        cout << "\nenter lastname:\n";
        cin >> nazwisko;
        cout << "\nenter pesel:\n";
        cin >> pesel;
        cout << '\n';
    }
};
int main(){
    Osoba person;
    person.print();
}