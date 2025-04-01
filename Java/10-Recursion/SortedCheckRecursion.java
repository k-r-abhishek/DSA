public class SortedCheckRecursion {

    /**
     * Recursively checks whether the given array is sorted in strictly increasing order.
     * 
     * @param arr   The input array to check.
     * @param index The current index being compared.
     * @return true if the array is sorted, false otherwise.
     */
    static boolean sorted(int[] arr, int index) {
        // Base Case: If we reach the last element, the array is sorted.
        if (index == arr.length - 1) {
            return true;
        }

        // If current element is greater than or equal to the next, it's not sorted.
        if (arr[index] >= arr[index + 1]) {
            return false;
        }

        // Recursive Call: Move to the next element in the array.
        return sorted(arr, index + 1);
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 5, 16, 8};  // Example test case (unsorted)
        boolean result = sorted(arr, 0);
        System.out.println("Is the array sorted? " + result); // Output: false
    }
}
