#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

void findOccurrences(const char* text, char letter) {
    int count = 0;
    vector<int> indexes;

    const char* ptr = text;
    while ((ptr = strchr(ptr, letter)) != nullptr) {
        count++;
        indexes.push_back(ptr - text + 1); 
        ptr++; 
    }

    cout << "Liczba wystąpień litery '" << letter << "' w napisie: " << count << endl;
    if (count > 0) {
        cout << "Indeksy wystąpień litery '" << letter << "':" << endl;
        for (int i = 0; i < indexes.size(); ++i) {
            cout << indexes[i];
            if (i != indexes.size() - 1)
                cout << ", ";
        }
        cout << endl;
    }
}

int main() {
    char choice;
    do {
        char text[50];
        cout << "Podaj dane do analizy: ";
        cin.getline(text, 50);

        char letter;
        cout << "Podaj literę do znalezienia w napisie: ";
        cin >> letter;

        cin.ignore(); 

        findOccurrences(text, letter);

        cout << "Czy chcesz wyszukać ponownie? (T/N): ";
        cin >> choice;
        cin.ignore(); 
    } while (toupper(choice) == 'T'||toupper(choice) == 't');

    return 0;
}
