// Program to check if a number is a palindrome using recursion
public class PalindromeChecker {

    // Function to reverse the given number
    static int reverseNumber(int n) {
        int digits = (int) (Math.log10(n)) + 1; // Count number of digits
        return reverseHelper(n, digits);
    }

    // Recursive helper function to compute the reverse of a number
    private static int reverseHelper(int n, int digits) {
        if (n % 10 == n) { // Base case: single-digit number
            return n;
        }
        int lastDigit = n % 10;
        return lastDigit * (int) (Math.pow(10, digits - 1)) + reverseHelper(n / 10, digits - 1);
    }

    // Function to check if a number is a palindrome
    static boolean isPalindrome(int n) {
        return n == reverseNumber(n);
    }

    public static void main(String[] args) {
        int number = 121; // Test case
        if (isPalindrome(number)) {
            System.out.println(number + " is a Palindrome.");
        } else {
            System.out.println(number + " is NOT a Palindrome.");
        }
    }
}