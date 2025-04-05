#include <iostream>

void sieveOfEratosthenes(int n) {
    bool isPrime[n + 1]; // Tablica boolowska o rozmiarze n+1
    for (int i = 2; i <= n; i++) {
        isPrime[i] = true; // Inicjalizacja - zakładamy, że wszystkie liczby są pierwsze
    }

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) { // Jeśli liczba nie jest wykreślona
            for (int j = i * i; j <= n; j += i) { // Wykreślanie wielokrotności
                isPrime[j] = false;
            }
        }
    }

    // Wypisanie liczb pierwszych
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cout << "Podaj zakres n: ";
    std::cin >> n;
    sieveOfEratosthenes(n);
    return 0;
}