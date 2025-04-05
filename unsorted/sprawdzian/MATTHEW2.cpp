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

    // Publiczna metoda przyjmująca tablicę pozycji cyfr i zwracająca połączone cyfry jako int
    int getCombined(int positions[], int size) {
        std::string result;

        // Łączenie cyfr na podstawie wybranych pozycji z tablicy
        for (int i = 0; i < size; ++i) {
            int pos = positions[i];
            if (pos >= 0 && pos < numberString.length()) {
                result += numberString.substr(pos, 1);  // Pobieranie jednej cyfry
            } else {
                std::cerr << "Pozycja " << pos << " poza zakresem!" << std::endl;
                exit(1);
            }
        }

        return std::stoi(result);  // Konwersja połączonych cyfr na int
    }
};

int main() {
    StringDivider divider("123456789012345");  // Przykładowy 15-cyfrowy string

    // Przykład łączenia cyfr: 4. i 15. cyfra
    int positions1[] = {3, 14};  // Tablica pozycji
    int size1 = sizeof(positions1) / sizeof(positions1[0]);  // Rozmiar tablicy
    int combined1 = divider.getCombined(positions1, size1);

    std::cout << "Połączone cyfry z pozycji 4 i 15: " << combined1 << std::endl;

    // Przykład łączenia większej liczby cyfr: 1., 2., 5. i 10. cyfra
    int positions2[] = {0, 1, 4, 9};  // Inna tablica pozycji
    int size2 = sizeof(positions2) / sizeof(positions2[0]);  // Rozmiar tablicy
    int combined2 = divider.getCombined(positions2, size2);

    std::cout << "Połączone cyfry z pozycji 1, 2, 5 i 10: " << combined2 << std::endl;

    return 0;
}