#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void selectionSort(int tablica[]) {
    for (int i = 0; i < 9; i++) {
        int min = i;
        for (int j = i + 1; j < 10; j++) {
            if (tablica[j] < tablica[min]) {
                min = j;
            }
        }
        int temp = tablica[i];
        tablica[i] = tablica[min];
        tablica[min] = temp;
    }
}
int podzielnePrzezTrzy(int tabela[], int size) {
  int liczbaPodzielnych{};
  for (int i = 0; i < size; i++) {
    if (tabela[i] % 3 == 0)
      liczbaPodzielnych++;
  }
  return liczbaPodzielnych;
}

int main() {
    int tablica[11];

    srand(time(NULL));

    for (int i = 0; i < 10; ++i) {
        tablica[i] = rand() % 11 + 10;
    }

    // Wypisanie zawartości tablicy przed sortowaniem
    cout << "Zawartosc tablicy przed sortowaniem: ";
    for (int i = 0; i < 10; ++i) {
        cout << tablica[i] << " ";
    } 
    cout << endl;

    // Sortowanie tablicy
    selectionSort(tablica);

    // Wypisanie zawartości tablicy po sortowaniu
    podzielnePrzezTrzy(tablica);

    return 0;
}