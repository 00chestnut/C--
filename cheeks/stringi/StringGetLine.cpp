#include <iostream>
#include <string>
using namespace std;

int main()
{
    string napis1;
    cout << "podaj imie i nazwisko: ";
    getline(cin, napis1);
    cout << napis1.find(" ") - napis1.length() << endl;
    return 0;
}
