#include <bits/stdc++.h>

using namespace std;

// 🔹 Global Variable (Accessible throughout the program)
int globalVar = 100;

// 🔹 Extern Variable Declaration
extern int externVar;  // Defined later outside this file (or in another file)

void functionScopeExample() {
    // 🔹 Local Variable (Accessible only inside this function)
    int localVar = 50;
    cout << "Local Variable: " << localVar << endl;
}

// 🔹 Static Variable Example
void staticVariableExample() {
    static int staticVar = 0; // Persists between function calls
    staticVar++;
    cout << "Static Variable: " << staticVar << endl;
}

// 🔹 Register Variable Example (Hint for CPU register storage)
void registerVariableExample() {
    int regVar = 10; // No need for 'register'
    cout << "Variable: " << regVar << endl;
}

// 🔹 Demonstrating Block Scope
void blockScopeExample() {
    int x = 5;  // Outer scope
    cout << "Outer x: " << x << endl;

    { // New inner block
        int x = 10;  // This x is different from outer x
        cout << "Inner x: " << x << endl;
    }

    cout << "Outer x again: " << x << endl;
}

// 🔹 Mutable Variable Example (Used with `const` objects)
class Example {
    public:
    int normalVar;
    mutable int mutableVar; // Can be modified inside a `const` function

    Example() : normalVar(5), mutableVar(10) {}

    void changeMutableVar() const {
        mutableVar = 20; // Allowed, even though function is `const`
    }
};

// 🔹 Dynamic Memory Allocation (Heap Variable)
void heapMemoryExample() {
    int* ptr = new int(500); // Allocated in heap
    cout << "Heap Variable: " << *ptr << endl;
    delete ptr; // Free memory
}

// 🔹 Main Function
int main() {
    cout << "Global Variable: " << globalVar << endl;

    functionScopeExample();  // Local Scope
    staticVariableExample(); // Static Variable
    staticVariableExample(); // Calling again to see persistence
    registerVariableExample(); // Register Variable
    blockScopeExample();  // Block Scope

    // Mutable Variable Example
    Example obj;
    cout << "Mutable Variable Before Change: " << obj.mutableVar << endl;
    obj.changeMutableVar();
    cout << "Mutable Variable After Change: " << obj.mutableVar << endl;

    heapMemoryExample();  // Dynamic Memory Allocation

    return 0;
}