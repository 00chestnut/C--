#include <iostream>
#include <string>

class StringDivider {
    std::string numberString;  // Przechowuje 15-cyfrowy string

public:
    // Konstruktor przyjmujący 15-cyfrowy string
    StringDivider(const std::string& input) : numberString(input) {
        if (input.length() != 15) {
            std::cerr << "String musi mieć dokładnie 15 cyfr!" << std::endl;
            exit(1);
        }
    }

    // Metoda do dzielenia stringa na podciągi na podstawie tablicy pozycji i długości oraz konwersji na int
    void divideConvertAndPrint(int startPositions[], int lengths[], int size) {
        for (int i = 0; i < size; ++i) {
            int start = startPositions[i];  // Pozycja początkowa
            int length = lengths[i];        // Długość podciągu

            // Sprawdzamy, czy pozycja początkowa i długość są poprawne
            if (start >= 0 && start + length <= numberString.length()) {
                std::string substring = numberString.substr(start, length);  // Wyciągnięcie podciągu
                int number = std::stoi(substring);  // Konwersja podciągu na liczbę całkowitą
                std::cout << "Fragment " << i+1 << ": " << substring << " (jako liczba: " << number << ")" << std::endl;
            } else {
                std::cerr << "Błąd: pozycja poza zakresem!" << std::endl;
            }
        }
    }
};

int main() {
    StringDivider divider("123456789012345");  // Przykładowy 15-cyfrowy string

    // Tablice przechowujące pozycje startowe oraz długości podciągów
    int startPositions[] = {0, 3, 5, 10};  // Pozycje początkowe podciągów
    int lengths[] = {3, 2, 4, 5};          // Długości każdego podciągu
    int size = sizeof(startPositions) / sizeof(startPositions[0]);  // Liczba podciągów

    // Dzielenie stringa na podstawie podanych pozycji i długości oraz konwersja podciągów na int
    divider.divideConvertAndPrint(startPositions, lengths, size);

    return 0;
}