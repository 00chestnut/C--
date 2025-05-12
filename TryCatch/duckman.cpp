// Pobierz  literę od użytkownika: jeżeli jest małą to jest dobrze i się wypisuje komunikat "jd".  
// Jeżeli litera jest duża błąd z odpowiednim komunikatem jest wyrzucany przez typ zmiennej.  
// Jeżeli jest cyfrą blad obsługuje klasa pochodna od runtime_error., 
// jeżeli jest znakiem interpunkcyjnym(, . ;  ) 
// błąd wyrzucany jest przy pomocy klasy  runtime_error. Jeżeli litera nie jest literą ani cyfrą ani znakiem interpunkcyjnym 
// błąd z odpowiednim komunikatem jest wyrzucany przez typ zmiennej
#include <iostream>
#include <exception>
#include <cctype>
using namespace std;

class DigitException : public runtime_error {
public:
    DigitException() : runtime_error("Nie może być liczba!") {}
};

int main() {
    char znak;
    cout << "Podaj małą literę: ";
    cin >> znak;

    try {
        if (isupper(znak))
            throw 1;
            
        if (isdigit(znak))
            throw DigitException();

        if (znak == ',' || znak == '.' || znak == ';')
            throw runtime_error("Nie podawaj znaku interpunkcyjnego!");

        if (!isalpha(znak))  
            throw 1.0f;

        cout << "jd" << endl;
    }
    catch (int) {
        cout << "Podałeś dużą literę!" << endl;
    }
    catch(float){
        cout << "Nieprawidłowy znak!" << endl; 
    }
    catch (const DigitException& e) {
        cout << e.what() << endl;
    }
    catch (const runtime_error& e) {
        cout << e.what() << endl;
    }

    return 0;
}
