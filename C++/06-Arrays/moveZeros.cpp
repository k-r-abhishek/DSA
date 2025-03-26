#include <bits/stdc++.h>
using namespace std;

void moveZeros(int arr[], int n) {
    int j = 0; // Points to the next available non-zero index
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) swap(arr[i], arr[j++]);
    }
}

int main() {
    int arr[] = {0, 1, 9, 8, 4, 0, 0, 2, 7, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    moveZeros(arr, n);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}