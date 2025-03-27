#include <iostream>
#include <string>

using namespace std;

// Define a basic structure called "Person"
struct Person {
    string name;   // Member variable to store the name
    int age;       // Member variable to store the age
    double height; // Member variable to store the height

    // A member function inside the structure to display data
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Height: " << height << " meters" << endl;
    }
};

int main() {

    // ---------------- Creating and Initializing Structures ----------------
    
    // Initializing a structure directly
    Person person1;
    person1.name = "Alice";
    person1.age = 30;
    person1.height = 1.75;

    // Displaying the information using the member function
    cout << "Person 1 Information:" << endl;
    person1.display();  // Output: Name, Age, Height of person1
    cout << endl;

    // Initializing structure with an aggregate initialization
    Person person2 = {"Bob", 25, 1.80};

    // Displaying information of person2
    cout << "Person 2 Information:" << endl;
    person2.display();  // Output: Name, Age, Height of person2
    cout << endl;

    // ---------------- Accessing Members ----------------

    // You can access members of a structure using dot notation
    cout << "Person 1's name is: " << person1.name << endl;  // Alice
    cout << "Person 2's age is: " << person2.age << endl;    // 25
    cout << endl;

    // ---------------- Pointers to Structures ----------------

    // Using pointers to structures
    Person* ptrPerson = &person1;

    // Accessing members of a structure via pointer using '->'
    cout << "Pointer accessing Person 1's name: " << ptrPerson->name << endl; // Alice
    cout << "Pointer accessing Person 1's age: " << ptrPerson->age << endl;  // 30
    cout << endl;

    // ---------------- Arrays of Structures ----------------

    // Creating an array of structures
    Person people[3] = {
        {"Charlie", 22, 1.85},
        {"David", 28, 1.78},
        {"Eva", 26, 1.65}
    };

    // Looping through an array of structures
    cout << "Array of People Information:" << endl;
    for (int i = 0; i < 3; ++i) {
        people[i].display();  // Displaying details of each person in the array
        cout << endl;
    }

    // ---------------- Passing Structures to Functions ----------------

    // Function to display the information of a person (passing by reference)
    void displayPerson(const Person& p) {
        cout << "Name: " << p.name << ", Age: " << p.age << ", Height: " << p.height << endl;
    }

    // Passing a structure to the function
    displayPerson(person1);  // Output: Name, Age, Height of person1
    displayPerson(person2);  // Output: Name, Age, Height of person2

    // ---------------- Returning Structures from Functions ----------------

    // Function to return a structure
    Person createPerson(string name, int age, double height) {
        Person newPerson;
        newPerson.name = name;
        newPerson.age = age;
        newPerson.height = height;
        return newPerson;
    }

    // Creating a new person using the function and storing it in a variable
    Person person3 = createPerson("Fay", 31, 1.70);

    // Displaying the new person details
    cout << "New Person created:" << endl;
    displayPerson(person3);  // Output: Name, Age, Height of person3
    cout << endl;

    return 0;
}
