public class SmallestLetter {

    public static void main(String[] args) {
        SmallestLetter sl = new SmallestLetter();

        // Test cases
        char[] letters1 = {'c', 'f', 'j'};
        char target1 = 'a';
        System.out.println(sl.nextGreatestLetter(letters1, target1)); // Expected output: 'c'

        char[] letters2 = {'c', 'f', 'j'};
        char target2 = 'c';
        System.out.println(sl.nextGreatestLetter(letters2, target2)); // Expected output: 'f'

        char[] letters3 = {'c', 'f', 'j'};
        char target3 = 'd';
        System.out.println(sl.nextGreatestLetter(letters3, target3)); // Expected output: 'f'

        char[] letters4 = {'c', 'f', 'j'};
        char target4 = 'j';
        System.out.println(sl.nextGreatestLetter(letters4, target4)); // Expected output: 'c' (wrap-around case)

        char[] letters5 = {'e', 'e', 'e', 'k', 'q', 'q'};
        char target5 = 'e';
        System.out.println(sl.nextGreatestLetter(letters5, target5)); // Expected output: 'k'

        char[] letters6 = {'a', 'b', 'c', 'd'};
        char target6 = 'z';
        System.out.println(sl.nextGreatestLetter(letters6, target6)); // Expected output: 'a' (wrap-around case)
    }

    // Function to find the smallest letter greater than the target
    public char nextGreatestLetter(char[] letters, char target) {

        int start = 0;
        int end = letters.length - 1;

        while (start <= end) {
            // Calculate mid to avoid integer overflow
            int mid = start + (end - start) / 2;

            if (target < letters[mid]) {
                // If target is smaller than mid, the answer might be mid or on the left
                end = mid - 1;
            } else {
                // If target is greater than or equal to mid, move right to find a greater letter
                start = mid + 1;
            }
        }
        // If start goes out of bounds, wrap around using modulo operator
        return letters[start % letters.length];
    }
}