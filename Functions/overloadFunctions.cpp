#include <iostream>
using namespace std;

// Overloaded function to print an integer
void print(int i) {
    cout << "Printing integer: " << i << endl;
}

// Overloaded function to print a double
void print(double d) {
    cout << "Printing double: " << d << endl;
}

// Overloaded function to print a string
void print(const string& s) {
    cout << "Printing string: " << s << endl;
}

// Overloaded function to print two integers
void print(int i, int j) {
    cout << "Printing two integers: " << i << " and " << j << endl;
}

int main() {
    // Calling overloaded functions
    print(42);           // Calls print(int)
    print(3.14);         // Calls print(double)
    print("Hello!");     // Calls print(string)
    print(10, 20);       // Calls print(int, int)

    return 0;
}
