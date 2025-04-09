public class ReverseTrianglePattern {
    public static void main(String[] args) {
        triangle2(4, 0);
    }

    // Prints a triangle in reverse recursive order
    static void triangle2(int r, int c) {
        if (r == 0) return; // Base case

        if (c < r) {
            triangle2(r, c + 1);   // Go deep into recursion (right side first)
            System.out.print("*"); // Print on the way back (reverse order)
        } else {
            triangle2(r - 1, 0);   // New row
            System.out.println(); // Line break
        }
    }
}
