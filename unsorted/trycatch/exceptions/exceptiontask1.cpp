#include <iostream>
#include <exception>
using namespace std;
class my_exception : public exception {
public:
    const char* what() const noexcept override {
        return "Nie można dzielić przez 0";
    }
};

int main() {
    int liczba, cyfra;
    try 
    {
        cout << endl << "Podaj liczbe ";
        cin >> liczba;
        cout << endl << "przez co ją podzielić? ";
        cin >> cyfra;
        if(cyfra == 0)
        {
        throw my_exception();
        }
        else
        {
            throw liczba;
        }
    } 
    catch (const exception& e) 
    {
        cout << endl << e.what();
    }
    catch (...)
    {
        cout << endl << liczba/cyfra;
    }
    
    return NULL;
}