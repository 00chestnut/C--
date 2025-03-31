#include <iostream>
#include <string>
using namespace std;
int powieksz(int liczba1)//przeładowanie  (overloading) nazwy funkcji powinno 
//pozwalać rozróżniać te same nazwy funkcji po rodzaju lub liczbie parametrów.
{
    return liczba1 + 1;
};
int powieksz(int liczba1, int liczba2)
{
    return liczba1+liczba2;
};
int powieksz(float liczba1)
{
    int oIlePowiekszyć;
    cout<<"o ile powiekszyć"<<endl;
    cin>>oIlePowiekszyć;
    return liczba1+oIlePowiekszyć;
};
int main()
{
    int liczba1 = 4;
    float liczba2=5;
   
    cout<< endl<< powieksz(liczba1)<<endl;//5
    cout<< endl<< powieksz(liczba1,3)<<endl;//7
    cout<< endl<< powieksz(liczba2)<<endl;
    return 0;
}