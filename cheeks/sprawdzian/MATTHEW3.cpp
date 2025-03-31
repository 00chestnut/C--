#include <iostream>
#include <string>

class StringDivider {
    static const int size = 15; // Pole statyczne, rozmiar stringa
    int digits[size];           // Tablica cyfr

    // Prywatna metoda konwertująca string na tablicę intów
    void convert(const std::string& input) {
        for (int i = 0; i < size; ++i)
            digits[i] = input[i] - 48;  // Konwersja znaku na int metodą -48
    }

public:
    // Konstruktor, który od razu konwertuje string
    StringDivider(const std::string& input) { convert(input); }

    // Publiczna metoda łącząca dwie cyfry z tablicy w int
    int getCombined(int pos1, int pos2) { return digits[pos1] * 10 + digits[pos2]; }
};

int main() {
    StringDivider divider("123456789012345"); // Przykładowy string

    // Łączenie 4. i 15. cyfry (dzień miesiąca)
    int dayOfMonth = divider.getCombined(3, 14);

    // Użycie instrukcji switch do interpretacji dnia miesiąca
    switch (dayOfMonth) {
        case 1:
            std::cout << "Pierwszy dzień miesiąca" << std::endl;
            break;
        case 15:
            std::cout << "Piętnasty dzień miesiąca" << std::endl;
            break;
        case 31:
            std::cout << "Ostatni dzień miesiąca (dla miesięcy z 31 dniami)" << std::endl;
            break;
        default:
            std::cout << "Dzień miesiąca: " << dayOfMonth << std::endl;
            break;
    }

    return 0;
}