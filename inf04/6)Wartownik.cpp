#include <iostream>
using namespace std;

void fillStaticArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100 + 1; // Random numbers between 0-99
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main()
{
    const int staticSize = 50;
    int staticArr[staticSize];
    fillStaticArray(staticArr, staticSize);
    printArray(staticArr, staticSize);
    srand(time(0));
    return 0;
}