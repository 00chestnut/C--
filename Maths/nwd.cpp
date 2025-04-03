#include <iostream>

// Function to calculate the GCD (NWD)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate the LCM (NWW)
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int a, b;
    
    // User input
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    
    // Calculate and display the GCD and LCM
    std::cout << "NWD (GCD) of " << a << " and " << b << " is: " << gcd(a, b) << std::endl;
    std::cout << "NWW (LCM) of " << a << " and " << b << " is: " << lcm(a, b) << std::endl;

    return 0;
}
