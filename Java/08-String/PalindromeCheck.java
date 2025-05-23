// 6. Palindrome Check
public class PalindromeCheck {
    public static void main(String[] args) {
        String str = "abcba";
        System.out.println(isPalindrome(str)); // true
    }

    static boolean isPalindrome(String str) {
        if (str == null || str.isEmpty()) return true;
        str = str.toLowerCase();
        for (int i = 0; i < str.length() / 2; i++) {
            if (str.charAt(i) != str.charAt(str.length() - 1 - i)) return false;
        }
        return true;
    }
}