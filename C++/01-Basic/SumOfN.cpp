#include <bits/stdc++.h>
using namespace std;

// ✅ Approach 1: Using a For Loop (Iterative)
int sumUsingLoop(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

// ✅ Approach 2: Using Formula (Efficient O(1) approach)
int sumUsingFormula(int n) {
    return (n * (n + 1)) / 2;
}

// ✅ Approach 3: Using Recursion
int sumUsingRecursion(int n) {
    if (n == 0) return 0; // Base case
    return n + sumUsingRecursion(n - 1); // Recursive step
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Calling all methods and displaying results
    cout << "Sum using loop: " << sumUsingLoop(n) << endl;
    cout << "Sum using formula: " << sumUsingFormula(n) << endl;
    cout << "Sum using recursion: " << sumUsingRecursion(n) << endl;

    return 0;
}