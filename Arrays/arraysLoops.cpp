#include <iostream>
#include <vector>
#include <cstdlib> // for rand()

using namespace std;

int main() {
    // ----- FOR LOOP WITH ARRAY -----
    const int SIZE = 5;
    int arr[SIZE] = {10, 20, 30, 40, 50};
    
    cout << "For loop iterating over static array:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // ----- WHILE LOOP WITH ARRAY -----
    cout << "While loop iterating over static array:" << endl;
    int index = 0;
    while (index < SIZE) {
        cout << arr[index] << " ";
        index++;
    }
    cout << endl;

    // ----- DO-WHILE LOOP WITH ARRAY -----
    cout << "Do-while loop iterating over static array:" << endl;
    int idx = 0;
    do {
        cout << arr[idx] << " ";
        idx++;
    } while (idx < SIZE);
    cout << endl;

    // ----- LOOPING THROUGH A DYNAMIC ARRAY -----
    int* dynArr = new int[SIZE];
    
    // Filling dynamic array with random numbers
    for (int i = 0; i < SIZE; i++) {
        dynArr[i] = rand() % 100;
    }
    
    cout << "For loop iterating over dynamic array:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << dynArr[i] << " ";
    }
    cout << endl;
    
    delete[] dynArr; // Free memory
    
    // ----- LOOPING THROUGH VECTORS -----
    vector<int> vec = {5, 10, 15, 20, 25};
    
    cout << "For loop iterating over vector:" << endl;
    for (size_t i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
    
    cout << "Range-based for loop iterating over vector:" << endl;
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
    
    // ----- FINDING MIN, MAX, SUM, AVERAGE IN ARRAY -----
    int minVal = arr[0], maxVal = arr[0], sum = 0;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
        sum += arr[i];
    }
    double avg = static_cast<double>(sum) / SIZE;
    cout << "Min: " << minVal << ", Max: " << maxVal << ", Sum: " << sum << ", Avg: " << avg << endl;
    
    // ----- SORTING AN ARRAY (Bubble Sort) -----
    int sortedArr[SIZE] = {10, 5, 30, 20, 15};
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (sortedArr[j] > sortedArr[j + 1]) {
                swap(sortedArr[j], sortedArr[j + 1]);
            }
        }
    }
    cout << "Sorted array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << sortedArr[i] << " ";
    }
    cout << endl;
    
    return 0;
}