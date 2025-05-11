// Pobierz dużą literę od użytkownika: jeżeli jest dużą to jest dobrze i się wypisuje komunikat "JD". 
// Jeżeli litera jest mała błąd z odpowiednim komunikatem jest wyrzucany przez typ zmiennej. 
// Jeżeli jest cyfrą błąd jest wyrzucany przy pomocy klasy exception, jeżeli jest znakiem interpunkcyjnym(, . ;  ) 
// błąd wyrzucany jest przy pomocy klasy  runtime_error. 
// Jeżeli litera nie jest literą ani cyfrą ani znakiem interpunkcyjnym błąd wyrzucany jest przy pomocy klasy pochodnej runtime_error
#include <iostream>
#include <exception>
#include <stdexcept>
#include <cctype>
using namespace std;

// Wyjątek dla cyfr
class DigitException : public exception {
public:
    const char* what() const noexcept override {
        return "Nie można podać cyfry!";
    }
};

// Wyjątek dla znaków specjalnych (nie litery, nie cyfry, nie interpunkcyjne)
class OtherCharException : public runtime_error {
public:
    OtherCharException() : runtime_error("Nieprawidłowy znak!") {}
};

int main() {
    char znak;
    cout << "Podaj dużą literę: ";
    cin >> znak;

    try {
        if (isdigit(znak))
            throw DigitException();

        if (znak == ',' || znak == '.' || znak == ';')
            throw runtime_error("Nie podawaj znaku interpunkcyjnego!");

        if (!isalpha(znak))  // nie litera, nie cyfra, nie interpunkcja
            throw OtherCharException();

        if (islower(znak))
            throw 1;

        cout << "JD" << endl;
    }
    catch (int) {
        cout << "Podałeś małą literę!" << endl;
    }
    catch (const DigitException& e) {
        cout << e.what() << endl;
    }
    catch (const runtime_error& e) {
        cout << e.what() << endl;
    }

    return 0;
}
