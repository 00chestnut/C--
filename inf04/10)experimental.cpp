#include <iostream>
using namespace std;
// grupa A  
class Array
{
private:
    int staticArr[10];

public:
    void fillStaticArray()
    {
        for (int i = 0; i < 10; i++)
        {
            staticArr[i] = rand() % 6 + 1;
        }
    }
    void selectionSort()
    {
        for (int i = 0; i < 10 - 1; i++)
        {
            int minIndex = i;
            for (int j = i + 1; j < 10; j++)
            {
                if (staticArr[j] > staticArr[minIndex])
                {
                    minIndex = j;
                }
            }
            swap(staticArr[i], staticArr[minIndex]);
        }
    }
    void printArray()
    {
        cout << endl;
        for (int i = 0; i < 10; i++)
        {
            cout << staticArr[i] << " ";
        }
        cout << endl;
    }
    int findMin()
    {
        int minVal = staticArr[0];
        for (int i = 1; i < 10; i++)
        {
            if (staticArr[i] < minVal)
                minVal = staticArr[i];
        }
        return minVal;
    }
};

int main()
{
    srand(time(0));
    Array arr1;
    arr1.fillStaticArray();
    cout << "Tablica nieposortowana ";
    arr1.printArray();
    arr1.selectionSort();
    cout << "Tablica posortowana ";
    arr1.printArray();
    cout << "Najmniejsza wartość w tablicy: " << arr1.findMin();
    return 0;
}
