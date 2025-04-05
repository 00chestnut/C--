#include <iostream>
using namespace std;

class Motor
{
public:
    bool czyDwusuw;
    bool czyCross;
    int pojemnosc;
    string color;
    bool czyLyse;
    float ilePaliwa;
    float pojemnoscBaku;
    string placeholder;
};

int main()
{
    Motor motor;
    
    cout << "Czy motor to dwusuw? T/N: ";
    cin >> motor.placeholder;
    
    if (motor.placeholder == "t" || motor.placeholder == "T")
    {
        motor.czyDwusuw = 1;
    }
    else if (motor.placeholder == "n" || motor.placeholder == "N")
    {
        motor.czyDwusuw = 0;
    }
    else
    {
        cout << "\nProszę podać poprawną wartość." << endl;
    }
    if(motor.czyDwusuw = 0;){
    cout << "Czy motor to cross? T/N: ";
    cin >> motor.placeholder;
    
    if (motor.placeholder == "t" || motor.placeholder == "T")
    {
        motor.czyCross = 1;
    }
    else if (motor.placeholder == "n" || motor.placeholder == "N")
    {
        motor.czyCross = 0;
    }
    else
    {
        cout << "\nProszę podać poprawną wartość." << endl;
    }}

    cout << "\nProszę wybrać kolor z dostępnej selekcji kolorów: ";
    cout << "\nred, \nblue, \nwhite, \nyellow, \nblack, \npink,\n";
    cin >> motor.color;

    cout << "Czas zatankowac. Jaką pojemność ma motor? (L): ";
    cin >> motor.pojemnosc;

    cout << "Ile paliwa masz na ten moment? ";
    cin >> motor.pojemnoscBaku;

    cout << "Ile nalewamy? ";
    cin >> motor.ilePaliwa;

    if (motor.ilePaliwa > motor.pojemnosc - motor.pojemnoscBaku)
    {
        cout << "Przelało się, bo nalałeś więcej niż masz miejsca." << endl;
    }
    else
    {
        cout << "Napełniono do " << motor.ilePaliwa + motor.pojemnoscBaku << " L." << endl;
    }

    // set dwusuw
    // set cross
    // set pojemnosc
    // czy pojade
    // czy sie nadaje

    return 0;
}