/*
Współcześnie dyrektywy kompilacji warunkowej w C++ nadal są używane do sterowania kompilacją kodu,
w zależności od określonych warunków. Mogą być wykorzystywane do definiowania różnych zachowań, 
konfiguracji i wariantów kompilacji dla różnych środowisk, platform, czy wersji języka. 
Na przykład, mogą być używane do wyłączania lub włączania fragmentów kodu w zależności od tego, 
czy pewne makra zostały zdefiniowane, czy też do włączania różnych części kodu dla różnych systemów operacyjnych.*/
// Przykładowy kod:
#include <iostream>

#define FEATURE_A_ENABLED // <--
// W zależności od tego co jest tu wpisane, 
// FEATURE_A_ENABLED lub FEATURE_B_ENABLED, kompilowany będzie tylko odpowiedni fragment kodu.

#ifdef FEATURE_A_ENABLED // Jeśli wpisana powyżej jest ta opcja wykonywana jest funkcja A.
void funkcjaA() {
    std::cout << "Funkcja A jest w użyciu." << std::endl;
}
#endif

#ifdef FEATURE_B_ENABLED // Tak samo ma się ten fragment.
void funkcjaB() {
    std::cout << "Funkcja B jest w użyciu." << std::endl;
}
#endif

int main() { // Wykonuje odpowiednią funkcję w zależności od wcześniej ustalonych dyrektyw.
#ifdef FEATURE_A_ENABLED
    funkcjaA();
#endif

#ifdef FEATURE_B_ENABLED
    funkcjaB(); 
#endif

    return 0;
}