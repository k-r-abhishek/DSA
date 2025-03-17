#include <iostream>
using namespace std;

int majorityElement(int arr[], int n) {
    int candidate = -1, count = 0;
    for (int i = 0; i < n; i++) {
        if (count == 0) candidate = arr[i];
        count += (arr[i] == candidate) ? 1 : -1;
    }

    // Verify candidate
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) count++;
    }
    return (count > n / 2) ? candidate : -1;
}

int main() {
    int arr[] = {2, 2, 1, 1, 1, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Majority Element: " << majorityElement(arr, n) << endl;
    return 0;
}