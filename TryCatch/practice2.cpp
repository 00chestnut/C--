#include <iostream>
#include <exception>
using namespace std;

class tooBigNumber : public exception
{
public:
    const char *what() const noexcept override
    {
        return "Posrało cie i podałeś liczbę większą od 100";
    }
};
int main() {
    int num;

    cout << "Give me a number: ";
    cin >> num;

    try {
        if (num < 0)
            throw -3;
        if (num % 5 != 0)
            throw logic_error("Number must be divisible by 5!!!"); 
        if (num > 100)
            throw tooBigNumber();
        cout << "all good" << endl;
    }
    catch (int) { 
        cout << "Negative numbers are not allowed" << endl;
    }
    catch (logic_error &e) {
        cout << e.what();
    }
     catch (tooBigNumber &e) {
        cout << e.what();
    }

    return 0;
}
// Exercise: Validate a Number for a Contest Entry
// Write a program that:

// Asks the user to enter an integer.

// If the number is less than 0, throw an int — say: "Negative number not allowed".

// If the number is not divisible by 5, throw a logic_error — say: "Number must be divisible by 5".

// If the number is greater than 100, throw a custom exception class derived from std::exception — say: "Too large for the contest".

// If the number is valid, print: "Entry accepted: [number]".

// 💡 Example output:
// Input: -3
// Output: Negative number not allowed

// Input: 7
// Output: Number must be divisible by 5

// Input: 123
// Output: Too large for the contest

// Input: 50
// Output: Entry accepted: 50