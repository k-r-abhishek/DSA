#include <iostream>
using namespace std;

void printSquarePattern(int n) {
    cout << "Square Pattern:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

void printTrianglePattern(int n) {
    cout << "Right-Angled Triangle Pattern:\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

void printPyramidPattern(int n) {
    cout << "Pyramid Pattern:\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

void printInvertedPyramidPattern(int n) {
    cout << "Inverted Pyramid Pattern:\n";
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

void printHourglassPattern(int n) {
    cout << "Hourglass Pattern:\n";
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

void printNumericPyramid(int n) {
    cout << "Numeric Pyramid Pattern:\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        for (int j = i - 1; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void printDiamondWithNumbers(int n) {
    cout << "Diamond with Numbers Pattern:\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }
    cout << endl;
}

void printHollowDiamondStars(int n) {
    cout << "Hollow Diamond Star Pattern:\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1)
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
    cout << "Enter the size of the pattern: ";
    cin >> n;

    printSquarePattern(n);
    printTrianglePattern(n);
    printPyramidPattern(n);
    printInvertedPyramidPattern(n);
    printHourglassPattern(n);
    printNumericPyramid(n);
    printDiamondWithNumbers(n);
    printHollowDiamondStars(n);

    return 0;
}
