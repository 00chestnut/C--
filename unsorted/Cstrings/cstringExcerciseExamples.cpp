#include <iostream>
#include <cstring>
using namespace std;

// Function to ask for car information
void askForCarInfo()
{
    char brand[30], model[30], year[30];

    cout << "Enter the brand of the car: ";
    cin.getline(brand, 30);

    cout << "Enter the model of the car: ";
    cin.getline(model, 30);

    cout << "Enter the production year of the car: ";
    cin.getline(year, 30);

    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Production Year: " << year << endl;
}

// Function to concatenate strings
void concatenateStrings()
{
    char string1[30], string2[30], string3[30];

    cout << "Enter first string: ";
    cin.getline(string1, 30);

    cout << "Enter second string: ";
    cin.getline(string2, 30);

    cout << "Enter third string: ";
    cin.getline(string3, 30);

    strcat(string1, " ");
    strcat(string1, string2);
    strcat(string1, " ");
    strcat(string1, string3);

    cout << "Concatenated string: " << string1 << endl;
}

// Function to compare strings
void compareStrings()
{
    char text1[30], text2[30];

    cout << "Enter first string: ";
    cin.getline(text1, 30);

    cout << "Enter second string: ";
    cin.getline(text2, 30);

    cout << "Are the strings identical? ";
    if (strcmp(text1, text2) == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

// Function to find substring
void findSubstring()
{
    char check1[30], check2[30];

    cout << "Enter substring to find: ";
    cin.getline(check1, 30);

    cout << "Enter string to search in: ";
    cin.getline(check2, 30);

    if (strstr(check2, check1) == nullptr)
    {
        cout << "\"" << check1 << "\" is not a substring of \"" << check2 << "\"" << endl;
    }
    else
    {
        cout << "The substring \"" << check1 << "\" is found in \"" << check2
             << "\" starting from position " << strstr(check2, check1) - check2 << endl;
    }
}

// Function to ask for a city name
void askForCityName()
{
    char cityName[30];

    cout << "Enter the name of the city: ";
    cin.getline(cityName, 30);
    cout << "City: " << cityName << endl;
}

// Function to modify strings
void modifyStrings()
{
    char replace1[30], replace2[30], replace3[30];

    cout << "Enter the original string: ";
    cin.getline(replace1, 30);

    cout << "Enter the substring to replace: ";
    cin.getline(replace2, 30);

    cout << "Enter the new substring: ";
    cin.getline(replace3, 30);

    char *pos = strstr(replace1, replace2);
    if (pos != nullptr)
    {
        strcpy(pos, replace3);
        cout << "Modified string: " << replace1 << endl;
    }
    else
    {
        cout << "\"" << replace2 << "\" not found in the original string." << endl;
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n*** MENU ***" << endl;
        cout << "1. Display car information" << endl;
        cout << "2. Concatenate strings and display result" << endl;
        cout << "3. Compare two strings for equality" << endl;
        cout << "4. Find substring in a string" << endl;
        cout << "5. Display the entered city name" << endl;
        cout << "6. Modify a string by replacing a substring" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        cin.ignore(); // Clear the input buffer

        switch (choice)
        {
        case 1:
            askForCarInfo();
            break;
        case 2:
            concatenateStrings();
            break;
        case 3:
            compareStrings();
            break;
        case 4:
            findSubstring();
            break;
        case 5:
            askForCityName();
            break;
        case 6:
            modifyStrings();
            break;
        case 0:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a number from the menu." << endl;
        }
    } while (choice != 0);

    return 0;
}
