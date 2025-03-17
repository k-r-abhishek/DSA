/*
    🔥 C++ Program Demonstrating All Conditional Statements 🔥

    ✅ Covers All Key Concepts:
    1️⃣ **Basic Conditional Statements**
        - if, if-else, if-else if-else
        - Nested if conditions
    2️⃣ **Logical Operators Usage**
        - AND (&&), OR (||), NOT (!)
        - Combining multiple conditions in different ways
    3️⃣ **Switch-Case Implementation**
        - Handling integer cases
        - Handling character cases
        - Using default case for unmatched values
    4️⃣ **Ternary Operator**
        - Basic conditional assignment
        - Chained ternary for multiple conditions
    5️⃣ **Character Classification**
        - Checking uppercase (`isupper()`)
        - Checking lowercase (`islower()`)
        - Checking digits (`isdigit()`)
    6️⃣ **Loop Control Statements**
        - Using `break` to exit loops early
        - Using `continue` to skip iterations
    7️⃣ **goto Statement (Rarely Used)**
        - Demonstrating labeled jumps
*/

#include <iostream>
#include <cctype>  // For isupper(), islower(), isdigit()
using namespace std;

int main() {
    int a = 10, b = 5, x = -1, y = 0, z = 123;
    char ch = 'a';
    
    // 1️⃣ Simple if condition
    if (a > b) {
        cout << "a is greater than b\n";
    }

    // 2️⃣ if-else condition
    if (x >= 0) {
        cout << "x is non-negative\n";
    } else {
        cout << "x is negative\n";
    }

    // 3️⃣ if-else if-else ladder
    if (y > 0) {
        cout << "y is positive\n";
    } else if (y < 0) {
        cout << "y is negative\n";
    } else {
        cout << "y is zero\n";
    }

    // 4️⃣ Nested if condition
    if (a > 0) {
        if (a % 2 == 0) {
            cout << "a is positive and even\n";
        } else {
            cout << "a is positive but odd\n";
        }
    }

    // 5️⃣ Switch case (integer case)
    int num = 2;
    switch (num) {
        case 1:
            cout << "Number is One\n";
            break;
        case 2:
            cout << "Number is Two\n";
            break;
        default:
            cout << "Number is neither One nor Two\n";
    }

    // 6️⃣ Switch case (character case)
    switch (ch) {
        case 'A':
        case 'a':
            cout << "Character is A or a\n";
            break;
        case 'B':
            cout << "Character is B\n";
            break;
        default:
            cout << "Character is something else\n";
    }

    // 7️⃣ Ternary operator example
    string evenOdd = (z % 2 == 0) ? "Even" : "Odd";
    cout << "z is " << evenOdd << "\n";

    // 8️⃣ Chained Ternary Operator
    string category = (z > 0) ? "Positive" : (z == 0) ? "Zero" : "Negative";
    cout << "z is " << category << "\n";

    // 9️⃣ Logical Operators (&&, ||, !)
    bool cond1 = (a > 5 && b > 2);  // true
    bool cond2 = (x < 0 || y == 0); // true
    bool cond3 = !(a < b);          // true
    if (cond1 && cond2 && cond3) {
        cout << "All logical conditions are true\n";
    }

    // 🔟 Check Uppercase, Lowercase, and Digit
    char testChar = '5';
    if (isupper(testChar)) {
        cout << "It's an uppercase letter\n";
    } else if (islower(testChar)) {
        cout << "It's a lowercase letter\n";
    } else if (isdigit(testChar)) {
        cout << "It's a digit\n";
    } else {
        cout << "It's a special character\n";
    }

    // 1️⃣1️⃣ Use of break statement inside loop
    for (int i = 1; i <= 5; i++) {
        if (i == 3) break; // Exits the loop when i == 3
        cout << "Loop Iteration: " << i << "\n";
    }

    // 1️⃣2️⃣ Use of continue statement inside loop
    for (int i = 1; i <= 5; i++) {
        if (i == 3) continue; // Skips iteration when i == 3
        cout << "Loop Iteration (skip 3): " << i << "\n";
    }

    // 1️⃣3️⃣ Use of goto statement
    int value = -5;
    if (value < 0) {
        goto negativeLabel;
    }
    cout << "This will not be printed if value is negative\n";
    
negativeLabel:
    cout << "Value is negative\n";

    return 0;
}