#include <bits/stdc++.h>
using namespace std;

// Function prototypes
void invertedReverseSameNumberTriangle(int);
void invertedSameNumberTriangle(int);
void invertedContinuousNumberTriangle(int);
void invertedReverseContinuousNumberTriangle(int);
void rightAngledNumberTriangle(int);
void rightAngledStarTriangle(int);
void reverseRightAngledStarTriangle(int);
void pascalTriangle(int);

int main() {
    int height;
    cout << "Enter the height of the triangles: ";
    cin >> height;
    cout << endl;

    // Call all functions to display patterns
    invertedReverseSameNumberTriangle(height);
    invertedSameNumberTriangle(height);
    invertedContinuousNumberTriangle(height);
    invertedReverseContinuousNumberTriangle(height);
    rightAngledNumberTriangle(height);
    rightAngledStarTriangle(height);
    reverseRightAngledStarTriangle(height);
    pascalTriangle(height);

    return 0;
}

// Inverted & Reverse Same Number Triangle
void invertedReverseSameNumberTriangle(int height) {
    cout << "\nInverted & Reverse Same Number Triangle:\n";
    for (int i = 1, value = 1; i <= height; i++, value++) {
        for (int k = 1; k <= i; k++)
            cout << "  ";
        for (int j = height; j >= i; j--)
            cout << value << " ";
        cout << endl;
    }
    cout << endl;
}

// Inverted Same Number Triangle
void invertedSameNumberTriangle(int height) {
    cout << "\nInverted Same Number Triangle:\n";
    for (int i = 1, value = 1; i <= height; i++, value++) {
        for (int k = 1; k <= (height - i); k++)
            cout << "  ";
        for (int j = 1; j <= i; j++)
            cout << value << " ";
        cout << endl;
    }
    cout << endl;
}

// Inverted Continuous Number Triangle
void invertedContinuousNumberTriangle(int height) {
    cout << "\nInverted Continuous Number Triangle:\n";
    int value = 1;
    for (int i = 1; i <= height; i++) {
        for (int k = 1; k <= (height - i); k++)
            cout << "  ";
        for (int j = 1; j <= i; j++)
            cout << value++ << " ";
        cout << endl;
    }
    cout << endl;
}

// Inverted & Reverse Continuous Number Triangle
void invertedReverseContinuousNumberTriangle(int height) {
    cout << "\nInverted & Reverse Continuous Number Triangle:\n";
    for (int i = 1; i <= height; i++) {
        int value = 1;
        for (int k = 1; k <= i; k++)
            cout << "  ";
        for (int j = height; j >= i; j--)
            cout << value++ << " ";
        cout << endl;
    }
    cout << endl;
}

// Right-Angled Number Triangle
void rightAngledNumberTriangle(int height) {
    cout << "\nRight-Angled Number Triangle:\n";
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= i; j++)
            cout << j << " ";
        cout << endl;
    }
    cout << endl;
}

// Right-Angled Star Triangle
void rightAngledStarTriangle(int height) {
    cout << "\nRight-Angled Star Triangle:\n";
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }
    cout << endl;
}

// Reverse Right-Angled Star Triangle
void reverseRightAngledStarTriangle(int height) {
    cout << "\nReverse Right-Angled Star Triangle:\n";
    for (int i = height; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }
    cout << endl;
}

// Pascal's Triangle
void pascalTriangle(int height) {
    cout << "\nPascal's Triangle:\n";
    for (int line = 1; line <= height; line++) {
        int num = 1;
        for (int space = 1; space <= height - line; space++)
            cout << "  ";
        for (int i = 1; i <= line; i++) {
            cout << num << "   ";
            num = num * (line - i) / i;
        }
        cout << endl;
    }
    cout << endl;
}