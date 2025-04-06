// Recursive Bubble Sort implementation in Java
import java.util.Arrays;

public class RecursiveBubbleSort {
    public static void main(String[] args) {
        int[] arr = {5, 3, 4, 1, 2};
        bubble(arr, arr.length - 1, 0);
        System.out.println(Arrays.toString(arr));
    }

    // Recursive Bubble Sort implementation
    static void bubble(int[] arr, int r, int c) {
        if (r == 0) return; // Base case: array is sorted

        if (c < r) {
            // Swap if current element is greater than next
            if (arr[c] > arr[c + 1]) {
                int temp = arr[c];
                arr[c] = arr[c + 1];
                arr[c + 1] = temp;
            }
            bubble(arr, r, c + 1); // Move to next pair
        } else {
            bubble(arr, r - 1, 0); // One pass complete, move to next pass
        }
    }
}