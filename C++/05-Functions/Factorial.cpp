#include <bits/stdc++.h>
using namespace std;

// Function to calculate factorial of a number iteratively
long long factorial(int num)
{
    long long fact = 1;
    for (int i = 2; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;

    // Taking input from user
    cout << "Enter a number to calculate factorial: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    }
    else
    {
        // Function call to calculate factorial
        long long result = factorial(n);

        // Display the result
        cout << "Factorial of " << n << " is: " << result << endl;
    }

    return 0;
}