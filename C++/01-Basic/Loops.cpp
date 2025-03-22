/*
    Concepts Covered
    1 For Loop – Basic iteration & step-size increments
    2 While Loop – Runs until a condition is false
    3 Do-While Loop – Executes at least once
    4 Nested Loops – Used for a multiplication table
    5 Break Statement – Stops loop execution early
    6 Continue Statement – Skips an iteration
    7 For Loop with Different Step Sizes – Shows how to control increments
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    // 1 Basic For Loop
    cout << "For Loop (Counting from 1 to 5): ";
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    // 2 While Loop Example
    int n;
    cout << "Enter a number for While Loop countdown: ";
    cin >> n;

    cout << "While Loop (Counting down from " << n << "): ";
    while (n > 0) {
        cout << n << " ";
        n--;
    }
    cout << endl;

    // 3 Do-While Loop Example (Runs at least once)
    int num;
    cout << "Enter a number for Do-While Loop test: ";
    cin >> num;

    cout << "Do-While Loop (Prints at least once even if condition is false): ";
    do {
        cout << num << " ";
        num--;
    } while (num > 0);
    cout << endl;

    // 4 For Loop with Step Size (Skipping numbers)
    cout << "For Loop (Printing even numbers from 2 to 10): ";
    for (int i = 2; i <= 10; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    // 5 Nested Loops (Multiplication Table)
    cout << "Multiplication Table (1 to 5): " << endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++) {
            cout << i * j << "\t";
        }
        cout << endl;
    }

    // 6 Using Break (Stops loop early)
    cout << "Using Break (Stops at 5): ";
    for (int i = 1; i <= 10; i++)
    {
        if (i == 6) break;
        cout << i << " ";
    }
    cout << endl;

    // 7 Using Continue (Skips a number)
    cout << "Using Continue (Skipping 5): ";
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5) continue;
        cout << i << " ";
    }
    cout << endl;

    // Using break to stop at a certain number
    cout << "Break Example: Stop when number is 5" << endl;
    
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5) {
            cout << "Loop breaks here at: " << i << endl;
            break;  // Loop stops when i == 5
        }
        cout << i << " ";
    }
    
    cout << "\nLoop terminated early due to break.\n";
    
    return 0;
}