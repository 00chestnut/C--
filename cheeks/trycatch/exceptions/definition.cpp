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
class my_exception : public exception {
public:
    const char* what() const noexcept override {
        return "My custom exception";
    }
};
//obsługa błędów pzry pomocy klasy exception polega na redefiniowaniu funkcji what() w klasie pochodnej od exception.
int main() {
    try {
        throw my_exception();
    } catch (const exception& e) {
        cout << "Caught exception: " << e.what() << endl;
    }
    return 0;
}