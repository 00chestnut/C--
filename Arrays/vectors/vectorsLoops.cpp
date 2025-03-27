#include <iostream>
#include <vector>
#include <cstdlib> // For rand()
#include <ctime>   // For time()
#include <algorithm> // For sort()

using namespace std;

int main() {
    srand(time(0)); // Seed for random numbers

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> vec(n);

    // Filling vector with random numbers
    for (int i = 0; i < n; i++) {
        vec[i] = rand() % 100; // Random number between 0-99
    }

    // Display the vector using a for loop
    cout << "Vector elements: ";
    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    // Finding min and max values using loops
    int minVal = vec[0], maxVal = vec[0], sum = 0;
    for (int i = 0; i < n; i++) {
        if (vec[i] < minVal) minVal = vec[i];
        if (vec[i] > maxVal) maxVal = vec[i];
        sum += vec[i];
    }
    double average = static_cast<double>(sum) / n;

    cout << "Min: " << minVal << endl;
    cout << "Max: " << maxVal << endl;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    // Sorting the vector using bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (vec[j] > vec[j + 1]) {
                swap(vec[j], vec[j + 1]);
            }
        }
    }

    // Display sorted vector using a while loop
    cout << "Sorted Vector: ";
    int index = 0;
    while (index < n) {
        cout << vec[index] << " ";
        index++;
    }
    cout << endl;

    return 0;
}
