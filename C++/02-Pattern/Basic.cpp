/*
    ✅ Basic Patterns Included:
    Solid Square
    Hollow Square
    Right-Angled Triangle
    Inverted Right-Angled Triangle
    Number Triangle
    Inverted Number Triangle
    Half Pyramid with Numbers
    Simple Pyramid
    Inverted Pyramid
    Floyd’s Triangle
*/

#include <bits/stdc++.h>
using namespace std;

// ✅ 1. Solid Square Pattern
void solidSquare(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// ✅ 2. Hollow Square Pattern
void hollowSquare(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

// ✅ 3. Right-Angled Triangle Pattern
void rightTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// ✅ 4. Inverted Right-Angled Triangle
void invertedTriangle(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// ✅ 5. Number Triangle Pattern
void numberTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

// ✅ 6. Inverted Number Triangle
void invertedNumberTriangle(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

// ✅ 7. Half Pyramid with Numbers
void halfPyramidNumbers(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// ✅ 8. Simple Pyramid Pattern
void simplePyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) 
            cout << " ";
        for (int j = 1; j <= (2 * i - 1); j++) 
            cout << "*";
        cout << endl;
    }
}

// ✅ 9. Inverted Pyramid Pattern
void invertedPyramid(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = i; j < n; j++) 
            cout << " ";
        for (int j = 1; j <= (2 * i - 1); j++) 
            cout << "*";
        cout << endl;
    }
}

// ✅ 10. Floyd’s Triangle
void floydsTriangle(int n) {
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num++ << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size (n): ";
    cin >> n;

    cout << "\nSolid Square Pattern:\n";
    solidSquare(n);

    cout << "\nHollow Square Pattern:\n";
    hollowSquare(n);

    cout << "\nRight-Angled Triangle:\n";
    rightTriangle(n);

    cout << "\nInverted Right-Angled Triangle:\n";
    invertedTriangle(n);

    cout << "\nNumber Triangle:\n";
    numberTriangle(n);

    cout << "\nInverted Number Triangle:\n";
    invertedNumberTriangle(n);

    cout << "\nHalf Pyramid with Numbers:\n";
    halfPyramidNumbers(n);

    cout << "\nSimple Pyramid Pattern:\n";
    simplePyramid(n);

    cout << "\nInverted Pyramid Pattern:\n";
    invertedPyramid(n);

    cout << "\nFloyd's Triangle:\n";
    floydsTriangle(n);

    return 0;
}