#include <iostream>
using namespace std;

void fillStaticArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100 + 1; 
    }
    arr[49] = 333;
}
// index pierwszego elementu tablicy to zero
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void searchArray(int arr[], int size, int query){
    for (int i = 0; i < size; i++) {
        if(arr[i] == query){
        cout << endl <<"Znaleziono szukany element! Jego indeks:" << i; 
            break;
        }else if(arr[i] == 333){
            cout << endl <<"Natrafiono na wartownika - elenment nie znaleziony";
            break;
        }
    }
}

int main()
{
    srand(time(0));
    const int staticSize = 50;
    int staticArr[staticSize];
    fillStaticArray(staticArr, staticSize);
    printArray(staticArr, staticSize);
    searchArray(staticArr, staticSize, 33);
    srand(time(0));
    return 0;
}