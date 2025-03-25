#include <bits/stdc++.h>
using namespace std;

// Function to calculate power using for loop
int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) { // Loop runs 'exponent' times
        result *= base; // Multiply base 'exponent' times
    }
    return result;
}

int main() {
    int a, b;
    
    // Input base and exponent
    cout << "Enter base (a): ";
    cin >> a;
    cout << "Enter exponent (b): ";
    cin >> b;

    // Function call to calculate power
    int ans = power(a, b);

    // Output result
    cout << a << " raised to the power " << b << " is: " << ans << endl;

    return 0;
}