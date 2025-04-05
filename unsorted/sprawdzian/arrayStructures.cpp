#include <iostream>
#include <iomanip> // For std::setprecision

using namespace std;

// Define a structure for grade and wage
struct GradeWage {
    int grade;
    double wage;
};

// Function to display grade and wage details
void displayGradeWage(const GradeWage& gw) {
    cout << "Grade: " << gw.grade << ", Wage: $" << fixed << setprecision(2) << gw.wage << endl;
}

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    // Dynamic allocation of array based on user input
    GradeWage* arr = new GradeWage[numStudents];

    // Input grade and wage for each student
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter grade for student " << i + 1 << ": ";
        cin >> arr[i].grade;
        cout << "Enter wage for student " << i + 1 << ": ";
        cin >> arr[i].wage;
    }

    // Display all grade and wage details
    cout << "Grade and Wage Details:" << endl;
    for (int i = 0; i < numStudents; ++i) {
        cout << "Student " << i + 1 << ": ";
        displayGradeWage(arr[i]);
    }

    // Free allocated memory
    delete[] arr;

    return 0;
}