#include <iostream>
#include <string>

using namespace std;

int main() {
    // Initializing strings
    string s1 = "Hello";
    string s2("World");

    // Concatenation
    string s3 = s1 + " " + s2;

    // Length
    cout << "Length of s3: " << s3.length() << endl;

    // Accessing individual characters
    cout << "First character of s3: " << s3[0] << endl;
    cout << "Last character of s3: " << s3[s3.length() - 1] << endl;

    // Substring
    string sub = s3.substr(6, 5); // Extract "World"
    cout << "Substring of s3: " << sub << endl;

    // Find
    size_t pos = s3.find("World");
    if (pos != string::npos) {
        cout << "Substring 'World' found at position: " << pos << endl;
    } else {
        cout << "Substring 'World' not found in s3." << endl;
    }

    // Replace
    s3.replace(pos, 5, "Universe");
    cout << "After replacement: " << s3 << endl;

    // Erase
    s3.erase(5, 8); // Remove "World"
    cout << "After erasing: " << s3 << endl;

    // Insert
    s3.insert(5, "People ");
    cout << "After insertion: " << s3 << endl;

    // Compare
    string s4 = "Hello Universe";
    if (s3 == s4) {
        cout << "s3 and s4 are equal." << endl;
    } else {
        cout << "s3 and s4 are not equal." << endl;
    }

    // Iterate through characters
    cout << "Characters of s3: ";
    for (char c : s3) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}
