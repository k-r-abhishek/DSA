// Program to calculate the sum of digits of a number using recursion
public class SumOfDigits {
    public static void main(String[] args) {
        int number = 1342;
        int result = calculateDigitSum(number);
        System.out.println("Sum of digits of " + number + " is: " + result);
    }

    /**
     * Recursively calculates the sum of digits of a given number.
     *
     * Example: 
     * Input: 1342
     * Calculation: 1 + 3 + 4 + 2 = 10
     *
     * Base case: If n is 0, return 0.
     *
     * @param n The number whose digits sum is calculated
     * @return The sum of its digits
     */
    static int calculateDigitSum(int n) {
        if (n == 0) { // Base case: If number is 0, return 0
            return 0;
        }
        return (n % 10) + calculateDigitSum(n / 10); // Extract last digit and recurse on remaining digits
    }
}