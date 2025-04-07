// Recursive Selection Sort implementation in Java
import java.util.Arrays;

public class RecursiveSelectionSort {
    public static void main(String[] args) {
        int[] arr = {1, 4, 3, 5};
        selection(arr, arr.length, 0, 0);
        System.out.println(Arrays.toString(arr));
    }

    // Recursive Selection Sort implementation
    static void selection(int[] arr, int r, int c, int max) {
        if (r == 0) return; // Base case

        if (c < r) {
            // Find the index of the maximum element in the unsorted part
            if (arr[c] > arr[max]) {
                selection(arr, r, c + 1, c); // Update max index
            } else {
                selection(arr, r, c + 1, max); // Keep current max
            }
        } else {
            // Swap the found max with the last element of unsorted array
            int temp = arr[max];
            arr[max] = arr[r - 1];
            arr[r - 1] = temp;

            // Recur for remaining array
            selection(arr, r - 1, 0, 0);
        }
    }
}