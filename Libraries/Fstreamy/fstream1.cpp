/*#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int dane;
    fstream plik;
   plik.open("wyjscie1.txt");
   ios::in;
   plik<< 6 <<" "<< 9<<" ";
   ios::out;
   ios::app;
   plik<< 6 <<" "<< 9;
     plik>> dane;
   cout<< dane<<endl;
    return 0;
}*/
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    int zPliku,iterator=0;
    fstream plik;
    // plik.open ("wyjscie.txt", ios::out);
    // plik << 5 << " " << 50 ;
    // plik.close();
    // plik.open("wyjscie.txt", ios::app);
    // plik << " "<<15 << " " << 60 ;
    // plik.close();
    plik.open ("wyjscie1.txt" ,ios::in);
    while (!plik.eof())
    {
        plik >> zPliku;
        cout << zPliku << endl;
        iterator++;
    }
    int *liczby;
    liczby=new int[iterator];
    plik.close();
    plik.open ("wyjscie1.txt" ,ios::in);
    int i=0;
     while (!plik.eof())
    {

        plik >> zPliku;
        liczby[i]=zPliku;
        i++;
    }
    plik.close();
    for (short i = 0; i < iterator; i++)
    {
        cout<<liczby[i]<<' ';
    }
    
    // cout<<iterator;
    return 0;
}