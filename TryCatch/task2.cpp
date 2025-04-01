// Obsłuż błąd dzielenia przez zero.

/*Definicja klasy exception z bibliteki <exception>
class exception {
public:
    exception() noexcept;// piszemy noexcept aby kompilator dla tej metody nie implementował obsługi błędów
    exception(const exception&) noexcept; //w niższych standardach zamiast noexcept piszemy  throw()
    exception& operator=(const exception&) noexcept; Rule of three
    virtual ~exception() noexcept;
    virtual const char* what() const noexcept;//const znaczy że funkcja nie zmienia obiektu.
};*/

#include <iostream>
#include <exception>
using namespace std;

class divideZeroException : public exception
{
public:
    const char *what() const noexcept override
    {
        return "nie dziel przez zero";
    }
};
// obsługa błędów pzry pomocy klasy exception polega na redefiniowaniu funkcji what() w klasie pochodnej od exception.
int main()
{

    try
    {
        int a, b;
        cout << "Podaj a : ";
        cin >> a;
        cout << "Podaj b : ";
        cin >> b;

        if (b == 0)
        {
            throw divideZeroException();
        }

        cout << a/b;
    }
    catch (const exception &e)
    {
        cout << "Caught exception: " << e.what() << endl;
    }
    return 0;
}