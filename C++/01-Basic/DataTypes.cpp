#include <iostream>
#include <climits> // For limits like INT_MAX, CHAR_MIN
#include <cfloat>  // For float and double limits
using namespace std;

int main() {
    // Integer types
    int a = 10; // Signed int
    unsigned int b = 20U; // Unsigned int
    short c = 30; // Short int
    long d = 40L; // Long int
    long long e = 50LL; // Long long int

    // Character types
    char ch = 'A';
    wchar_t wch = L'B';
    char16_t ch16 = u'C';
    char32_t ch32 = U'D';

    // Floating point types
    float f = 3.14f;
    double g = 3.141592;
    long double h = 3.14159265359L;

    // Boolean type
    bool isTrue = true;

    // Pointer types
    int* ptr = &a;

    // Type modifiers
    const int ci = 100; // Constant integer
    volatile int vi = 200; // Volatile integer
    signed int si = -30; // Signed integer
    unsigned short us = 60U; // Unsigned short

    // Type aliases
    typedef unsigned int uint;
    using uint_t = unsigned int;
    uint x = 70;
    uint_t y = 80;

    // User-defined types
    enum Color { RED, GREEN, BLUE } color;
    struct Point { int x, y; } p = {1, 2};
    union Data { int i; float f; } data;
    data.i = 5;

    // Display sizes
    cout << "Data Type Sizes (in bytes):\n";
    cout << "int: " << sizeof(a) << " bytes\n";
    cout << "unsigned int: " << sizeof(b) << " bytes\n";
    cout << "short: " << sizeof(c) << " bytes\n";
    cout << "long: " << sizeof(d) << " bytes\n";
    cout << "long long: " << sizeof(e) << " bytes\n";
    cout << "char: " << sizeof(ch) << " bytes\n";
    cout << "wchar_t: " << sizeof(wch) << " bytes\n";
    cout << "char16_t: " << sizeof(ch16) << " bytes\n";
    cout << "char32_t: " << sizeof(ch32) << " bytes\n";
    cout << "float: " << sizeof(f) << " bytes\n";
    cout << "double: " << sizeof(g) << " bytes\n";
    cout << "long double: " << sizeof(h) << " bytes\n";
    cout << "bool: " << sizeof(isTrue) << " bytes\n";
    cout << "Pointer: " << sizeof(ptr) << " bytes\n";
    cout << "Constant int: " << sizeof(ci) << " bytes\n";
    cout << "Volatile int: " << sizeof(vi) << " bytes\n";
    cout << "Signed int: " << sizeof(si) << " bytes\n";
    cout << "Unsigned short: " << sizeof(us) << " bytes\n";
    cout << "Typedef uint: " << sizeof(x) << " bytes\n";
    cout << "Using uint_t: " << sizeof(y) << " bytes\n";
    cout << "Enum: " << sizeof(color) << " bytes\n";
    cout << "Struct: " << sizeof(p) << " bytes\n";
    cout << "Union: " << sizeof(data) << " bytes\n";
    
    // Display range of values
    cout << "\nRange of Data Types:\n";
    cout << "int: " << INT_MIN << " to " << INT_MAX << "\n";
    cout << "unsigned int: 0 to " << UINT_MAX << "\n";
    cout << "short: " << SHRT_MIN << " to " << SHRT_MAX << "\n";
    cout << "long: " << LONG_MIN << " to " << LONG_MAX << "\n";
    cout << "long long: " << LLONG_MIN << " to " << LLONG_MAX << "\n";
    cout << "char: " << CHAR_MIN << " to " << CHAR_MAX << "\n";
    cout << "float: " << FLT_MIN << " to " << FLT_MAX << "\n";
    cout << "double: " << DBL_MIN << " to " << DBL_MAX << "\n";
    cout << "long double: " << LDBL_MIN << " to " << LDBL_MAX << "\n";
    
    return 0;
}