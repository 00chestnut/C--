#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
#include <tuple>

using namespace std;

// Function to replace the first word with the last while maintaining spaces
string replaceFirstWithLast(const string& phrase) {
    size_t firstSpace = phrase.find(' ');
    if (firstSpace == string::npos) {
        return phrase;
    }

    string firstWord = phrase.substr(0, firstSpace);
    string SecondWord = phrase.substr(firstSpace, - firstWord.length());
    string modifiedPhrase = SecondWord + firstWord;

    return modifiedPhrase;
}

// Function to add '%' into every space
string addPercentage(const string& phrase) {
    string modified = phrase;
    replace(modified.begin(), modified.end(), ' ', '%');
    return modified;
}

// Function to replace 'a' with '@'
string replaceAWithAt(const string& phrase) {
    string modified = phrase;
    replace(modified.begin(), modified.end(), 'a', '@');
    return modified;
}

// Function to add '!' in front of every 'c'
string addExclamationBeforeC(const string& phrase) {
    string modified = phrase;
    size_t pos = modified.find('c');
    while (pos != string::npos) {
        modified.insert(pos, "!");
        pos = modified.find('c', pos + 2);
    }
    return modified;
}

// Function to put the phrase into quotation marks
string putInQuotationMarks(const string& phrase) {
    return "\"" + phrase + "\"";
}

// Function to add a '.' at the end
string addDot(const string& phrase) {
    return phrase + ".";
}

// Function to count the number of occurrences of a specific character or substring
pair<int, vector<size_t>> countOccurrences(const string& phrase, const string& pattern) {
    int count = 0;
    vector<size_t> indexes;
    size_t pos = 0;

    while ((pos = phrase.find(pattern, pos)) != string::npos) {
        count++;
        indexes.push_back(pos);
        pos += pattern.length();
    }
    return make_pair(count, indexes);
}

// Function to count letters, numbers, and other characters
tuple<int, int, int> countCharacterTypes(const string& phrase) {
    int letters = 0, numbers = 0, others = 0;
    for (char c : phrase) {
        if (isalpha(c)) {
            letters++;
        } else if (isdigit(c)) {
            numbers++;
        } else {
            others++;
        }
    }
    return make_tuple(letters, numbers, others);
}

// Function to toggle the case of letters in the phrase
string toggleCase(const string& phrase) {
    string modified = phrase;
    for (char& c : modified) {
        if (isupper(c)) {
            c = tolower(c);
        } else if (islower(c)) {
            c = toupper(c);
        }
    }
    return modified;
}

// Function to count uppercase and lowercase letters
pair<int, int> countUpperLowerCase(const string& phrase) {
    int upperCase = 0, lowerCase = 0;
    for (char c : phrase) {
        if (isupper(c)) {
            upperCase++;
        } else if (islower(c)) {
            lowerCase++;
        }
    }
    return make_pair(upperCase, lowerCase);
}

// Function to display the current phrase
void displayCurrentPhrase(const string& phrase) {
    cout << "Current phrase: " << phrase << endl;
}

int main() {
    string phrase;
    cout << "Enter a phrase: ";
    getline(cin, phrase);
    string modifiedPhrase = phrase;
    string originalPhrase = phrase;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Replace first word with last\n";
        cout << "2. Add '%' into every space\n";
        cout << "3. Replace 'a' with '@'\n";
        cout << "4. Add '!' in front of every 'c'\n";
        cout << "5. Put the phrase into quotation marks\n";
        cout << "6. Add a '.' at the end\n";
        cout << "7. Count occurrences of a specific pattern\n";
        cout << "8. Count letters, numbers, and other characters\n";
        cout << "9. Toggle case of letters\n";
        cout << "10. Count uppercase and lowercase letters\n";
        cout << "11. Display current phrase\n";
        cout << "12. Reset to original phrase\n";
        cout << "13. Exit\n";
        cout << "Choose an option: ";
        int choice;
        cin >> choice;
        cin.ignore();

        if (choice == 13) {
            break;
        }

        switch (choice) {
            case 1:
                modifiedPhrase = replaceFirstWithLast(modifiedPhrase);
                cout << "After replacing first word with last: " << modifiedPhrase << endl;
                break;
            case 2:
                modifiedPhrase = addPercentage(modifiedPhrase);
                cout << "After adding % into every space: " << modifiedPhrase << endl;
                break;
            case 3:
                modifiedPhrase = replaceAWithAt(modifiedPhrase);
                cout << "After replacing 'a' with '@': " << modifiedPhrase << endl;
                break;
            case 4:
                modifiedPhrase = addExclamationBeforeC(modifiedPhrase);
                cout << "After adding '!' in front of every 'c': " << modifiedPhrase << endl;
                break;
            case 5:
                modifiedPhrase = putInQuotationMarks(modifiedPhrase);
                cout << "After putting the phrase into quotation marks: " << modifiedPhrase << endl;
                break;
            case 6:
                modifiedPhrase = addDot(modifiedPhrase);
                cout << "After adding a '.' at the end: " << modifiedPhrase << endl;
                break;
            case 7: {
                string pattern;
                cout << "Enter a pattern to count occurrences: ";
                cin >> pattern;
                auto [occurrences, indexes] = countOccurrences(modifiedPhrase, pattern);
                cout << "Number of occurrences of '" << pattern << "': " << occurrences << endl;
                cout << "Indexes of occurrences: ";
                for (size_t i = 0; i < indexes.size(); ++i) {
                    cout << indexes[i];
                    if (i != indexes.size() - 1) {
                        cout << ", ";
                    }
                }
                cout << endl;
                break;
            }
            case 8: {
                auto [letters, numbers, others] = countCharacterTypes(modifiedPhrase);
                cout << "Number of letters: " << letters << endl;
                cout << "Number of numbers: " << numbers << endl;
                cout << "Number of other characters: " << others << endl;
                break;
            }
            case 9:
                modifiedPhrase = toggleCase(modifiedPhrase);
                cout << "After toggling the case: " << modifiedPhrase << endl;
                break;
            case 10: {
                auto [upperCase, lowerCase] = countUpperLowerCase(modifiedPhrase);
                cout << "Number of uppercase letters: " << upperCase << endl;
                cout << "Number of lowercase letters: " << lowerCase << endl;
                break;
            }
            case 11:
                displayCurrentPhrase(modifiedPhrase);
                break;
            case 12:
                modifiedPhrase = originalPhrase;
                cout << "Phrase has been reset to the original: " << modifiedPhrase << endl;
                break;
            default:
                cout << "Invalid option. Please choose again.\n";
        }
    }

    return 0;
}
//Pobierz napis dwuczłonowy.
// Zamień pierwszy człon z drugim.
// Policz małe litery.
// Sprawdź czy w podanym napisie występuje kombinacja "ab".
// Wyniki zaprezentuj w konsoli.