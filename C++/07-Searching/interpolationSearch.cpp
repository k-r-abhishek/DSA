#include <iostream>
using namespace std;

// Interpolation Search Algorithm (Only works on uniformly distributed sorted arrays)
// Time Complexity: O(log log n) on average, O(n) in worst case, Space Complexity: O(1)
int interpolationSearch(int arr[], int size, int key)
{
    int low = 0, high = size - 1;
    
    while (low <= high && key >= arr[low] && key <= arr[high])
    {
        // Estimate the probable position of the key
        int pos = low + ((key - arr[low]) * (high - low)) / (arr[high] - arr[low]);
        
        if (arr[pos] == key)
            return pos; // Found
        else if (arr[pos] < key)
            low = pos + 1; // Search in right half
        else
            high = pos - 1; // Search in left half
    }

    return -1; // Not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 50;
    
    int result = interpolationSearch(arr, size, key);
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;
    
    return 0;
}
