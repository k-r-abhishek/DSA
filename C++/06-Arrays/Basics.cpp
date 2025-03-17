#include <iostream>
#include <algorithm> 
#include <vector>
#include <climits>
using namespace std;

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;
}

// 1. Array Declaration & Initialization
void arrayBasics() {
    cout << "\nArray Declaration & Initialization\n";
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {10, 20};  // Rest will be 0
    int arr3[] = {7, 8, 9};  // Compiler determines size
    printArray(arr1, 5);
    printArray(arr2, 5);
    printArray(arr3, 3);
}

// 2. Traversing and Input
void traverseArray() {
    cout << "\nArray Traversal & Input\n";
    int arr[5];

    cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++) cin >> arr[i];

    printArray(arr, 5);
}

// 3. Searching an Element (Linear Search)
void searchArray(int arr[], int size, int key) {
    cout << "\nSearching Element " << key << "\n";
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            cout << "Found at index " << i << endl;
            return;
        }
    }
    cout << "Not found\n";
}

// 4. Binary Search (For Sorted Arrays)
void binarySearch(int arr[], int size, int key) {
    sort(arr, arr + size);
    cout << "\nBinary Search for " << key << "\n";
    int left = 0, right = size - 1, mid;
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (arr[mid] == key) {
            cout << "Found at index " << mid << endl;
            return;
        }
        (arr[mid] < key) ? left = mid + 1 : right = mid - 1;
    }
    cout << "Not found\n";
}

// 5. Sorting (Ascending & Descending)
void sortArray(int arr[], int size) {
    cout << "\nSorting Array\n";
    sort(arr, arr + size);
    cout << "Ascending: "; printArray(arr, size);

    sort(arr, arr + size, greater<int>());
    cout << "Descending: "; printArray(arr, size);
}

// 6. Reversing an Array
void reverseArray(int arr[], int size) {
    cout << "\nReversing Array\n";
    reverse(arr, arr + size);
    printArray(arr, size);
}

// 7. Maximum & Minimum Element
void findMaxMin(int arr[], int size) {
    cout << "\nMaximum & Minimum\n";
    cout << "Max: " << *max_element(arr, arr + size) << "\n";
    cout << "Min: " << *min_element(arr, arr + size) << "\n";
}

// 8. Frequency of Elements
void frequencyArray(int arr[], int size) {
    cout << "\nFrequency of Elements\n";
    int freq[101] = {0}; // Assuming range [0,100]
    for (int i = 0; i < size; i++) freq[arr[i]]++;
    for (int i = 0; i < 101; i++)
        if (freq[i] > 0) cout << i << " appears " << freq[i] << " times\n";
}

// 9. Left Rotate Array
void leftRotate(int arr[], int size, int d) {
    cout << "\nLeft Rotate by " << d << " positions\n";
    rotate(arr, arr + d, arr + size);
    printArray(arr, size);
}

// 10. Right Rotate Array
void rightRotate(int arr[], int size, int d) {
    cout << "\nRight Rotate by " << d << " positions\n";
    rotate(arr, arr + size - d, arr + size);
    printArray(arr, size);
}

// 11. Merging Two Sorted Arrays
void mergeArrays(int arr1[], int size1, int arr2[], int size2) {
    cout << "\nMerging Two Sorted Arrays\n";
    int merged[size1 + size2];
    merge(arr1, arr1 + size1, arr2, arr2 + size2, merged);
    printArray(merged, size1 + size2);
}

// 12. Finding Subarrays (Brute Force)
void printSubarrays(int arr[], int size) {
    cout << "\nAll Subarrays\n";
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            for (int k = i; k <= j; k++) cout << arr[k] << " ";
            cout << endl;
        }
    }
}

// 13. Prefix Sum Array
void prefixSum(int arr[], int size) {
    cout << "\nPrefix Sum Array\n";
    int prefix[size];
    prefix[0] = arr[0];
    for (int i = 1; i < size; i++) prefix[i] = prefix[i - 1] + arr[i];
    printArray(prefix, size);
}

// 14. Kadane’s Algorithm (Max Subarray Sum)
void kadaneAlgorithm(int arr[], int size) {
    cout << "\nMaximum Subarray Sum (Kadane's Algorithm)\n";
    int maxSum = INT_MIN, curSum = 0;
    for (int i = 0; i < size; i++) {
        curSum += arr[i];
        maxSum = max(maxSum, curSum);
        if (curSum < 0) curSum = 0;
    }
    cout << "Max Subarray Sum: " << maxSum << endl;
}

// 15. Sliding Window Approach (Max Sum of Subarray of size k)
void slidingWindow(int arr[], int size, int k) {
    cout << "\nSliding Window (Max Sum of size " << k << ")\n";
    int sum = 0, maxSum = INT_MIN;
    for (int i = 0; i < k; i++) sum += arr[i];
    maxSum = sum;
    for (int i = k; i < size; i++) {
        sum += arr[i] - arr[i - k];
        maxSum = max(maxSum, sum);
    }
    cout << "Max Sum: " << maxSum << endl;
}

// Main Function Demonstrating All Concepts
int main() {
    arrayBasics();
    traverseArray();

    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    
    searchArray(arr, size, 30);
    binarySearch(arr, size, 40);
    sortArray(arr, size);
    reverseArray(arr, size);
    findMaxMin(arr, size);

    int arrFreq[] = {5, 3, 5, 3, 5, 2};
    frequencyArray(arrFreq, 6);

    int arrRotate[] = {1, 2, 3, 4, 5};
    leftRotate(arrRotate, 5, 2);
    rightRotate(arrRotate, 5, 2);

    printSubarrays(arr, size);
    prefixSum(arr, size);
    kadaneAlgorithm(arr, size);
    slidingWindow(arr, size, 3);

    return 0;
}