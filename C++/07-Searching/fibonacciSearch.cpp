#include <iostream>
using namespace std;

// Fibonacci Search Algorithm
// Time Complexity: O(log N)
// Best for: Searching in large sorted arrays

int fibonacciSearch(int arr[], int n, int key) {
    int fib2 = 0; // (m-2)th Fibonacci number
    int fib1 = 1; // (m-1)th Fibonacci number
    int fib = fib2 + fib1; // mth Fibonacci number

    while (fib < n) {
        fib2 = fib1;
        fib1 = fib;
        fib = fib2 + fib1;
    }

    int offset = -1;
    while (fib > 1) {
        int i = min(offset + fib2, n - 1);
        if (arr[i] < key)
        {
            fib = fib1;
            fib1 = fib2;
            fib2 = fib - fib1;
            offset = i;
        }
        else if (arr[i] > key)
        {
            fib = fib2;
            fib1 = fib1 - fib2;
            fib2 = fib - fib1;
        }
        else
        {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {10, 22, 35, 40, 45, 50, 80, 82, 85, 90, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 85;
    int index = fibonacciSearch(arr, n, key);

    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found." << endl;
    return 0;
}