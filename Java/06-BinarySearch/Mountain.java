public class Mountain {
    public static void main(String[] args) {
        int[] arr = {0, 2, 4, 5, 3, 1};
        System.out.println(peakIndexInMountainArray(arr));
    }

    // Returns the peak index in a mountain array
    public static int peakIndexInMountainArray(int[] arr) {
        int start = 0;
        int end = arr.length - 1;

        while (start < end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] > arr[mid + 1]) {
                end = mid; // In decreasing part of array
            } else {
                start = mid + 1; // In increasing part of array
            }
        }
        return start; // Peak index
    }
}