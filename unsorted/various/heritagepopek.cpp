// Grupa A :klasa bazowa mają własność która się dziedziczy, ale nie są dostępne w funkcji main przez operator wyłuskania, oraz wlasność private..
// Klasa pochodna ma mieć  odziedziczone własności chronione oraz metodę display.
// W funkcji main wyedytuj wszystkie własności.
#include <iostream>
using namespace std;
class base
{
private:
    int p1 = 1;

protected:
    int p2 = 3;
public: 
int getp1() { return p1; }
int getp2() { return p2; }
void setp1(int pp1){p1 = pp1;}
void setp2(int pp2){p2 = pp2;}
}; class dollop : protected base
{
    public:
    dollop(int ip1,int ip2){
        p2 = ip2;
        setp1(ip1);
    }
    void display()
    {
        cout << p2 << " ," << getp1() << endl;
    }
}; int main()
{
    dollop car(1, 3);
 car.setp1(4);
 car.setp2(6);
 car.display();
    return 0;
}