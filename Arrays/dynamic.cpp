#include <iostream>

int main() {
    int size;
    std::cout << "Enter the number of elements: ";
    std::cin >> size;
    
    // Dynamically allocate an array
    double* numbers = new double[size];
    
    std::cout << "Enter " << size << " numbers: " << std::endl;
    double sum = 0;
    
    for (int i = 0; i < size; i++) {
        std::cin >> numbers[i];
        sum += numbers[i];
    }
    
    // Calculate average
    double average = sum / size;
    std::cout << "Average: " << average << std::endl;
    
    // Free allocated memory
    delete[] numbers;
    
    return 0;
}
