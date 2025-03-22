/*
    Covered Operators:
    ✔ Arithmetic (+, -, *, /, %, ++, --)
    ✔ Relational (==, !=, <, >, <=, >=)
    ✔ Logical (&&, ||, !)
    ✔ Bitwise (&, |, ^, ~, <<, >>)
    ✔ Assignment (=, +=, -=, *=, /=, %=, &=, |=, ^=, <<=, >>=)
    ✔ Ternary (?:)
    ✔ Comma (,)
    ✔ Sizeof (sizeof)
    ✔ Typecast ((type), static_cast, reinterpret_cast, const_cast)
    ✔ Pointer (*, &)
    ✔ Scope Resolution (::)
    ✔ Member Access (., ->)
    ✔ New/Delete (new, delete)
*/

#include <bits/stdc++.h>
using namespace std;

class Test {
public:
    int a;
    Test(int x) : a(x) {} // Constructor
    void show() { cout << "Value: " << a << endl; }
};

// Global variable for scope resolution demo
int globalVar = 100;

int main() {
    int x = 10, y = 3, z;
    float f = 10.5;

    // 🔹 Arithmetic Operators
    cout << "Arithmetic Operators:" << endl;
    cout << "x + y = " << x + y << endl;
    cout << "x - y = " << x - y << endl;
    cout << "x * y = " << x * y << endl;
    cout << "x / y = " << x / y << endl;  // Integer division
    cout << "x % y = " << x % y << endl;
    cout << "++x = " << ++x << ", --y = " << --y << endl;
    cout << "x++ = " << x++ << ", y-- = " << y-- << endl;
    // Now present value of x and y
    cout << "present value of x is: " << x << endl;
    cout << "present value of y is: " << y << endl;
    
    // 🔹 Relational Operators
    cout << "\nRelational Operators:" << endl;
    cout << "(x == y): " << (x == y) << endl;
    cout << "(x != y): " << (x != y) << endl;
    cout << "(x > y): " << (x > y) << endl;
    cout << "(x < y): " << (x < y) << endl;
    cout << "(x >= y): " << (x >= y) << endl;
    cout << "(x <= y): " << (x <= y) << endl;

    // 🔹 Logical Operators
    cout << "\nLogical Operators:" << endl;
    cout << "(x > 5 && y < 5): " << ((x > 5) && (y < 5)) << endl;
    cout << "(x < 5 || y < 5): " << ((x < 5) || (y < 5)) << endl;
    cout << "!(x > 5): " << !(x > 5) << endl;

    // 🔹 Bitwise Operators
    cout << "\nBitwise Operators:" << endl;
    cout << "(x & y) = " << (x & y) << endl;
    cout << "(x | y) = " << (x | y) << endl;
    cout << "(x ^ y) = " << (x ^ y) << endl;
    cout << "(~x) = " << (~x) << endl;
    cout << "(x << 1) = " << (x << 1) << endl;
    cout << "(x >> 1) = " << (x >> 1) << endl;

    // 🔹 Assignment Operators
    cout << "\nAssignment Operators:" << endl;
    z = x;
    z += y; cout << "z += y: " << z << endl;
    z -= y; cout << "z -= y: " << z << endl;
    z *= y; cout << "z *= y: " << z << endl;
    z /= y; cout << "z /= y: " << z << endl;
    z %= y; cout << "z %= y: " << z << endl;

    // 🔹 Ternary Operator
    cout << "\nTernary Operator:" << endl;
    int minVal = (x < y) ? x : y;
    cout << "Minimum value: " << minVal << endl;

    // 🔹 Comma Operator
    cout << "\nComma Operator:" << endl;
    int result = (x = 5, y = 10, x + y);
    cout << "Result of comma operator: " << result << endl;

    // 🔹 Sizeof Operator
    cout << "\nSizeof Operator:" << endl;
    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of float: " << sizeof(float) << endl;
    cout << "Size of char: " << sizeof(char) << endl;
    
    // 🔹 Typecast Operator
    cout << "\nTypecast Operator:" << endl;
    cout << "Explicit cast (float to int): " << (int)f << endl;
    cout << "Using static_cast: " << static_cast<int>(f) << endl;

    // 🔹 Pointer Operators
    cout << "\nPointer Operators:" << endl;
    int* ptr = &x;
    cout << "Address of x: " << ptr << endl;
    cout << "Value of x using pointer: " << *ptr << endl;

    // 🔹 Scope Resolution Operator
    cout << "\nScope Resolution Operator:" << endl;
    int globalVar = 50;  // Local variable
    cout << "Local globalVar: " << globalVar << endl;
    cout << "Global globalVar: " << ::globalVar << endl;

    // 🔹 Member Access Operators
    cout << "\nMember Access Operators:" << endl;
    Test obj(42);
    obj.show();
    Test* objPtr = &obj;
    objPtr->show();

    // 🔹 New/Delete Operators
    cout << "\nNew/Delete Operators:" << endl;
    int* heapVar = new int(99);
    cout << "Dynamically allocated value: " << *heapVar << endl;
    delete heapVar;

    return 0;
}