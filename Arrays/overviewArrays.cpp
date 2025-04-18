#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
#include <algorithm> // For std::sort
// INDEX PIERWSZY TABLICY TO ZERO !!!!!!!!!!!!!!!!!!!!!!!!!!!
using namespace std;

// Function to fill a static array with random numbers
void fillStaticArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100; // Random numbers between 0-99
    }
}
// INDEX PIERWSZY TABLICY TO ZERO !!!!!!!!!!!!!!!!!!!!!!!!!!!
// Function to fill a dynamic array with random numbers
void fillDynamicArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100; // Random numbers between 0-99
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// INDEX PIERWSZY TABLICY TO ZERO !!!!!!!!!!!!!!!!!!!!!!!!!!!
// Function to find the minimum value in an array
int findMin(int arr[], int size) {
    int minVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) minVal = arr[i];
    }
    return minVal;
}

// Function to find the maximum value in an array
int findMax(int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) maxVal = arr[i];
    }
    return maxVal;
}
// INDEX PIERWSZY TABLICY TO ZERO !!!!!!!!!!!!!!!!!!!!!!!!!!!
// Function to calculate the sum of elements in an array
int findSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function to calculate the average of an array
double findAverage(int arr[], int size) {
    return static_cast<double>(findSum(arr, size)) / size;
}

// Bubble sort implementation
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}
// INDEX PIERWSZY TABLICY TO ZERO !!!!!!!!!!!!!!!!!!!!!!!!!!!
int main() {
    srand(time(0)); // Seed for random number generation
    
    // Static array example
    const int staticSize = 10;
    int staticArr[staticSize];
    fillStaticArray(staticArr, staticSize);
    // INDEX PIERWSZY TABLICY TO ZERO !!!!!!!!!!!!!!!!!!!!!!!!!!!
    cout << "Static Array: ";
    printArray(staticArr, staticSize);
    cout << "Min: " << findMin(staticArr, staticSize) << endl;
    cout << "Max: " << findMax(staticArr, staticSize) << endl;
    cout << "Sum: " << findSum(staticArr, staticSize) << endl;
    cout << "Average: " << findAverage(staticArr, staticSize) << endl;
    
    bubbleSort(staticArr, staticSize);
    selectionSort(staticArr, staticSize);
    insertionSort(staticArr, staticSize);
    cout << "Sorted Static Array: ";
    printArray(staticArr, staticSize);
    
    // Dynamic array example
    int dynamicSize;
    cout << "\nEnter size for dynamic array: ";
    cin >> dynamicSize;
    int* dynamicArr = new int[dynamicSize];
    // INDEX PIERWSZY TABLICY TO ZERO !!!!!!!!!!!!!!!!!!!!!!!!!!!
    fillDynamicArray(dynamicArr, dynamicSize);
    // INDEX PIERWSZY TABLICY TO ZERO !!!!!!!!!!!!!!!!!!!!!!!!!!!
    cout << "Dynamic Array: ";
    printArray(dynamicArr, dynamicSize);
    cout << "Min: " << findMin(dynamicArr, dynamicSize) << endl;
    cout << "Max: " << findMax(dynamicArr, dynamicSize) << endl;
    cout << "Sum: " << findSum(dynamicArr, dynamicSize) << endl;
    cout << "Average: " << findAverage(dynamicArr, dynamicSize) << endl;
    
    // Using STL sort for dynamic array
    sort(dynamicArr, dynamicArr + dynamicSize);
    cout << "Sorted Dynamic Array: ";
    printArray(dynamicArr, dynamicSize);
    // INDEX PIERWSZY TABLICY TO ZERO !!!!!!!!!!!!!!!!!!!!!!!!!!!
    // Free allocated memory
    delete[] dynamicArr;
    return 0;
}
