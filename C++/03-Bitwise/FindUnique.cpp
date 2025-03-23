#include <bits/stdc++.h>
using namespace std;

int findUnique(int arr[], int n) {
    int unique = 0;
    for (int i = 0; i < n; i++) {
        unique ^= arr[i];  // XOR all elements
    }
    return unique;
}

int main() {
    int arr[] = {4, 3, 6, 2, 3, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "The unique element is: " << findUnique(arr, n) << endl;
    return 0;
}