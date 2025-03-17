#include <iostream>
using namespace std;

// Binary Search Algorithm (Only works on sorted arrays)
// Time Complexity: O(log n), Space Complexity: O(1)
int binarySearch(int arr[], int size, int key) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid; // Found
        else if (arr[mid] < key)
            left = mid + 1; // Search in right half
        else
            right = mid - 1; // Search in left half
    }
    return -1; // Not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 30;
    
    int result = binarySearch(arr, size, key);
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;
    
    return 0;
}
