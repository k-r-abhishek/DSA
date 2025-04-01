// Program to reverse a number using recursion
public class ReverseNumber {
    static int reversedNumber = 0; // Stores the reversed number

    public static void main(String[] args) {
        int number = 7924;
        
        // Method 1: Using a global variable
        reverseUsingGlobalVariable(number);
        System.out.println("Reversed number (Method 1): " + reversedNumber);

        // Method 2: Using helper function with additional arguments
        System.out.println("Reversed number (Method 2): " + reverseUsingHelper(number));
    }

    /**
     * Method 1: Reverse the number using a global variable.
     * This method updates a static variable to store the reversed number.
     *
     * @param n The number to be reversed
     */
    static void reverseUsingGlobalVariable(int n) {
        if (n == 0) {
            return;
        }
        int lastDigit = n % 10;
        reversedNumber = reversedNumber * 10 + lastDigit;
        reverseUsingGlobalVariable(n / 10);
    }

    /**
     * Method 2: Reverse the number using a helper function without global variables.
     * This approach calculates the number of digits and uses recursion.
     *
     * @param n The number to be reversed
     * @return The reversed number
     */
    static int reverseUsingHelper(int n) {
        int numberOfDigits = (int) (Math.log10(n)) + 1;
        return reverseHelper(n, numberOfDigits);
    }

    /**
     * Helper function for reversing the number.
     *
     * @param n       The number being reversed
     * @param digits  The number of digits remaining
     * @return The reversed number
     */
    private static int reverseHelper(int n, int digits) {
        if (n % 10 == n) { // Base case: if n is a single-digit number
            return n;
        }
        int lastDigit = n % 10;
        return lastDigit * (int) (Math.pow(10, digits - 1)) + reverseHelper(n / 10, digits - 1);
    }
}