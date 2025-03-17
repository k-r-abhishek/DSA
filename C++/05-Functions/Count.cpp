#include <iostream>
using namespace std;

// Function to print count up to N
void printCount(int n) {
    cout << "Counting from 1 to " << n << ": ";
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    int n;

    // Taking user input
    cout << "Enter a number (N): ";
    cin >> n;

    // Function call to print count
    printCount(n);

    return 0;
}