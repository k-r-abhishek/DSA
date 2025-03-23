#include <bits/stdc++.h>
using namespace std;

bool isEven(int n) {
    return (n & 1) == 0;  // If LSB is 0, it's even
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << n << " is " << (isEven(n) ? "Even" : "Odd") << endl;
    return 0;
}