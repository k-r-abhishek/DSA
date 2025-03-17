#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    cout << n << " is " << (isPowerOfTwo(n) ? "a power of 2" : "not a power of 2") << endl;
    return 0;
}