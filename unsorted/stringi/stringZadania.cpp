#include <iostream>
#include <string>
using namespace std;

void inputCarDetails(string& brand, string& model, string& year) {
    cout << "Enter the brand of the car: ";
    getline(cin, brand);

    cout << "Enter the model of the car: ";
    getline(cin, model);

    cout << "Enter the year of production of the car: ";
    getline(cin, year);
}

void printCarDetails(const string& brand, const string& model, const string& year) {
    cout << "\nCar Details:\n";
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Year of Production: " << year << endl;
}

void inputThreeWords(string& word1, string& word2, string& word3) {
    cout << "Enter first word: ";
    getline(cin, word1);

    cout << "Enter second word: ";
    getline(cin, word2);

    cout << "Enter third word: ";
    getline(cin, word3);
}

void printThreeWords(const string& word1, const string& word2, const string& word3) {
    cout << word1 << " " << word2 << " " << word3 << endl;
}

bool compareStrings(const string& str1, const string& str2) {
    return str1 == str2;
}

void findSubstringPosition(const string& str1, const string& str2) {
    size_t pos = str2.find(str1);
    if (pos != string::npos) {
        cout << "String " << str1 << " is a substring of " << str2 << " starting at position " << pos << endl;
    } else {
        cout << "String " << str1 << " is not a substring of " << str2 << endl;
    }
}

void inputFullPlaceName(string& place) {
    cout << "Enter full name of the place: ";
    getline(cin, place);
}

void copySecondToFirst(string& str1, const string& str2) {
    str1 = str2;
}

int main() {
    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Input Car Details and Print\n";
        cout << "2. Input Three Words and Print\n";
        cout << "3. Compare Strings\n";
        cout << "4. Find Substring Position\n";
        cout << "5. Input Full Place Name\n";
        cout << "6. Copy Second to First\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Ignore newline left in the input buffer

        switch (choice) {
            case 1: {
                string brand, model, year;
                inputCarDetails(brand, model, year);
                printCarDetails(brand, model, year);
                break;
            }
            case 2: {
                string word1, word2, word3;
                inputThreeWords(word1, word2, word3);
                printThreeWords(word1, word2, word3);
                break;
            }
            case 3: {
                string str1, str2;
                cout << "Enter first string: ";
                getline(cin, str1);
                cout << "Enter second string: ";
                getline(cin, str2);
                cout << (compareStrings(str1, str2) ? "Strings are equal" : "Strings are not equal") << endl;
                break;
            }
            case 4: {
                string str1, str2;
                cout << "Enter substring: ";
                getline(cin, str1);
                cout << "Enter string to search in: ";
                getline(cin, str2);
                findSubstringPosition(str1, str2);
                break;
            }
            case 5: {
                string place;
                inputFullPlaceName(place);
                cout << place << endl;
                break;
            }
            case 6: {
                string str1, str2;
                cout << "Enter first string: ";
                getline(cin, str1);
                cout << "Enter second string: ";
                getline(cin, str2);
                copySecondToFirst(str1, str2);
                cout << "First string after copying: " << str1 << endl;
                break;
            }
            case 7: {
                cout << "Exiting program...\n";
                break;
            }
            default: {
                cout << "Invalid choice. Please enter a number between 1 and 7.\n";
                break;
            }
        }
    } while (choice != 7);

    return 0;
}