// Program to calculate the product of digits of a number using recursion
public class ProductOfDigits {
    public static void main(String[] args) {
        int number = 505;
        int result = calculateDigitProduct(number);
        System.out.println("Product of digits of " + number + " is: " + result);
    }

    /**
     * Recursively calculates the product of digits of a given number.
     *
     * Example: 
     * Input: 505
     * Calculation: 5 * 0 * 5 = 0
     *
     * Base case: If the number has only one digit (n < 10), return n.
     *
     * @param n The number whose digit product is calculated
     * @return The product of its digits
     */
    static int calculateDigitProduct(int n) {
        if (n % 10 == n) { // Base case: If the number is a single digit, return it
            return n;
        }
        return (n % 10) * calculateDigitProduct(n / 10); // Extract last digit and recurse on remaining digits
    }
}