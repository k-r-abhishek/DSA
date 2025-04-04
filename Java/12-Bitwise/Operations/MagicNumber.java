import java.util.Scanner;

public class MagicNumber {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter your nth number: ");
        int num = in.nextInt();
        System.out.println("Your nth magic number is: " + nthMagicNumber(num));
        in.close();
    }
    static int nthMagicNumber(int n) {
        int power = 5, result = 0;
        while (n > 0) {
            if ((n & 1) == 1) // If last bit is 1, add corresponding power of 5
                result += power;
            power *= 5; // Move to the next power of 5
            n >>= 1;    // Right shift to process the next bit
        }
        return result;
    }
}
// A magic number is a number formed by summing powers of 5 (e.g., 5^1, 5^2, etc.).
// The nth magic number is determined by the binary representation of 'n'.
// Each bit in 'n' (0 or 1) decides whether to include a corresponding power of 5 in the sum.