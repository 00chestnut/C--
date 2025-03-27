#include <iostream>
using namespace std;

int main() {

    // 1. Basic Pointer Usage
    int a = 10;   // Declare an integer variable
    int* ptr = &a;  // Pointer to int, storing the address of a
    cout << "1. Basic Pointer Usage:" << endl;
    cout << "Value of a: " << a << endl;            // Output value of a
    cout << "Address of a: " << &a << endl;         // Output address of a
    cout << "Pointer ptr holds address: " << ptr << endl;   // Output address stored in pointer ptr
    cout << "Dereferencing ptr: " << *ptr << endl << endl; // Dereference ptr to get the value at the address it points to

    // 2. Pointer Dereferencing
    cout << "2. Pointer Dereferencing:" << endl;
    *ptr = 20;  // Dereference ptr to assign a new value to a through the pointer
    cout << "Value of a after dereferencing ptr and changing it: " << a << endl << endl;

    // 3. Pointer Arithmetic
    cout << "3. Pointer Arithmetic:" << endl;
    int arr[] = {1, 2, 3, 4, 5};  // Declare an array
    int* ptrArr = arr;  // Pointer to the first element of the array
    cout << "Array elements accessed via pointer arithmetic:" << endl;
    cout << "ptrArr points to: " << *ptrArr << endl;  // First element (1)
    ptrArr++;  // Move to the next element
    cout << "After incrementing ptrArr, it points to: " << *ptrArr << endl;  // Second element (2)
    ptrArr += 2;  // Move forward by 2 positions
    cout << "After incrementing ptrArr by 2, it points to: " << *ptrArr << endl << endl;  // Fourth element (4)

    // 4. Pointer to Array
    cout << "4. Pointer to Array:" << endl;
    int* ptrToArray = arr;  // Pointer to the first element of the array
    cout << "Array elements using pointer to array:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Element " << i + 1 << " = " << *(ptrToArray + i) << endl;  // Access elements via pointer arithmetic
    }
    cout << endl;

    // 5. Pointer to Pointer
    cout << "5. Pointer to Pointer:" << endl;
    int x = 30;
    int* ptrX = &x;   // Pointer to int x
    int** ptrPtr = &ptrX;  // Pointer to pointer ptrX
    cout << "Value of x: " << x << endl;
    cout << "Pointer ptrX holds address of x: " << ptrX << endl;
    cout << "Pointer-to-pointer ptrPtr holds address of ptrX: " << ptrPtr << endl;
    cout << "Dereferencing ptrPtr gives address of x: " << *ptrPtr << endl;  // Dereferencing ptrPtr gives ptrX
    cout << "Dereferencing ptrPtr twice gives value of x: " << **ptrPtr << endl << endl;  // Dereferencing twice to get value of x

    // 6. Null Pointer
    cout << "6. Null Pointer:" << endl;
    int* nullPtr = nullptr;   // Declare a null pointer
    if (nullPtr == nullptr) {
        cout << "nullPtr is a null pointer, it doesn't point to any address." << endl;
    }
    cout << endl;

    // 7. Pointer to a Function
    cout << "7. Pointer to a Function:" << endl;
    // Function declaration
    int add(int a, int b) {
        return a + b;
    }
    // Pointer to function
    int (*funcPtr)(int, int) = &add;  // Assign the address of the function 'add' to funcPtr
    cout << "Using pointer to function, add(3, 4) = " << funcPtr(3, 4) << endl;  // Call the function via pointer
    cout << endl;

    // 8. Dynamic Memory Allocation (new and delete)
    cout << "8. Dynamic Memory Allocation (new and delete):" << endl;
    int* dynPtr = new int(100);  // Dynamically allocate memory for an integer and assign it the value 100
    cout << "Dynamically allocated memory points to value: " << *dynPtr << endl;
    delete dynPtr;  // Free the dynamically allocated memory
    cout << "Memory freed." << endl << endl;

    // 9. Const Pointer and Pointer to Const
    cout << "9. Const Pointer and Pointer to Const:" << endl;
    int y = 50;
    const int* ptrToConst = &y;  // Pointer to a constant integer, we cannot modify the value of y through this pointer
    cout << "Value of y (through ptrToConst): " << *ptrToConst << endl;
    // *ptrToConst = 60;  // Error! Cannot modify the value of y through ptrToConst
    cout << endl;

    int* const constPtr = &y;  // Constant pointer, we cannot change the pointer to point to another address
    cout << "Value of y (through constPtr): " << *constPtr << endl;
    // constPtr = nullptr;  // Error! Cannot change the address stored in constPtr
    cout << endl;

    // 10. Array of Pointers
    cout << "10. Array of Pointers:" << endl;
    int z1 = 1, z2 = 2, z3 = 3;
    int* arrPtr[] = {&z1, &z2, &z3};  // Array of pointers to integers
    cout << "Array of pointers pointing to the values:" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "arrPtr[" << i << "] points to value: " << *arrPtr[i] << endl;  // Dereference each pointer
    }

    return 0;
}
