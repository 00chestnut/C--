#include <iostream>
#include <cmath>
using namespace std;

// Ogólny szablon funkcji
template <typename T1, typename T2>
T1 funkcja(T1 zmienna1, T2 zmienna2)
{
    cout << "Ogólny szablon\n";
    return zmienna1 * zmienna2;
}

// Specjalizacja dla int, float - oblicza potęgę
template <>
int funkcja<int, float>(int zmienna1, float zmienna2)
{
    cout << "Specjalizacja int float - potęga\n";
    return pow(zmienna1, zmienna2);
}

// Specjalizacja dla float, double - oblicza sumę
template <>
float funkcja<float, double>(float zmienna1, double zmienna2)
{
    cout << "Specjalizacja float double - suma\n";
    return zmienna1 + zmienna2;
}

// Szablon klasy z ogólnym zachowaniem
template <typename T1, typename T2>
class SzablonKlasy
{
public:
    T1 p1;
    T2 p2; 

    void display()
    {
        cout << "Konkretyzacja\n";
    }
};

// Specjalizacja dla double, float - specyficzna wiadomość
template <>
void SzablonKlasy<double, float>::display()
{
    cout << "Specjalizacja double float\n";
};

// Specjalizacja dla int, float - specyficzna wiadomość
template <>
void SzablonKlasy<int, float>::display()
{
    cout << "Specjalizacja int float\n";
};

// Szablon klasy prostokąta z obliczaniem pola i obwodu
template <typename T1, typename T2>
class Prostokat
{ 
public:
    T1 bok1;
    T2 bok2;

    T2 pole()
    {
        return bok1 * bok2;
    }

    T2 obwod();
};

// Specjalizacja dla prostokąta double, int
template <>
class Prostokat<double, int>
{
public:
    double bok1;
    int bok2;

    int obwod()
    {
        cout << "Specjalizacja Prostokat double, int\n";
        return 2 * bok1 + 2 * bok2;
    }

    int pole()
    {
        return bok1 * bok2;
    }
};

// Specjalizacja dla prostokąta int, double
template <>
class Prostokat<int, double>
{
public:
    int bok1;
    double bok2;

    double obwod()
    {
        cout << "Specjalizacja Prostokat int, double\n";
        return 2 * bok1 + 2 * bok2;
    }

    double pole()
    {
        return bok1 * bok2;
    }
};

// Funkcja główna
int main()
{
    // Testowanie wyspecjalizowanych funkcji szablonowych
    cout << funkcja<int, float>(2, 3.0f) << endl;      // Specjalizacja dla int, float (potęga)
    cout << funkcja<float, double>(4.0f, 3.0) << endl; // Specjalizacja dla float, double (suma)
    cout << funkcja(2.0, 4.0) << endl;                 // Ogólny szablon (mnożenie)

    // Testowanie wyspecjalizowanych klas szablonowych
    SzablonKlasy<int, float> bob1;
    bob1.display();  // Specjalizacja dla int, float

    SzablonKlasy<double, float> bob2;
    bob2.display();  // Specjalizacja dla double, float

    SzablonKlasy<int, int> bob3;
    bob3.display();  // Ogólne zachowanie szablonu

    // Testowanie wyspecjalizowanych klas szablonowych prostokąta
    Prostokat<double, int> prostokat1{1.1, 2};
    cout << "Pole prostokąta: " << prostokat1.pole() << endl;   // 2.2
    cout << "Obwód prostokąta: " << prostokat1.obwod() << endl; // 4.2

    Prostokat<int, double> prostokat2{3, 2.5};
    cout << "Pole prostokąta: " << prostokat2.pole() << endl;   // 7.5
    cout << "Obwód prostokąta: " << prostokat2.obwod() << endl; // 11

    return 0;
}