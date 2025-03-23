#include <bits/stdc++.h>
using namespace std;

// Function to print a square star pattern
void squareStarPattern(int n) {
    cout << "Square Star Pattern:" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print a square number pattern (row-wise constant)
void squareNumberPatternRow(int n) {
    cout << "Square Number Pattern (Row-wise constant):" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << i; // Printing row number
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print a square number pattern (column-wise constant)
void squareNumberPatternCol(int n) {
    cout << "Square Number Pattern (Column-wise constant):" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << j; // Printing column number
        }
        cout << endl;
    }
    cout << endl;
}

// Function to print a checkerboard pattern
void checkerboardPattern(int n) {
    cout << "Checkerboard Pattern:" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if ((i + j) % 2 == 0)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the size of the square pattern: ";
    cin >> n;

    squareStarPattern(n);
    squareNumberPatternRow(n);
    squareNumberPatternCol(n);
    checkerboardPattern(n);

    return 0;
}