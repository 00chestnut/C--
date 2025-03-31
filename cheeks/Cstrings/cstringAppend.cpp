#include <iostream>
#include <cstring>
using namespace std;

// Function to input strings from the user
void inputStrings(char initialString[], char replaceString[], char appendString[])
{
    cout << "Enter the initial string: ";
    cin.getline(initialString, 100);

    cout << "Enter the string to replace: ";
    cin.getline(replaceString, 100);

    cout << "Enter the string to append: ";
    cin.getline(appendString, 100);
}

// Function to replace a string in another string
void replaceSubstring(char initialString[], const char replaceString[], const char appendString[])
{
    // Find the position of the string to replace in the initial string
    char *replacePos = strstr(initialString, replaceString);

    // If the string to replace is found, replace it with the append string
    if (replacePos != nullptr)
    {
        // Calculate the length of the replacement string
        size_t replaceStringLength = strlen(replaceString);
        size_t appendStringLength = strlen(appendString);

        // Calculate the length of the resulting string
        size_t initialStringLength = strlen(initialString);
        size_t resultLength = initialStringLength + appendStringLength - replaceStringLength;

        // Create a buffer for the modified string
        char modifiedString[200]; // Ensure enough space for the modified string
        modifiedString[0] = '\0'; // Null-terminate the string

        // Copy the initial part of the string before the replacement
        strncat(modifiedString, initialString, replacePos - initialString);

        // Append the replacement string
        strncat(modifiedString, appendString, appendStringLength);

        // Append the remaining part of the initial string after the replaced string
        strncat(modifiedString, replacePos + replaceStringLength, initialStringLength - (replacePos - initialString) - replaceStringLength + 1);

        cout << "Modified string: " << modifiedString << endl;
    }
    else
    {
        cout << "String to replace not found in the initial string." << endl;
    }
}

int main()
{
    char initialString[100];
    char replaceString[100];
    char appendString[100];
    char choice;

    do
    {
        // Input strings from the user
        inputStrings(initialString, replaceString, appendString);

        // Replace the string in the initial string and output the result
        replaceSubstring(initialString, replaceString, appendString);

        cout << "Do you want to run the code again? (Y/N): ";
        cin >> choice;
        cin.ignore(); // Ignore newline character left in the input buffer

    } while (choice == 'Y' || choice == 'y');
    cout << "Goodbye!";
    return 0;
}
