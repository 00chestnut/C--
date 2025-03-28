#include <iostream>

#define DEBUG  // Define DEBUG

#undef DEBUG  // Undefine DEBUG

int main() {
    #ifdef DEBUG
        std::cout << "Debug mode is ON" << std::endl;
    #else
        std::cout << "Debug mode is OFF" << std::endl;
    #endif
    return 0;
}
