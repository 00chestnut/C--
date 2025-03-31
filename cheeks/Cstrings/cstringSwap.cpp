#include <iostream>
#include <cstring>

int main() {
    const int max_length = 100;
    char first[max_length], second[max_length];
    
    // Pobieranie dwóch dwuczłonowych napisów
    std::cout << "Podaj pierwszy dwuczłonowy napis: ";
    std::cin.getline(first, max_length);
    
    std::cout << "Podaj drugi dwuczłonowy napis: ";
    std::cin.getline(second, max_length);
    
    // Szukanie spacji w pierwszym napisie
    char *space_position = std::strchr(first, ' ');
    if (space_position == nullptr) {
        std::cerr << "Nie znaleziono spacji w pierwszym napisie.\n";
        return 1;
    }
    
    // Wstawianie ogona drugiego napisu do pierwszego napisu
    std::strcpy(space_position + 1, second);
    
    // Szukanie spacji w drugim napisie
    space_position = std::strchr(second, ' ');
    if (space_position == nullptr) {
        std::cerr << "Nie znaleziono spacji w drugim napisie.\n";
        return 1;
    }
    
    // Wstawianie głowy pierwszego napisu do drugiego napisu
    std::strcpy(second, first);
    *(space_position + 1) = '\0'; // Ustawianie końca drugiego napisu
    
    // Wyświetlanie rezultatu
    
    std::cout << "Mixed 1: " << first + strlen(second) +1 << std::endl;
    std::cout << "Mixed 2: " << strcpy(space_position + 1, second)<< std::endl;
    return 0;
}
