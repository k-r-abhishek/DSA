#include <iostream>
using namespace std;

// Function to find the nth Fibonacci number using iteration
int fibonacci(int n) {
    if (n <= 1) 
        return n; // Base case: fib(0) = 0, fib(1) = 1

    int a = 0, b = 1, nextTerm;

    for (int i = 2; i <= n; i++) {
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    
    return b; // The nth Fibonacci number
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;

    return 0;
}