#include <iostream>
#define PI 3.14159  // Define a constant
#define SQUARE(x) ((x) * (x))  // Define a macro function

int main() {
    std::cout << "PI: " << PI << std::endl;
    std::cout << "Square of 5: " << SQUARE(5) << std::endl;  // Expands to (5 * 5)
    return 0;
}
