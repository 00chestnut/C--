#include <iostream>
#include <cmath>
using namespace std;
// Funkcja demonstrująca różne rodzaje zaokrągleń
void demonstrateRounding(double value) {
    cout << "Wartość początkowa: " << value << endl;
    cout << "ceil: " << ceil(value) << endl;
    cout << "floor: " << floor(value) << endl;
    cout << "trunc: " << trunc(value) << endl;
    cout << "round: " << round(value) << endl;
}

int main() {
    // Przykładowe wartości
    double values[] = {4.3, 4.5, 4.7, -4.3, -4.5, -4.7};
    int numValues = sizeof(values) / sizeof(values[0]);

    // Demonstracja dla każdej wartości
    for (int i = 0; i < numValues; ++i) {
        demonstrateRounding(values[i]);
        cout << endl;
    }

    return 0;
}