// Obsłuż na dwa sposoby błąd podania przez użytkownika liczby ujemnej i niecałkowitej.
// Jeżeli liczba jest nieujemna i całkowita to ją wypisujemy. Jeżeli jest ujemna albo niecałkowita to wypisujemy komunikat o błędzie.

#include <iostream>
#include <stdexcept>
using namespace std;

class MyLogicError : public logic_error
{
public:
    MyLogicError(const string &msg) : logic_error(msg) {}
};

int main()
{
    try
    {
        double a;
        cout << "Podaj liczbe : ";
        cin >> a;
        if (a < 0)
        {
            throw runtime_error("Liczba jest ujemna");
        }
        else if (a - (int)a == 0)
        {
            throw MyLogicError("Liczba jest niecałkowita");
        }
        cout << "Podana liczba : " << a;
    }
    catch (const runtime_error &e)
    {
        cout << "Caught MyRuntimeError: " << e.what() << endl;
    }
    catch (const logic_error &e)
    {
        cout << "Caught MyRuntimeError: " << e.what() << endl;
    }

    return 0;
}