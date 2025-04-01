#include <iostream>
#include <string>
using namespace std;
class Prostokat
{
public:
    int bok1;
    int bok2;

    // Konstruktor
    Prostokat(int b1, int b2) : bok1{b1}, bok2{b2} {}

    // Konstruktor kopiujący
    Prostokat(const Prostokat& wzorzec) {
        bok1 = wzorzec.bok1;
        bok2 = wzorzec.bok2;
    }
}; 

int main()
{
   Prostokat p1(5,10);

  cout<<p1.bok1<<endl;
    
}