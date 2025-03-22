#include <bits/stdc++.h>
#include <climits> // For limits like INT_MAX, CHAR_MIN
#include <cfloat>  // For float and double limits
using namespace std;

int main() {
    // Integer types initialization and printing
    int a = 10;
    unsigned int b = 20U;
    short c = -30;
    long d = 40L;
    long long e = 50LL;

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
    const int ci = 100;
    volatile int vi = 200;
    signed int si = -30;
    unsigned short us = 60U;

    // Type aliases
    typedef unsigned int uint;
    using uint_t = unsigned int;
    uint x = 70;
    uint_t y = 80;

    // User-defined types
    enum Color { RED, GREEN, BLUE } color = GREEN;
    struct Point { int x, y; } p = {1, 2};
    union Data { int i; float f; } data;
    data.i = 5;

    // Printing values
    cout << "Values of Different Data Types:\n";
    cout << "int: " << a << "\n";
    cout << "unsigned int: " << b << "\n";
    cout << "short: " << c << "\n";
    cout << "long: " << d << "\n";
    cout << "long long: " << e << "\n";
    cout << "char: " << ch << "\n";
    cout << "wchar_t: " << wch << "\n";
    cout << "char16_t: " << ch16 << "\n";
    cout << "char32_t: " << ch32 << "\n";
    cout << "float: " << f << "\n";
    cout << "double: " << g << "\n";
    cout << "long double: " << h << "\n";
    cout << "bool: " << isTrue << "\n";
    cout << "Pointer (address of a): " << ptr << "\n";
    cout << "Constant int: " << ci << "\n";
    cout << "Volatile int: " << vi << "\n";
    cout << "Signed int: " << si << "\n";
    cout << "Unsigned short: " << us << "\n";
    cout << "Typedef uint: " << x << "\n";
    cout << "Using uint_t: " << y << "\n";
    cout << "Enum (Color): " << color << "\n";
    cout << "Struct (Point): x = " << p.x << ", y = " << p.y << "\n";
    cout << "Union (Data - int): " << data.i << "\n";
    
    return 0;
}