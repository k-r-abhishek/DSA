#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main() {
    int a = 5, b = 7;
    cout << "Before Swap: a = " << a << ", b = " << b << endl;

    swapNumbers(a, b);

    cout << "After Swap: a = " << a << ", b = " << b << endl;
    return 0;
}