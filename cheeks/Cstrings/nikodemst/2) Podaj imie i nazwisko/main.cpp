#include <iostream>
#include <cstring>
#include<limits>
using namespace std;
int main() 
{
char wersja1[30];
cout << "Podaj pierwsze imie i nazwisko"<<endl;
cin.get(wersja1,30);
cout << wersja1 << endl;
cin.ignore( 50,'\n');
cout << "Podaj drugie imie i nazwisko ";
char wersja2[30];
cin.get(wersja2,30);
cout << wersja2 << endl;
return 0;
}