// Program to calculate the factorial of a number using recursion
public class FactorialCalculator {
    public static void main(String[] args) {
        int number = 5;
        int result = calculateFactorial(number);
        System.out.println("Factorial of " + number + " is: " + result);
    }

    /**
     * Recursively calculates the factorial of a given number.
     * 
     * Factorial Formula:
     * n! = n * (n-1) * (n-2) * ... * 1
     * Base case: 0! = 1, 1! = 1
     *
     * @param n The number to find the factorial of
     * @return Factorial of n
     */
    static int calculateFactorial(int n) {
        if (n <= 1) {  // Base case: factorial of 0 or 1 is 1
            return 1;
        }
        return n * calculateFactorial(n - 1); // Recursive call
    }
}