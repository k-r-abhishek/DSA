// Program to calculate the sum of first N natural numbers using recursion
public class SumOfNaturalNumbers {
    public static void main(String[] args) {
        int number = 5;
        int result = calculateSum(number);
        System.out.println("Sum of first " + number + " natural numbers is: " + result);
    }

    /**
     * Recursively calculates the sum of the first N natural numbers.
     *
     * Formula:
     * Sum(N) = N + (N-1) + (N-2) + ... + 1
     * Base case: Sum(1) = 1
     *
     * @param n The number up to which the sum is calculated
     * @return The sum of first n natural numbers
     */
    static int calculateSum(int n) {
        if (n <= 1) {  // Base case: Sum of 1 is 1
            return 1;
        }
        return n + calculateSum(n - 1); // Recursive call
    }
}