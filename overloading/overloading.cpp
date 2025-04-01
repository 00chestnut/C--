#include <iostream>
using namespace std;
int dodaj(int liczba1)
{
    return liczba1+1;
};
int dodaj(int liczba1, int liczba2)
{
    return liczba1+liczba2;
};
int dodaj(int liczba1,size_t liczba2)
{
     cout<<"podaj ziut liczbe\n";
    cin>>liczba2;
    return liczba1+liczba2;
};
int main()
{
    int liczba1 = 4;
    size_t liczba2 = 5;
    cout<< endl<< dodaj(liczba1,liczba2);//0
    return 0;
}