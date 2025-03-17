#include <iostream>
using namespace std;

// Linear Search Algorithm
// Time Complexity: O(n), Space Complexity: O(1)
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Return index if found
        }
    }
    return -1; // Return -1 if not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 30;
    
    int result = linearSearch(arr, size, key);
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;
    
    return 0;
}