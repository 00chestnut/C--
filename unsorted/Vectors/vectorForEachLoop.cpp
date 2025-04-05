#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    vector<int> vec; // Tworzymy wektor liczb całkowitych

    // Inicjalizujemy generator liczb pseudolosowych
    srand(time(NULL));

    // Wypełniamy wektor pseudolosowymi liczbami całkowitymi
    for (int i = 0; i < 10; ++i) {
        vec.push_back(rand() % 100 + 1); // Generujemy pseudolosową liczbę i dodajemy do wektora
    }

    // Wypisujemy zawartość wektora przy użyciu pętli foreach
    cout << "Zawartosc wektora:" << endl;
    for (const auto& element : vec) {
        cout << element << " ";
    }
    cout << endl;

    return 0;

    //   // Tworzenie wektora i inicjalizacja
    // std::vector<int> vec = {3, 1, 4, 1, 5, 9, 2, 6, 5};

    // // Dodawanie elementu na końcu wektora
    // vec.push_back(8);

    // // Rozmiar wektora
    // std::cout << "Rozmiar wektora: " << vec.size() << std::endl;

    // // Dostęp do elementu po indeksie
    // std::cout << "Element na pozycji 3: " << vec[3] << std::endl;

    // // Sortowanie wektora
    // std::sort(vec.begin(), vec.end());

    // // Iteracja po wektorze przy użyciu pętli foreach
    // std::cout << "Zawartość wektora po posortowaniu:" << std::endl;
    // for (const auto& element : vec) {
    //     std::cout << element << " ";
    // }
    // std::cout << std::endl;

    // // Usuwanie duplikatów
    // vec.erase(std::unique(vec.begin(), vec.end()), vec.end());

    // // Wypisanie zawartości wektora po usunięciu duplikatów
    // std::cout << "Zawartość wektora po usunięciu duplikatów:" << std::endl;
    // for (const auto& element : vec) {
    //     std::cout << element << " ";
    // }
    // std::cout << std::endl;

    // // Sprawdzenie, czy wektor jest pusty
    // if (vec.empty()) {
    //     std::cout << "Wektor jest pusty." << std::endl;
    // } else {
    //     std::cout << "Wektor nie jest pusty." << std::endl;
    // }
}