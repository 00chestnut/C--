#include <iostream>
using namespace std;

class Tablica
{
    int SIZE;
    int *dynArr;

public:
    void setSize(int size)
    {
        SIZE = size;
    }
    int getSize()
    {
        return SIZE;
    }
    void fill()
    {
        for (int i = 0; i < SIZE; i++)
        {
            dynArr[i] = rand() % 1001 + 1;
        }
    }
    ~Tablica()
    {
        delete[] dynArr;
    }
    Tablica(int size)
    {
        SIZE = size;
        dynArr = new int[SIZE];
        fill();
    }
    void display()
    {
        for (int i = 0; i < SIZE; i++)
        {
            cout << i << ": " << dynArr[i] << endl;
        }
    }
};

int main()
{
    Tablica tab(30);
    tab.display();
    return 0;
}
