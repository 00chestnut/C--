#include <fstream>
#include <iostream>
#include <ctime>
using namespace std;

void randomNumbersToFile(int n) {
    ofstream plik("wyjscie.txt");
    srand(time(NULL));
    plik << rand() % 10;
    for (int i = 1; i < n; i++) {
        plik << " " << rand() % 10;
    }
}

int fileSize() {
    ifstream plik("wyjscie.txt");
    int i = 0, zPliku;
    while (plik >> zPliku) {
        i++;
    }
    return i;
}

int* fileToArray(int n) {
    ifstream plik("wyjscie.txt");
    int* intarr = new int[n];
    for (int i = 0; i < n; i++) {
        plik >> intarr[i];
    }
    return intarr;
}

double averageFromArray(const int arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / static_cast<double>(size);
}

int main() {
    randomNumbersToFile(10);
    int size = fileSize();
    int* intarr = fileToArray(size);
    cout << "średnia: " << averageFromArray(intarr, size) << endl; 
    delete[] intarr; // Free allocated memory
    return 0;
}
