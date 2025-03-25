#include <bits/stdc++.h>
using namespace std;

// Function to check even or odd using modulus operator
void checkEvenOddModulus(int num) {
    if (num % 2 == 0)
        cout << num << " is Even (using modulus % method)." << endl;
    else
        cout << num << " is Odd (using modulus % method)." << endl;
}

// Function to check even or odd using bitwise AND `&` operator
void checkEvenOddBitwise(int num) {
    if ((num & 1) == 0)  // If last bit is 0, it's even; if 1, it's odd
        cout << num << " is Even (using bitwise & method)." << endl;
    else
        cout << num << " is Odd (using bitwise & method)." << endl;
}

int main() {
    int number;
    
    // Taking input from user
    cout << "Enter a number: ";
    cin >> number;

    // Function calls
    checkEvenOddModulus(number);  // Checking with modulus method
    checkEvenOddBitwise(number);  // Checking with bitwise method

    return 0;
}
