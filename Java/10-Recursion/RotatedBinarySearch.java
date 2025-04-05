// Rotated Binary Search (Recursive Approach)
// This algorithm finds a target element in a sorted and rotated array using recursion.

public class RotatedBinarySearch {
    public static void main(String[] args) {
        int[] arr = {5, 6, 7, 8, 9, 1, 2, 3};
        int target = 4;

        // Search for the target in the rotated sorted array
        int result = search(arr, target, 0, arr.length - 1);

        // Output the result
        if (result != -1) {
            System.out.println("Target found at index: " + result);
        } else {
            System.out.println("Target not found in the array.");
        }

        // Another test case to verify the correctness
        int target2 = 7;
        int result2 = search(arr, target2, 0, arr.length - 1);
        System.out.println("Target 7 found at index: " + result2);
    }

    /**
     * Recursive function to perform search in a rotated sorted array.
     * 
     * @param arr    The input rotated sorted array.
     * @param target The element to search for.
     * @param start  The starting index of the search range.
     * @param end    The ending index of the search range.
     * @return Index of the target element if found, otherwise -1.
     */
    static int search(int[] arr, int target, int start, int end) {
        // Base case: if the search range is invalid, return -1 (target not found)
        if (start > end) {
            return -1;
        }

        // Calculate the middle index
        int mid = start + (end - start) / 2;

        // If the middle element is the target, return its index
        if (arr[mid] == target) {
            return mid;
        }

        // Check if the left half is sorted
        if (arr[start] <= arr[mid]) {
            // If target lies within the sorted left half, search in this half
            if (target >= arr[start] && target <= arr[mid]) {
                return search(arr, target, start, mid - 1);
            } else { // Otherwise, search in the right half
                return search(arr, target, mid + 1, end);
            }
        }

        // If left half is not sorted, then right half must be sorted
        if (target >= arr[mid] && target <= arr[end]) {
            return search(arr, target, mid + 1, end);
        }

        // Otherwise, search in the left half
        return search(arr, target, start, mid - 1);
    }
}