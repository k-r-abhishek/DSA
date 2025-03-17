#include <bits/stdc++.h>
using namespace std;

// ✅ Approach 1: Basic Method (Iterate from 2 to n-1)
bool isPrimeBasic(int n) {
    if (n < 2) return false; // Prime numbers start from 2
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false; // Found a divisor, not prime
    }
    return true;
}

// ✅ Approach 2: Optimized (Iterate from 2 to sqrt(n))
bool isPrimeOptimized(int n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true; // 2 and 3 are prime numbers
    if (n % 2 == 0 || n % 3 == 0) return false; // Eliminate multiples of 2 and 3

    // Check divisibility up to sqrt(n) using step of 6 (prime pattern)
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

// ✅ Approach 3: Recursive Method
bool isPrimeRecursive(int n, int i = 2) {
    if (n < 2) return false;
    if (i * i > n) return true; // If no factors found, it's prime
    if (n % i == 0) return false; // Found a divisor
    return isPrimeRecursive(n, i + 1); // Check next number
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Checking prime using all approaches
    cout << "Using Basic Method: " << (isPrimeBasic(n) ? "Prime" : "Not Prime") << endl;
    cout << "Using Optimized Method: " << (isPrimeOptimized(n) ? "Prime" : "Not Prime") << endl;
    cout << "Using Recursion: " << (isPrimeRecursive(n) ? "Prime" : "Not Prime") << endl;

    return 0;
}