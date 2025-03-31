#include <iostream>
using namespace std;
// this shit does NOT Work
int sequence(int n) { 
    if (n == 0 || n == 1) {
        return 1;  
    } else {
        return n * sequence(n=(sequence(n - 1) + sequence(n -2))/2);  
    }
}

int main() {
    for (int n = 2; n <= 10; n++) { 
        cout << n << "! = " << sequence(n) << endl;
    }
    return 0;
}