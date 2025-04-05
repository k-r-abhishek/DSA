
import java.util.ArrayList;

/**
 * This class provides recursive implementations of various search operations on an array.
 * The methods include:
 * - Checking if an element exists in the array
 * - Finding the first occurrence of an element
 * - Finding the last occurrence of an element
 * - Finding all occurrences of an element
 *
 * Recursion is used instead of loops to provide a more structured and mathematical approach to solving these problems.
 */
public class RecursiveSearch {
    public static void main(String[] args) {
        int[] arr = {2, 3, 1, 4, 4, 5};
        int target = 4;

        System.out.println("Does the element exist? " + find(arr, target, 0));
        System.out.println("First occurrence index: " + findIndex(arr, target, 0));
        System.out.println("Last occurrence index: " + findIndexLast(arr, target, arr.length - 1));

        // Finding all occurrences using static list method
        findAllIndex(arr, target, 0);
        System.out.println("All occurrence indices (static list method): " + list);

        // Finding all occurrences using passed list method
        ArrayList<Integer> resultList = findAllIndex(arr, target, 0, new ArrayList<>());
        System.out.println("All occurrence indices (passed list method): " + resultList);

        // Finding all occurrences using independent list method
        System.out.println("All occurrence indices (independent list method): " + findAllIndex2(arr, target, 0));
    }

    /**
     * Recursively checks if the target element exists in the array.
     * @param arr The array in which to search.
     * @param target The element to find.
     * @param index The current index being checked.
     * @return true if the element is found, false otherwise.
     */
    static boolean find(int[] arr, int target, int index) {
        if (index == arr.length) {
            return false;
        }
        return arr[index] == target || find(arr, target, index + 1);
    }

    /**
     * Recursively finds the first occurrence of the target element.
     * @param arr The array in which to search.
     * @param target The element to find.
     * @param index The current index being checked.
     * @return The index of the first occurrence of the target element, or -1 if not found.
     */
    static int findIndex(int[] arr, int target, int index) {
        if (index == arr.length) {
            return -1;
        }
        if (arr[index] == target) {
            return index;
        }
        return findIndex(arr, target, index + 1);
    }

    /**
     * Recursively finds the last occurrence of the target element.
     * @param arr The array in which to search.
     * @param target The element to find.
     * @param index The current index being checked, starting from the last index.
     * @return The index of the last occurrence of the target element, or -1 if not found.
     */
    static int findIndexLast(int[] arr, int target, int index) {
        if (index == -1) {
            return -1;
        }
        if (arr[index] == target) {
            return index;
        }
        return findIndexLast(arr, target, index - 1);
    }

    /**
     * Recursively finds all occurrences of the target element and stores them in a static list.
     * @param arr The array in which to search.
     * @param target The element to find.
     * @param index The current index being checked.
     */
    static ArrayList<Integer> list = new ArrayList<>();
    static void findAllIndex(int[] arr, int target, int index) {
        if (index == arr.length) {
            return;
        }
        if (arr[index] == target) {
            list.add(index);
        }
        findAllIndex(arr, target, index + 1);
    }

    /**
     * Recursively finds all occurrences of the target element and stores them in a list passed as an argument.
     * @param arr The array in which to search.
     * @param target The element to find.
     * @param index The current index being checked.
     * @param list The list that accumulates indices where the target is found.
     * @return A list of all indices where the target element appears.
     */
    static ArrayList<Integer> findAllIndex(int[] arr, int target, int index, ArrayList<Integer> list) {
        if (index == arr.length) {
            return list;
        }
        if (arr[index] == target) {
            list.add(index);
        }
        return findAllIndex(arr, target, index + 1, list);
    }

    /**
     * Recursively finds all occurrences of the target element and returns a new list without modifying a global list.
     * This method ensures that recursion does not affect any static/global state.
     * @param arr The array in which to search.
     * @param target The element to find.
     * @param index The current index being checked.
     * @return A new list containing all indices where the target element appears.
     */
    static ArrayList<Integer> findAllIndex2(int[] arr, int target, int index) {
        ArrayList<Integer> list = new ArrayList<>();
        if (index == arr.length) {
            return list;
        }
        if (arr[index] == target) {
            list.add(index);
        }
        list.addAll(findAllIndex2(arr, target, index + 1));
        return list;
    }
}