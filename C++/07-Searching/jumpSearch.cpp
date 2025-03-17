#include <iostream>
#include <cmath>
using namespace std;

// Jump Search Algorithm (Only works on sorted arrays)
// Time Complexity: O(√n), Space Complexity: O(1)
int jumpSearch(int arr[], int size, int key) {
    int step = sqrt(size); // Block size to jump
    int prev = 0;
    
    // Jumping through blocks
    while (arr[min(step, size) - 1] < key) {
        prev = step;
        step += sqrt(size);
        if (prev >= size)
            return -1; // Not found
    }
    
    // Linear search in the identified block
    for (int i = prev; i < min(step, size); i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 40;
    
    int result = jumpSearch(arr, size, key);
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;
    
    return 0;
}