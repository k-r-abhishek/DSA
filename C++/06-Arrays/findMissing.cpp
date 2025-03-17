#include <iostream>
using namespace std;

int findMissing(int arr[], int n) {
    int xor1 = 0, xor2 = 0;
    for (int i = 1; i <= n; i++) xor1 ^= i;
    for (int i = 0; i < n - 1; i++) xor2 ^= arr[i];
    return xor1 ^ xor2;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6};
    int n = 6; // Array should have elements from 1 to N (6 here)
    cout << "Missing Number: " << findMissing(arr, n) << endl;
    return 0;
}