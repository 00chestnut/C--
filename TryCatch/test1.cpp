// Gupa A Pobierz liczbę parzystą dodatnią od użytkownika: jeżeli jest parzysta dodatnia to jest dobrze i się wypisuje komunikat "JD". 
// Jeżeli liczba jest ujemna błąd z odpowiednim komunikatem jest wyrzucany przez typ zmiennej. Jeżeli liczba jest nieparzysta błąd jest wyrzucany przy pomocy klasy exception. 
// Jeżeli liczba jest niecałkowita błąd wyrzucany jest przy pomocy klasy  runtime_error, jeżeli jest równa 0 blad obsługuje klasa pochodna od runtime_error.
#include <iostream>
#include <exception>
using namespace std;

class OddNumber : public exception
{
public:
    const char *what() const noexcept override
    {
        return "Liczba musi być parzysta";
    }
};

class numIsZero : public runtime_error
{
public:
    numIsZero() : runtime_error("Liczba nie może wynosić zero") {}
};

int main() {
    int num;

    cout << endl << "Podaj liczbę parzystą dodatnią użytkowniku: ";
    cin >> num;

    try {
        if (num < 0)
            throw 1;
        if (num == 0)
            throw numIsZero();
        if (num % 2 == 0)
            throw OddNumber();
         if (num != (int)num)
            throw runtime_error("Liczba musi być całkowita.");
        cout << "JD" << endl;
    }
    catch (int) { 
        cout << "Liczby ujemne nie są dozwolne!" << endl;
    }
     catch (OddNumber &e) {
        cout << e.what();
    }
     catch(runtime_error &e){
        cout << e.what();
    }


    return 0;
}