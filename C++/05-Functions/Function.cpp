#include <iostream>
using namespace std;

// 🔹 Function Declaration
void sayHello();                      // Function without arguments & return value
int add(int a, int b);                // Function with parameters and return value
void swapByValue(int x, int y);       // Call by Value (Does not change original values)
void swapByReference(int &x, int &y); // Call by Reference (Changes original values)
int factorial(int n);                 // Recursion Example
inline int multiply(int a, int b) { return a * b; } // Inline Function Example
int sum(int a, int b = 5);            // Function with Default Arguments
void staticExample();                 // Static Variable Example

// 🔹 Function Pointers Example
void greet() { cout << "Hello from Function Pointer!" << endl; }

int main() {
    cout << "📌 Function Examples in C++" << endl;

    // ✅ Function without arguments & return value
    sayHello();

    // ✅ Function with arguments & return value
    cout << "Sum of 3 and 4: " << add(3, 4) << endl;

    // ✅ Call by Value (Does not affect original values)
    int a = 10, b = 20;
    cout << "Before swap (by value): a = " << a << ", b = " << b << endl;
    swapByValue(a, b);
    cout << "After swap (by value): a = " << a << ", b = " << b << endl;

    // ✅ Call by Reference (Affects original values)
    cout << "Before swap (by reference): a = " << a << ", b = " << b << endl;
    swapByReference(a, b);
    cout << "After swap (by reference): a = " << a << ", b = " << b << endl;

    // ✅ Recursion Example (Factorial)
    cout << "Factorial of 5: " << factorial(5) << endl;

    // ✅ Inline Function Example
    cout << "Multiplication of 3 and 5: " << multiply(3, 5) << endl;

    // ✅ Default Arguments
    cout << "Sum with default argument (10 + 5): " << sum(10) << endl;
    cout << "Sum with both arguments (10 + 7): " << sum(10, 7) << endl;

    // ✅ Static Variable Example
    staticExample();
    staticExample();
    staticExample();

    // ✅ Function Pointer
    void (*ptr)() = greet; // Function Pointer Declaration
    ptr(); // Calling function using pointer

    // ✅ Lambda Function (Anonymous function)
    auto square = [](int num) { return num * num; };
    cout << "Square of 6 using Lambda: " << square(6) << endl;

    return 0;
}

// 🔹 Function Definitions

// ✅ Simple Function
void sayHello() {
    cout << "Hello, World!" << endl;
}

// ✅ Function with Parameters & Return Value
int add(int a, int b) {
    return a + b;
}

// ✅ Call by Value (Does not modify original values)
void swapByValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

// ✅ Call by Reference (Modifies original values)
void swapByReference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

// ✅ Recursion Example
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

// ✅ Function with Default Arguments
int sum(int a, int b) {
    return a + b;
}

// ✅ Static Variable in Function (Retains value between calls)
void staticExample() {
    static int count = 0; // Static variable (initialized only once)
    count++;
    cout << "Static count: " << count << endl;
}