#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 4, b = 7;

    cout << "Bitwise Operators in C++" << endl;
    cout << "------------------------" << endl;

    // Bitwise AND
    cout << "Bitwise AND (a & b)  : " << (a & b) << "  // Both bits must be 1" << endl;

    // Bitwise OR
    cout << "Bitwise OR  (a | b)  : " << (a | b) << "  // At least one bit must be 1" << endl;

    // Bitwise NOT
    cout << "Bitwise NOT (~a)     : " << (~a) << "  // Inverts all bits (2's complement representation)" << endl;

    // Bitwise XOR
    cout << "Bitwise XOR (a ^ b)  : " << (a ^ b) << "  // 1 if bits are different, 0 if same" << endl;

    cout << "\nBitwise Shift Operations" << endl;
    cout << "------------------------" << endl;

    // Right Shift
    cout << "17 >> 1 (Right Shift by 1)  : " << (17 >> 1) << "  // Divides by 2" << endl;
    cout << "17 >> 2 (Right Shift by 2)  : " << (17 >> 2) << "  // Divides by 4" << endl;

    // Left Shift
    cout << "19 << 1 (Left Shift by 1)   : " << (19 << 1) << "  // Multiplies by 2" << endl;
    cout << "21 << 2 (Left Shift by 2)   : " << (21 << 2) << "  // Multiplies by 4" << endl;

    cout << "\nBitwise Operations with Custom Inputs" << endl;
    cout << "------------------------------------" << endl;

    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Bitwise AND (x & y) : " << (x & y) << endl;
    cout << "Bitwise OR  (x | y) : " << (x | y) << endl;
    cout << "Bitwise XOR (x ^ y) : " << (x ^ y) << endl;
    cout << "Bitwise NOT (~x)    : " << (~x) << endl;
    cout << "Bitwise NOT (~y)    : " << (~y) << endl;
    cout << "x >> 1 (Right Shift by 1) : " << (x >> 1) << endl;
    cout << "x << 1 (Left Shift by 1)  : " << (x << 1) << endl;

    cout << "\nIncrement and Decrement Operators" << endl;
    cout << "---------------------------------" << endl;

    int i = 7;

    cout << "Initial Value of i : " << i << endl;
    cout << "Pre-increment  (++i)  : " << (++i) << "  // Increments first, then prints" << endl;
    cout << "Post-increment (i++)  : " << (i++) << "  // Prints first, then increments" << endl;
    cout << "Post-decrement (i--)  : " << (i--) << "  // Prints first, then decrements" << endl;
    cout << "Pre-decrement  (--i)  : " << (--i) << "  // Decrements first, then prints" << endl;

    return 0;
}