#include <bits/stdc++.h>
using namespace std;

int main() {
    // Implicit Type Casting (Automatically done by compiler)
    int a = 10;
    double b = a; // int to double
    char ch = 65; // int to char (ASCII value)
    int charToInt = 'A'; // char to int (ASCII conversion)

    // Explicit Type Casting (Manually done by programmer)
    double x = 10.75;
    int y = (int)x; // C-style casting
    int z = static_cast<int>(x); // Using static_cast

    // C-style, Function-style, and Static_cast
    float f = 3.14f;
    int fi1 = (int)f; // C-style
    int fi2 = int(f); // Function-style
    int fi3 = static_cast<int>(f); // Static_cast

    // Dynamic_cast (Used for polymorphism, requires base & derived classes)
    class Base { public: virtual void show() {} };
    class Derived : public Base { public: void show() { cout << "Derived Class\n"; } };
    Base* basePtr = new Derived;
    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
    if (derivedPtr) derivedPtr->show();

    // Const_cast (Removes constness)
    const int ci = 100;
    int* modifiable = const_cast<int*>(&ci);
    *modifiable = 200; // Undefined behavior if ci was truly constant

    // Reinterpret_cast (Bitwise conversion, use cautiously)
    int num = 65;
    char* ptr = reinterpret_cast<char*>(&num);

    // String to integer (invalid direct conversion)
    // int invalidInt = "a"; // Uncommenting this will cause an error
    
    // Proper string to integer conversion using stoi
    string strNum = "123";
    int validInt = stoi(strNum);
    
    // Printing results
    cout << "Implicit Type Casting: int to double: " << b << "\n";
    cout << "Implicit Type Casting: int to char: " << ch << "\n";
    cout << "Implicit Type Casting: char to int: " << charToInt << "\n";
    cout << "Explicit Type Casting: double to int: " << y << "\n";
    cout << "Explicit Type Casting (static_cast): double to int: " << z << "\n";
    cout << "C-style Cast: float to int: " << fi1 << "\n";
    cout << "Function-style Cast: float to int: " << fi2 << "\n";
    cout << "Static_cast: float to int: " << fi3 << "\n";
    cout << "Const_cast: Modified const int: " << *modifiable << "\n";
    cout << "Reinterpret_cast: int (65) as char: " << *ptr << "\n";
    cout << "String to Integer using stoi: " << validInt << "\n";
    
    delete basePtr;
    return 0;
}