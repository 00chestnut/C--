#include <iostream>
#include <string>
using namespace std;

// 1. Access Modifiers in Structures
// By default, members of a struct are public

struct Person {
    string name;  // Public member
    int age;      // Public member

    // Constructor to initialize a Person object
    Person(string n, int a) : name(n), age(a) {}

    void display() {
        cout << "Person: " << name << ", Age: " << age << endl;
    }
};

class Employee {
    string name;  // Private member
    int salary;   // Private member

public:
    // Constructor to initialize Employee object
    Employee(string n, int s) : name(n), salary(s) {}

    void display() {
        cout << "Employee Name: " << name << ", Salary: " << salary << endl;
    }
};

// 2. Structs with Constructors
struct Point {
    int x, y;

    // Constructor to initialize a Point
    Point(int a, int b) : x(a), y(b) {}

    void display() {
        cout << "Point: (" << x << ", " << y << ")" << endl;
    }
};

// 3. Default Member Initialization (C++11 feature)
struct Circle {
    int radius = 5;  // Default value assigned to radius

    void display() {
        cout << "Circle with radius: " << radius << endl;
    }
};

// 4. Member Functions in Structs
struct Rectangle {
    int width, height;

    // Member function to calculate area
    int area() {
        return width * height;
    }

    // Constructor to initialize the rectangle
    Rectangle(int w, int h) : width(w), height(h) {}

    void display() {
        cout << "Rectangle: " << width << "x" << height << ", Area: " << area() << endl;
    }
};

// 5. Passing Structures to Functions
void printPersonDetails(Person p) {
    cout << "Person Name: " << p.name << ", Age: " << p.age << endl;
}

void printRectangleArea(Rectangle r) {
    cout << "Area of the rectangle: " << r.area() << endl;
}

// 6. Using Structures in Arrays
struct Student {
    string name;
    int grade;
};

void displayStudentDetails(Student students[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Student Name: " << students[i].name << ", Grade: " << students[i].grade << endl;
    }
}

// 7. Structures with Arrays and Nested Structures
struct Course {
    string courseName;
    Student students[3];  // Array of 3 students in each course

    void displayCourseInfo() {
        cout << "Course: " << courseName << endl;
        for (int i = 0; i < 3; i++) {
            cout << "Student " << (i+1) << ": " << students[i].name << ", Grade: " << students[i].grade << endl;
        }
    }
};

int main() {
    // Access Modifiers
    Person p("John", 25);
    p.display();

    Employee e("Alice", 5000);
    e.display();  // Employees' details are private in the class

    // Structs with Constructors
    Point pt(3, 4);
    pt.display();

    // Default Member Initialization
    Circle c;
    c.display();  // Will display default radius = 5

    // Member Functions in Structs
    Rectangle r(5, 10);
    r.display();  // Will show the rectangle details and area

    // Passing Structures to Functions
    printPersonDetails(p);

    // Using Structures in Arrays
    Student students[3] = {{"Alice", 90}, {"Bob", 85}, {"Charlie", 88}};
    displayStudentDetails(students, 3);

    // Structures with Nested Structures
    Course course1;
    course1.courseName = "Math 101";
    course1.students[0] = {"Alice", 90};
    course1.students[1] = {"Bob", 85};
    course1.students[2] = {"Charlie", 88};
    
    course1.displayCourseInfo();

    return 0;
}
