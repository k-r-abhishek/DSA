#include <bits/stdc++.h>
using namespace std;

void checkCharacterManual(char ch) {
    // ✅ Approach 1: Using Manual Condition Checking
    if (ch >= 'a' && ch <= 'z') {
        cout << "Lowercase" << endl;
    } 
    else if (ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase" << endl;
    } 
    else if (ch >= '0' && ch <= '9') {
        cout << "Numeric" << endl;
    } 
    else {
        cout << "Special character" << endl;
    }
}

void checkCharacterUsingFunctions(char ch) {
    // ✅ Approach 2: Using Built-in Functions (islower, isupper, isdigit)
    if (islower(ch)) {
        cout << "Lowercase" << endl;
    } 
    else if (isupper(ch)) {
        cout << "Uppercase" << endl;
    } 
    else if (isdigit(ch)) {
        cout << "Numeric" << endl;
    } 
    else {
        cout << "Special character" << endl;
    }
}

int main() {
    char ch;
    
    // Prompt the user for input
    cout << "Enter a character: ";
    cin >> ch;

    cout << "Checking using manual conditions: ";
    checkCharacterManual(ch);

    cout << "Checking using built-in functions: ";
    checkCharacterUsingFunctions(ch);

    return 0;
}