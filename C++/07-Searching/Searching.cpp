#include <iostream>
#include <cmath> // For sqrt() function in Jump Search
using namespace std;

/*
1. Linear Search (O(N))
   - Works for unsorted arrays
   - Checks each element one by one
*/
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

/*
2. Binary Search (O(log N))
   - Works for sorted arrays
   - Divides the search space in half
*/
int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

/*
3. Jump Search (O(sqrt(N)))
   - Works for sorted arrays
   - Jumps ahead in blocks of sqrt(n) and then searches linearly
*/
#include <cmath>
int jumpSearch(int arr[], int n, int key)
{
    int step = sqrt(n);
    int prev = 0;
    
    while (arr[min(step, n) - 1] < key) {
        prev = step;
        step += sqrt(n);
        if (prev >= n) return -1;
    }
    
    for (int i = prev; i < min(step, n); i++) {
        if (arr[i] == key) return i;
    }
    return -1;
}

/*
4. Interpolation Search (O(log log N))
   - Works for uniformly distributed sorted arrays
   - Uses a formula to estimate the search position
*/
int interpolationSearch(int arr[], int left, int right, int key) {
    while (left <= right && key >= arr[left] && key <= arr[right]) {
        int pos = left + ((key - arr[left]) * (right - left) / (arr[right] - arr[left]));
        if (arr[pos] == key) return pos;
        else if (arr[pos] < key) left = pos + 1;
        else right = pos - 1;
    }
    return -1;
}

/*
5. Exponential Search (O(log N))
   - Used when array size is unknown
   - Doubles the index and then applies binary search
*/
int exponentialSearch(int arr[], int n, int key) {
    if (arr[0] == key) return 0;
    int i = 1;
    while (i < n && arr[i] <= key) i *= 2;
    return binarySearch(arr, i / 2, min(i, n - 1), key);
}


int main() {
    int arr[] = {2, 3, 4, 10, 14, 18, 22, 25, 30, 40}; // Sorted array
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 14;

    cout << "Linear Search Index: " << linearSearch(arr, n, key) << endl;
    cout << "Binary Search Index: " << binarySearch(arr, 0, n - 1, key) << endl;
    cout << "Jump Search Index: " << jumpSearch(arr, n, key) << endl;
    cout << "Interpolation Search Index: " << interpolationSearch(arr, 0, n - 1, key) << endl;
    cout << "Exponential Search Index: " << exponentialSearch(arr, n, key) << endl;

    return 0;
}