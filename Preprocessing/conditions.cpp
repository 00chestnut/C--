#include <iostream>

#define VERSION 2

int main() {
    #if VERSION == 1
        std::cout << "Version 1" << std::endl;
    #elif VERSION == 2
        std::cout << "Version 2" << std::endl;
    #else
        std::cout << "Unknown Version" << std::endl;
    #endif
    return 0;
}
