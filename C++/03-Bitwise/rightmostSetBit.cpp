#include <iostream>
using namespace std;

int rightmostSetBit(int n) {
    return n & (-n);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Rightmost set bit of " << n << " is: " << rightmostSetBit(n) << endl;
    return 0;
}