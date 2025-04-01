// Program demonstrating different ways to print numbers using recursion
public class NumberPrinterRecursion {
    public static void main(String[] args) {
        int num = 7;

        System.out.println(" Understanding Pre-Decrement vs Post-Decrement:");
        checkDecrementBehavior(num);

        System.out.println("\n Printing Numbers from N to 1:");
        printDescending(num);

        System.out.println("\n Printing Numbers from 1 to N:");
        printAscending(num);

        System.out.println("\n Printing Numbers from N to 1 and Back to N:");
        printBothWays(num);
    }

    /**
     * Demonstrates the difference between `n--` (post-decrement) and `--n` (pre-decrement)
     *
     * @param n The starting number
     */
    static void checkDecrementBehavior(int n) {
        if (n == 0) return;
        System.out.print(n + " ");

        // checkDecrementBehavior(n--);  ❌ Incorrect: Passes `n`, then decrements (infinite loop risk)
        checkDecrementBehavior(--n); // ✅ Correct: Decrements first, then passes updated value
    }

    /**
     * Prints numbers from N to 1 using recursion.
     *
     * @param n The starting number
     */
    static void printDescending(int n) {
        if (n == 0) return;
        System.out.print(n + " ");
        printDescending(n - 1); // Recursive call with n-1
    }

    /**
     * Prints numbers from 1 to N using recursion.
     *
     * @param n The target number to reach
     */
    static void printAscending(int n) {
        if (n == 0) return;
        printAscending(n - 1); // First recursive call
        System.out.print(n + " "); // Print after recursion unwinds
    }

    /**
     * Prints numbers from N to 1, then back to N using recursion.
     *
     * @param n The starting number
     */
    static void printBothWays(int n) {
        if (n == 0) return;
        System.out.print(n + " "); // Print while decreasing
        printBothWays(n - 1); // Recursive call
        System.out.print(n + " "); // Print again while coming back
    }
}