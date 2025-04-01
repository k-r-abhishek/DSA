// Program to count the number of zeros in an integer using recursion
public class ZeroCounter {

    static int count = 0;
    public static void main(String[] args) {
        // int number = 30210004; // Test case
        int number = 12345; // Test case
        // Method: 1 - Declaring count = 0, as globally
        System.out.println("Method: 1 - Number of zeros in " + number + " is: " + countZerosHelper(number, count));

        // Method: 2 - Calculating count using the helper function
        System.out.println("Method: 2 - Number of zeros in " + number + " is: " + countZeros(number));
    }

    // Wrapper function to start counting zeros
    static int countZeros(int n) {
        return countZerosHelper(n, 0);
    }

    // Recursive helper function to count zeros
    private static int countZerosHelper(int n, int count) {
        if (n == 0) {
            return count;
        }

        int lastDigit = n % 10;
        if (lastDigit == 0) {
            return countZerosHelper(n / 10, count + 1); // Increment count if zero is found
        }
        return countZerosHelper(n / 10, count); // Continue recursion
    }
}