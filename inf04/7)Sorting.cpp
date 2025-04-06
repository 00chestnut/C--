#include <iostream>
using namespace std;

class Array
{
private:
    int staticArr[10]; // Class field

public:
    // Fill the array with random values
    void fillStaticArray()
    {
        for (int i = 0; i < 10; i++)
        {
            staticArr[i] = rand() % 100; // Random numbers between 0-99
        }
    }

    void selectionSort()
    {
        for (int i = 0; i < 10 - 1; i++)
        {
            int minIndex = i;
            for (int j = i + 1; j < 10; j++)
            {
                if (staticArr[j] < staticArr[minIndex])
                {
                    minIndex = j;
                }
            }
            swap(staticArr[i], staticArr[minIndex]);
        }
    }

    // Print the array
    void printArray()
    {   
        cout << endl;
        for (int i = 0; i < 10; i++)
        {
            cout << staticArr[i] << " ";
        }
        cout << endl;
    }

    int findMax()
    {
        int maxVal = staticArr[0];
        for (int i = 1; i < 10; i++)
        {
            if (staticArr[i] > maxVal)
                maxVal = staticArr[i];
        }
        return maxVal;
    }
};

int main()
{
    srand(time(0)); // Seed random number generator
    Array arr1;
    arr1.fillStaticArray();
    arr1.printArray();
    arr1.selectionSort();
    arr1.printArray();
    cout << endl << "max value " << arr1.findMax();
    return 0;
}
