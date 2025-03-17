#include <iostream>
using namespace std;

// Ternary Search Algorithm
// Time Complexity: O(log N)
// Best for: When we suspect the element is near the center

int ternarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;

        if (arr[mid1] == key)
            return mid1;
        if (arr[mid2] == key)
            return mid2;

        if (key < arr[mid1]) {
            right = mid1 - 1;
        } else if (key > arr[mid2]) {
            left = mid2 + 1;
        } else {
            left = mid1 + 1;
            right = mid2 - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 6;
    int index = ternarySearch(arr, 0, n - 1, key);

    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found." << endl;
    return 0;
}