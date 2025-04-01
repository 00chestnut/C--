#include <iostream>
#include "litry.h"
using namespace std;

int main()
{
    int litr{};
    litry liter;
    cout << "daj litr a jo to zamieniajta \n";
    cin >> litr;
    litrywpojemnikach(litr, liter);
    cout << "tanks: " << liter.tanks << endl;
    cout << "wanna: " << liter.bath << endl;
    cout << "galon: " << liter.galons << endl;
    cout << "litr: " << liter.litr << endl;
    return 0;
}