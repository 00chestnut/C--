#include <iostream>

void wypiszLiczby(int n) {
    if (n > 0) {
        wypiszLiczby(n - 1);
        std::cout << n << " ";
    }
}

int main() {
    int n = 10; 
    wypiszLiczby(n);
    return 0;
}