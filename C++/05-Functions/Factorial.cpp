#include <iostream>
using namespace std;

// Function to calculate factorial of a number
long long factorial(int num) {
    long long fact = 1;
    for (int i = 2; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate nCr = n! / (r! * (n-r)!)
long long calculate_nCr(int n, int r) {
    if (r > n) return 0; // nCr is not defined for r > n
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;

    // Taking input from user
    cout << "Enter values for n and r (nCr): ";
    cin >> n >> r;

    // Function call to calculate nCr
    long long result = calculate_nCr(n, r);

    // Display the result
    cout << "The value of " << n << "C" << r << " is: " << result << endl;

    return 0;
}