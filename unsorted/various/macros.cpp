#include <iostream>
using namespace std;

#define IS_EVEN(n) ((n) % 2 == 0)
#define CUBE(h) ((h) * (h) * (h))
int n;
int h=n;
int main() {
    int n;
    cout << "Podaj liczbę: ";
    cin >> n;
    cout << (IS_EVEN(n) ? "TRUE" : "FALSE") << endl;
    cout << "Liczba podniesiona do potęgi 3: " << CUBE(h) << endl; 
    cout << "Wartość n: " << h << endl;
    cout << "Test na parzystość podniesionej do 3: " << (IS_EVEN(CUBE(h)) ? "TRUE" : "FALSE") << endl;

    return 0;
}
   