#include <iostream>
using namespace std;

class Tablica
{
    int SIZE;
    int *dynArr = new int[SIZE];

public:
    void setSize(int siize)
    {
        SIZE = siize;
    }
    int getSize()
    {
        return SIZE;
    }
    void fill(int SIZE)
    {
        for (int i = 0; i < SIZE; i++)
        {
            dynArr[i] = rand() % 1001;
        }
    }
    Tablica(int size)
    {
        SIZE = size;
        dynArr = new int[SIZE];
        fill(size);
    };
};

int main()
{

    Tablica tab;
    return 00;
}
// https://arkusze.pl/zawodowy/inf04-2025-styczen-egzamin-zawodowy-praktyczny.pdf