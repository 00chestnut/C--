#include <iostream>
using namespace std;

// Funkcja do obliczania silni przy użyciu pętli
int silniaPetla(int n) {
    int wynik = 1;
    for (int i = 1; i <= n; i++) {
        wynik *= i;
    }
    return wynik;
}

int main() {
    int liczba;
    cout << "Podaj liczbę: ";
    cin >> liczba;

    cout << "Silnia liczby " << liczba << " wynosi (petla): " << silniaPetla(liczba) << endl;
    return 0;
}
