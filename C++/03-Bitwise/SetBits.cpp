#include <bits/stdc++.h>
using namespace std;

int countSetBits(int n) {
    int count = 0;
    while (n) {
        n = n & (n - 1);  // Removes the rightmost set bit
        count++;
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    cout << "Number of set bits in " << n << " is: " << countSetBits(n) << endl;
    return 0;
}