#include <iostream>

using namespace std;

int main() {
    char letter;
    int digit;

    cout << "Enter a letter: ";
    cin >> letter;

    // Convert letter to its ASCII code
    int asciiCode = static_cast<int>(letter);

    cout << "ASCII code of '" << letter << "' is: " << asciiCode << endl;

    cout << "Enter a digit (0-9): ";
    cin >> digit;

    // Add the digit to the ASCII code
    int newAsciiCode = asciiCode + digit;

    // Ensure the new ASCII code is within the range of alphabets (A-Z or a-z)
    while (!((asciiCode >= 65 && asciiCode <= 90) || (asciiCode >= 97 && asciiCode <= 122))) {
        cout << "The input is not a letter. Please enter a letter: ";
        cin >> letter;
        asciiCode = static_cast<int>(letter);
    }

    // If the new ASCII code is beyond the range of alphabets, wrap around
    if ((asciiCode >= 65 && asciiCode <= 90 && newAsciiCode > 90) || (asciiCode >= 97 && asciiCode <= 122 && newAsciiCode > 122)) {
        newAsciiCode -= 26;
    }

    // Convert the new ASCII code back to a character
    char newLetter = static_cast<char>(newAsciiCode);

    cout << "After adding " << digit << ", the new letter is: " << newLetter << endl;

    return 0;
}