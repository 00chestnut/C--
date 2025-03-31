#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() 
{
    vector <int> wektor;                                                  // Tworzymy wektor liczb całkowitych
    srand(time(NULL));                                                // Inicjalizujemy generator liczb pseudolosowych
    for (int i = 0; i < 10; ++i)                                      // Wypełniamy wektor pseudolosowymi liczbami całkowitymi
    {
        wektor.push_back(rand() % 100 + 1);                              // Generujemy pseudolosową liczbę i dodajemy do wektora
    }  
    cout << "Zawartosc wektora:" << endl;                             // Wypisujemy zawartość wektora przy użyciu pętli foreach
    for (const auto& element : wektor) 
    {
        cout << element << " ";
    }
    if  (wektor.empty())                                                 // Sprawdzenie, czy wektor jest pusty 
    {
        cout << "Wektor jest pusty." <<endl;
    } 
    else 
    {
        cout << "Wektor nie jest pusty." <<endl;
    }
return 0;
}