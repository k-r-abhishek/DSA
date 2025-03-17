#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int n) {
    int xor1 = 0, xor2 = 0;

    for (int i = 1; i <= n; i++)
        xor1 ^= i;  // XOR of all numbers from 1 to N

    for (int i = 0; i < n - 1; i++)
        xor2 ^= arr[i];  // XOR of all elements in array

    return xor1 ^ xor2;  // Missing number
}

int main() {
    int arr[] = {1, 2, 4, 5, 6};
    int n = 6;  // N is 6 (1 to 6 numbers should be present)

    cout << "Missing number is: " << findMissingNumber(arr, n) << endl;
    return 0;
}
