#include <iostream>
using namespace std;

int sequence(int n) { 
    if (n == 1) {
        return 2;
    } else {
        return sequence(n - 1) * sequence(n - 1) - 100;
    }
}

int main() {
    for (int n = 2; n <= 20; n++) {
        cout << "!(" << n << ") = " << sequence(n) << endl;
    }
    return 0;
}