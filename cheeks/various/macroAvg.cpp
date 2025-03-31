#include <iostream>
#define calc_avg(a, b) ((a + b) / 2.0)
using namespace std;
int main() {
    int liczba1, liczba2;

    cout << "Podaj dwie liczby oddzielone spacją: ";
    cin >> liczba1 >> liczba2;


    double srednia = calc_avg(liczba1, liczba2);

    cout << "Średnia podanych liczb: " << srednia << endl;

    return 0;
}