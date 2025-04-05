#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    char litera;
    int wynik;
    cout<<"podaj liotere"<<endl;
    cin>> litera;
    wynik=litera-'0'+litera-48;
    cout<<wynik;
    return 110;
}