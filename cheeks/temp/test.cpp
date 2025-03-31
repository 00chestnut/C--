

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
        // cout << 3 / 0 << endl;
    }
    return 0;
}