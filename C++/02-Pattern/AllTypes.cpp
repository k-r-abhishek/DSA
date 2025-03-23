#include <bits/stdc++.h>
using namespace std;

void printSquarePattern(), printNumberSquare(), printAnotherNumberSquare();
void printInvertedNumberSquare(), printCountingSquare(), printTrianglePattern();
void printCountingTriangle(), printInvertedCountingTriangle(), printAlphabeticSquare();
void printAlphabeticTriangle(), printInvertedAlphabeticTriangle();
void printRightAngleInvertedCharTriangle(), printRightAngleReverseCharTriangle();
void printNumberPyramid(), printDabanggPattern();

int main() {
    printSquarePattern();
    printNumberSquare();
    printAnotherNumberSquare();
    printInvertedNumberSquare();
    printCountingSquare();
    printTrianglePattern();
    printCountingTriangle();
    printInvertedCountingTriangle();
    printAlphabeticSquare();
    printAlphabeticTriangle();
    printInvertedAlphabeticTriangle();
    printRightAngleInvertedCharTriangle();
    printRightAngleReverseCharTriangle();
    printNumberPyramid();
    printDabanggPattern();
    return 0;
}

void printSquarePattern() {
    cout << "\nSquare Pattern" << endl;
    for (int i = 0; i < 5; i++, cout << endl)
        for (int j = 0; j < 5; j++) cout << "* ";
}

void printNumberSquare() {
    cout << "\nNumber Square Pattern" << endl;
    for (int i = 1; i <= 5; i++, cout << endl)
        for (int j = 1; j <= 5; j++) cout << i << "  ";
}

void printAnotherNumberSquare() {
    cout << "\nAnother Number Square Pattern" << endl;
    for (int i = 1; i <= 5; i++, cout << endl)
        for (int j = 1; j <= 5; j++) cout << j << "  ";
}

void printInvertedNumberSquare() {
    cout << "\nInverted Number Square Pattern" << endl;
    for (int i = 1; i <= 5; i++, cout << endl)
        for (int j = 5; j > 0; j--) cout << j << "  ";
}

void printCountingSquare() {
    cout << "\nCounting Square Pattern" << endl;
    int counter = 1;
    for (int i = 0; i < 5; i++, cout << endl)
        for (int j = 0; j < 5; j++) cout << counter++ << "  ";
}

void printTrianglePattern() {
    cout << "\n90 Degree Triangle Pattern" << endl;
    for (int i = 1; i <= 5; i++, cout << endl)
        for (int j = 1; j <= i; j++) cout << "* ";
}

void printCountingTriangle() {
    cout << "\n90 Degree Counting Triangle Pattern" << endl;
    for (int i = 1; i <= 5; i++, cout << endl)
        for (int j = i; j < 2 * i; j++) cout << j << " ";
}

void printInvertedCountingTriangle() {
    cout << "\n90 Degree Inverted Counting Triangle Pattern" << endl;
    for (int i = 1; i <= 5; i++, cout << endl)
        for (int j = i; j > 0; j--) cout << j << " ";
}

void printAlphabeticSquare() {
    cout << "\nAlphabetic Square Pattern" << endl;
    char ch = 'A';
    for (int i = 0; i < 5; i++, ch++, cout << endl)
        for (int j = 0; j < 5; j++) cout << ch << " ";
}

void printAlphabeticTriangle() {
    cout << "\nAlphabetic Triangle Pattern" << endl;
    char ch = 'A';
    for (int i = 1; i <= 5; i++, ch++, cout << endl)
        for (int j = 0; j < i; j++) cout << ch << " ";
}

void printInvertedAlphabeticTriangle() {
    cout << "\nInverted Alphabetic Triangle Pattern" << endl;
    for (int i = 5; i > 0; i--, cout << endl)
        for (char ch = 'A'; ch < 'A' + i; ch++) cout << ch << " ";
}

void printRightAngleInvertedCharTriangle() {
    cout << "\nRight Angle Inverted Character Triangle Pattern" << endl;
    for (int i = 0; i < 5; i++, cout << endl)
        for (char ch = 'A' + i; ch >= 'A'; ch--) cout << ch << " ";
}

void printRightAngleReverseCharTriangle() {
    cout << "\nRight Angle Reverse Character Triangle Pattern" << endl;
    for (int i = 0; i < 5; i++, cout << endl)
        for (char ch = 'A'; ch <= 'A' + i; ch++) cout << ch << " ";
}

void printNumberPyramid() {
    cout << "\nNumber Pyramid Pattern" << endl;
    for (int i = 1; i <= 5; i++, cout << endl)
        for (int j = 1; j <= i; j++) cout << j << " ";
}

void printDabanggPattern() {
    cout << "\nDabangg Pattern" << endl;
    for (int i = 5; i >= 1; i--, cout << endl)
        for (int j = 1; j <= i; j++) cout << j << " ";
}