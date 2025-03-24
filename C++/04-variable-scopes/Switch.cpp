#include <iostream>
using namespace std;

int main() {
    int choice;
    
    cout << "----- Switch Case Examples -----" << endl;
    cout << "1. Basic Switch Case" << endl;
    cout << "2. Fall-through Behavior" << endl;
    cout << "3. Continue inside Loop with Switch" << endl;
    cout << "4. Nested Switch Case" << endl;
    cout << "5. Character Switch Case" << endl;
    cout << "6. Calculator using Switch" << endl;
    cout << "7. Days of the Week" << endl;
    cout << "Enter your choice (1-7): ";
    cin >> choice;

    switch (choice) {
        case 1: {
            // ✅ Basic Switch Case
            int num;
            cout << "Enter a number (1-3): ";
            cin >> num;
            switch (num) {
                case 1:
                    cout << "You selected One!" << endl;
                    break;
                case 2:
                    cout << "You selected Two!" << endl;
                    break;
                case 3:
                    cout << "You selected Three!" << endl;
                    break;
                default:
                    cout << "Invalid choice!" << endl;
            }
            break;
        }

        case 2: {
            // ✅ Fall-through Behavior (No break)
            int num = 2;
            cout << "Example of Fall-through:" << endl;
            switch (num) {
                case 1:
                    cout << "Case 1" << endl;
                case 2:
                    cout << "Case 2" << endl;
                case 3:
                    cout << "Case 3" << endl;
                default:
                    cout << "Default Case" << endl;
            }
            break;
        }

        case 3: {
            // ✅ Continue inside Loop with Switch
            cout << "Continue inside loop with switch:" << endl;
            for (int i = 1; i <= 5; i++) {
                switch (i) {
                    case 2:
                    case 4:
                        cout << "Skipping " << i << endl;
                        continue; // Skips rest of the loop iteration
                    default:
                        cout << "Processing " << i << endl;
                }
            }
            break;
        }

        case 4: {
            // ✅ Nested Switch Case
            int category = 1, subCategory = 2;
            cout << "Nested Switch Case Example:" << endl;
            switch (category) {
                case 1:
                    cout << "Category 1 Selected" << endl;
                    switch (subCategory) {
                        case 1:
                            cout << "Subcategory 1.1 Selected" << endl;
                            break;
                        case 2:
                            cout << "Subcategory 1.2 Selected" << endl;
                            break;
                        default:
                            cout << "Invalid Subcategory" << endl;
                    }
                    break;
                default:
                    cout << "Invalid Category" << endl;
            }
            break;
        }

        case 5: {
            // ✅ Switch with Character Input
            char grade;
            cout << "Enter your grade (A, B, C, D, F): ";
            cin >> grade;

            switch (grade) {
                case 'A':
                    cout << "Excellent!" << endl;
                    break;
                case 'B':
                case 'C':
                    cout << "Good Job!" << endl;
                    break;
                case 'D':
                    cout << "You Passed!" << endl;
                    break;
                case 'F':
                    cout << "Better Luck Next Time!" << endl;
                    break;
                default:
                    cout << "Invalid Grade" << endl;
            }
            break;
        }

        case 6: {
            // ✅ Calculator using Switch Case
            double num1, num2;
            char op;
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Enter operator (+, -, *, /): ";
            cin >> op;

            switch (op) {
                case '+':
                    cout << "Result: " << (num1 + num2) << endl;
                    break;
                case '-':
                    cout << "Result: " << (num1 - num2) << endl;
                    break;
                case '*':
                    cout << "Result: " << (num1 * num2) << endl;
                    break;
                case '/':
                    if (num2 != 0)
                        cout << "Result: " << (num1 / num2) << endl;
                    else
                        cout << "Error! Division by zero." << endl;
                    break;
                default:
                    cout << "Invalid operator!" << endl;
            }
            break;
        }

        case 7: {
            // ✅ Days of the Week
            int day;
            cout << "Enter day number (1-7): ";
            cin >> day;

            switch (day) {
                case 1:
                    cout << "Monday" << endl;
                    break;
                case 2:
                    cout << "Tuesday" << endl;
                    break;
                case 3:
                    cout << "Wednesday" << endl;
                    break;
                case 4:
                    cout << "Thursday" << endl;
                    break;
                case 5:
                    cout << "Friday" << endl;
                    break;
                case 6:
                    cout << "Saturday" << endl;
                    break;
                case 7:
                    cout << "Sunday" << endl;
                    break;
                default:
                    cout << "Invalid day number!" << endl;
            }
            break;
        }

        default:
            cout << "Invalid choice! Please select a valid option." << endl;
    }
    return 0;
}