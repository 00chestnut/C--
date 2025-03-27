#include <iostream>
#include <string>      // For working with strings
#include <sstream>     // For stringstream and splitting strings
#include <algorithm>   // For algorithms like sorting and transforming
#include <iterator>    // For iterators and splitting
#include <vector>      // For using vectors

using namespace std;

int main() {

    // ---------------- Basic String Creation ----------------

    // Declare and initialize strings
    string str1 = "Hello";    // Direct initialization
    string str2 = "World";    // Another string
    
    // Empty string
    string emptyStr = "";

    // ---------------- String Length ----------------
    
    // String Length
    cout << "Length of str1: " << str1.length() << endl;  // .length() or .size()

    // ---------------- Substring Operations ----------------

    // Extracting a substring from a string
    string subStr = str2.substr(1, 3);  // Start at index 1, length 3
    cout << "Substring from str2: " << subStr << endl; // Output: "orl"

    // Get a substring from the end (negative indices not supported directly)
    string endSubStr = str1.substr(str1.length() - 3);  // Last 3 characters of str1
    cout << "Last 3 characters of str1: " << endSubStr << endl; // Output: "llo"

    // ---------------- Dividing a String ----------------

    // Using stringstream to split a string into multiple parts
    string text = "apple,banana,cherry";
    stringstream ss(text);
    string temp;
    vector<string> parts;

    // Splitting by commas and saving each part into the vector
    while (getline(ss, temp, ',')) {
        parts.push_back(temp);
    }

    cout << "Split string by commas: ";
    for (const string& part : parts) {
        cout << part << " ";
    }
    cout << endl;

    // ---------------- Saving Parts of String into Variables ----------------

    // Using substrings to store specific parts of the string into separate variables
    string phrase = "I love programming";
    string word1 = phrase.substr(0, 1);  // First word (I)
    string word2 = phrase.substr(2, 4);  // Second word (love)
    string word3 = phrase.substr(7, 11); // Third word (programming)

    cout << "First word: " << word1 << endl;  // Output: "I"
    cout << "Second word: " << word2 << endl; // Output: "love"
    cout << "Third word: " << word3 << endl;  // Output: "programming"

    // ---------------- Find First and Last Occurrence of a Substring ----------------

    // Find position of first occurrence of 'e'
    size_t firstE = phrase.find('e');
    cout << "First occurrence of 'e': " << firstE << endl; // Output: position of 'e'

    // Find last occurrence of 'e'
    size_t lastE = phrase.rfind('e');
    cout << "Last occurrence of 'e': " << lastE << endl; // Output: position of last 'e'

    // ---------------- Replace and Modify String ----------------

    // Replace part of a string
    phrase.replace(2, 4, "like");  // Replacing "love" with "like"
    cout << "Modified phrase: " << phrase << endl;  // Output: "I like programming"

    // Insert into a string
    phrase.insert(7, "really ");  // Insert "really " at index 7
    cout << "After insert: " << phrase << endl;  // Output: "I like really programming"

    // Erase part of the string
    phrase.erase(7, 7);  // Erase "really " starting at index 7
    cout << "After erase: " << phrase << endl;  // Output: "I like programming"

    // ---------------- String Transformation ----------------

    // Convert string to uppercase (using transform and ::toupper)
    transform(phrase.begin(), phrase.end(), phrase.begin(), ::toupper);
    cout << "Uppercase: " << phrase << endl;  // Output: "I LIKE PROGRAMMING"

    // Convert string to lowercase (using transform and ::tolower)
    transform(phrase.begin(), phrase.end(), phrase.begin(), ::tolower);
    cout << "Lowercase: " << phrase << endl;  // Output: "i like programming"

    // ---------------- Checking for Substrings ----------------

    // Check if a string contains a specific substring
    if (phrase.find("like") != string::npos) {
        cout << "'like' found in phrase." << endl;
    } else {
        cout << "'like' not found in phrase." << endl;
    }

    // ---------------- String Comparison ----------------

    // Compare strings lexicographically
    string strA = "apple";
    string strB = "banana";

    if (strA < strB) {
        cout << strA << " is lexicographically smaller than " << strB << endl;
    } else {
        cout << strA << " is lexicographically greater than or equal to " << strB << endl;
    }

    // ---------------- String to Number Conversion ----------------

    // Convert string to integer (stoi)
    string numStr = "100";
    int num = stoi(numStr);  // stoi converts string to int
    cout << "Converted string to integer: " << num << endl;

    // Convert string to float (stof)
    string floatStr = "3.14159";
    float pi = stof(floatStr);  // stof converts string to float
    cout << "Converted string to float: " << pi << endl;

    // ---------------- String Manipulation with Iterators ----------------

    // Reversing a string using iterators
    string reverseStr = "C++ is fun!";
    reverse(reverseStr.begin(), reverseStr.end());
    cout << "Reversed string: " << reverseStr << endl;  // Output: "!nuf si ++C"

    // ---------------- Trimming Whitespace ----------------

    // Remove leading spaces
    string leadingSpace = "    Space before";
    leadingSpace.erase(0, leadingSpace.find_first_not_of(" "));
    cout << "After trimming leading spaces: '" << leadingSpace << "'" << endl;

    // Remove trailing spaces
    string trailingSpace = "Space after    ";
    trailingSpace.erase(trailingSpace.find_last_not_of(" ") + 1);
    cout << "After trimming trailing spaces: '" << trailingSpace << "'" << endl;

    // ---------------- String Splitting (Custom Delimiters) ----------------

    // Using a custom delimiter to split a string (with an iterator approach)
    string data = "apple|banana|cherry";
    vector<string> fruits;
    size_t pos = 0;
    string delimiter = "|";

    while ((pos = data.find(delimiter)) != string::npos) {
        fruits.push_back(data.substr(0, pos));
        data.erase(0, pos + delimiter.length());
    }
    fruits.push_back(data);  // Adding the last part after the last delimiter

    cout << "Splitting with custom delimiter: ";
    for (const string& fruit : fruits) {
        cout << fruit << " ";
    }
    cout << endl; // Output: apple banana cherry
}
