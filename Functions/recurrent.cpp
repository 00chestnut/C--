#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n) {
    // Base case: if n is 0, return 1
    if (n == 0) {
        return 1;
    }
    // Recursive case: n * factorial of (n-1)
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num = 5;

    // Calling the recursive factorial function
    int result = factorial(num);

    cout << "Factorial of " << num << " is: " << result << endl;

    return 0;
}
