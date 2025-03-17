#include <iostream>
using namespace std;

// Exponential Search Algorithm (Works on sorted arrays)
// Time Complexity: O(log n), Space Complexity: O(1)
int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int exponentialSearch(int arr[], int size, int key) {
    if (arr[0] == key)
        return 0;
    
    int i = 1;
    while (i < size && arr[i] <= key)
        i *= 2;
    
    return binarySearch(arr, i / 2, min(i, size - 1), key);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 60;
    
    int result = exponentialSearch(arr, size, key);
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;
    
    return 0;
}