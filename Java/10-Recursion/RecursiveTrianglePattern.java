public class RecursiveTrianglePattern {
    public static void main(String[] args) {
        triangle(4, 0);
    }

    // Prints a left-aligned triangle using recursion
    static void triangle(int r, int c) {
        if (r == 0) return; // Base case: No more rows

        if (c < r) {
            System.out.print("*"); // Print star
            triangle(r, c + 1);    // Move to next column
        } else {
            System.out.println();  // Move to new line after completing a row
            triangle(r - 1, 0);    // Move to next row
        }
    }
}
// This code prints a left-aligned triangle pattern using recursion. The `triangle` method takes two parameters: `r` (number of rows) and `c` (current column). It prints stars in a triangular format by recursively calling itself to handle the columns and rows. The base case is when there are no more rows to print. The recursive calls manage the printing of stars and moving to the next line after completing each row.