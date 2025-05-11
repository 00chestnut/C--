#include <iostream>
using namespace std;

int main() {
    int wiek;

    cout << "Podaj swój wiek: ";
    cin >> wiek;

    try {
        if (wiek < 0)
            throw "Wiek nie może być ujemny!";
        if (wiek < 18)
            throw 18;

        cout << "Witaj w systemie dla dorosłych!" << endl;
    }
    catch (const char* blad) { 
        cout << "Błąd: " << blad << endl;
    }
    catch (int limit) {
        cout << "Musisz mieć przynajmniej " << limit << " lat." << endl;
    }

    return 0;
}