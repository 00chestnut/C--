#include <iostream>
#include "operacje.h"
using namespace std;

// struct normalizator {
//     int cysterna;
//     int wanna;
//     int galon;
//     int litr;
// };

// void wypiszInformacje(normalizator liter) 
// {
//     cout << "Objętość znormalizowana podanego płynu wynosi: " <<  liter.cysterna << " cystern, " << liter.wanna << " wanien, " << liter.galon << " galonów, oraz  " << liter.litr << " litrów pozostałego płynu." << endl;
// }

// void liczienieLitrow(int totalLiter, normalizator &liter)
// {
//     liter.cysterna = totalLiter / 1000 ;
//     totalLiter %= 1000;
//     liter.wanna = totalLiter / 200;
//     totalLiter %= 200;
//     liter.galon = totalLiter / 5;
//     totalLiter %=5 ;
//     liter.litr = totalLiter / 1;
//     totalLiter %=1;
// }

int main() {
    int totalLiter;
    normalizator liter;
    cout << "Podaj ilość litrów: ";
    cin >> totalLiter;
    liczienieLitrow(totalLiter,liter);
    wypiszInformacje(liter);

    return 0;
}