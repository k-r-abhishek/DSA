#include <bits/stdc++.h>
using namespace std;

// ✅ Approach 1: Using a For Loop (Iterative)
int sumEvenUsingLoop(int n) {
    int sum = 0;
    for (int i = 2; i <= n; i += 2) { // Increment by 2 for even numbers
        sum += i;
    }
    return sum;
}

// ✅ Approach 2: Using Formula (Efficient O(1) approach)
// Sum of first k even numbers = k * (k + 1), where k = n / 2 (count of even numbers)
int sumEvenUsingFormula(int n) {
    int k = n / 2; // Number of even numbers up to n
    return k * (k + 1);
}

// ✅ Approach 3: Using Recursion
int sumEvenUsingRecursion(int n) {
    if (n <= 0) return 0; // Base case
    if (n % 2 != 0) return sumEvenUsingRecursion(n - 1); // If odd, ignore and move to even
    return n + sumEvenUsingRecursion(n - 2); // Recursive step for even numbers
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Calling all methods and displaying results
    cout << "Sum of even numbers using loop: " << sumEvenUsingLoop(n) << endl;
    cout << "Sum of even numbers using formula: " << sumEvenUsingFormula(n) << endl;
    cout << "Sum of even numbers using recursion: " << sumEvenUsingRecursion(n) << endl;

    return 0;
}