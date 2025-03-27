#include <iostream>
#include <vector>
#include <algorithm> // For sort
#include <numeric>   // For accumulate
#include <cstdlib>   // For rand()
#include <ctime>     // For time()

using namespace std;

// Function to print a vector
template <typename T>
void printVector(const vector<T>& vec) {
    for (const auto& val : vec) {
        cout << val << " ";
    }
    cout << endl;
}

// Function to fill a vector with random numbers
void fillVectorRandom(vector<int>& vec, int size, int min = 0, int max = 100) {
    vec.clear();
    vec.reserve(size);
    for (int i = 0; i < size; ++i) {
        vec.push_back(rand() % (max - min + 1) + min);
    }
}

// Function to find the minimum value
int findMin(const vector<int>& vec) {
    return *min_element(vec.begin(), vec.end());
}

// Function to find the maximum value
int findMax(const vector<int>& vec) {
    return *max_element(vec.begin(), vec.end());
}

// Function to calculate the sum of elements
int calculateSum(const vector<int>& vec) {
    return accumulate(vec.begin(), vec.end(), 0);
}

// Function to calculate the average value
double calculateAverage(const vector<int>& vec) {
    return vec.empty() ? 0 : static_cast<double>(calculateSum(vec)) / vec.size();
}

// Function to sort the vector using Bubble Sort
void bubbleSort(vector<int>& vec) {
    int n = vec.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (vec[j] > vec[j + 1]) {
                swap(vec[j], vec[j + 1]);
            }
        }
    }
}

int main() {
    srand(time(0)); // Seed random generator

    vector<int> myVector;
    int size;

    cout << "Enter number of elements: ";
    cin >> size;

    // Fill vector with random numbers
    fillVectorRandom(myVector, size, 1, 100);

    cout << "Generated Vector: ";
    printVector(myVector);

    cout << "Min Value: " << findMin(myVector) << endl;
    cout << "Max Value: " << findMax(myVector) << endl;
    cout << "Sum: " << calculateSum(myVector) << endl;
    cout << "Average: " << calculateAverage(myVector) << endl;

    // Sorting using Bubble Sort
    vector<int> bubbleSorted = myVector;
    bubbleSort(bubbleSorted);
    cout << "Bubble Sorted Vector: ";
    printVector(bubbleSorted);

    // Sorting using STL sort
    vector<int> stlSorted = myVector;
    sort(stlSorted.begin(), stlSorted.end());
    cout << "STL Sorted Vector: ";
    printVector(stlSorted);

    return 0;
}
