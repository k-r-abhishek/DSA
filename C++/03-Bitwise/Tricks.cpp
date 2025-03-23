#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Bitwise Tricks and Applications:\n";

    // 1. Checking if a number is even or odd
    int x = 7;
    cout << x << " is " << ((x & 1) ? "Odd" : "Even") << endl;

    // 2. Multiplying and Dividing by 2 using bitwise shifts
    int num = 10;
    cout << num << " * 2 = " << (num << 1) << endl;  // Left shift (multiply by 2)
    cout << num << " / 2 = " << (num >> 1) << endl;  // Right shift (divide by 2)

    // 3. Checking if a number is a power of 2
    int n = 8;
    bool isPowerOf2 = (n > 0) && ((n & (n - 1)) == 0);
    cout << n << " is " << (isPowerOf2 ? "a Power of 2" : "NOT a Power of 2") << endl;

    // 4. Swapping two numbers using XOR
    int p = 5, q = 9;
    cout << "\nBefore swapping: p = " << p << ", q = " << q << endl;
    p = p ^ q;
    q = p ^ q;
    p = p ^ q;
    cout << "After swapping: p = " << p << ", q = " << q << endl;

    return 0;
}