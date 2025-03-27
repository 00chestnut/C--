#include <iostream>

// Global function
void globalFunction() {
    std::cout << "This is a global function!" << std::endl;
}

int main() {
    // Local function (C++ doesn't support nested functions directly, so using lambda)
    auto localFunction = []() {
        std::cout << "This is a local function (lambda)!" << std::endl;
    };

    // Calling the global function
    globalFunction();

    // Calling the local function
    localFunction();

    return 0;
}
