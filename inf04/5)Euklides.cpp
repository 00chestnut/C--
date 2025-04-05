#include <iostream>
using namespace std;
int NWD(int a, int b)
{
    while (a != b)
    {
        if (a > b){
            a -= b;
        }
        else {
            b -= a;
        }
    }
    return a;
}

int main()
{
    cout << endl << NWD(10, 91);
    return 0;
}