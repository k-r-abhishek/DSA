#include <bits/stdc++.h>
#include <cstring>
#include <cctype>
#include <cstdlib>

using namespace std;

// Function to reverse a character array
void reverseString(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        swap(str[i], str[len - i - 1]);
    }
}

// Function to check if a string is a palindrome
bool isPalindrome(char str[]) {
    int left = 0, right = strlen(str) - 1;
    while (left < right) {
        if (str[left] != str[right])
            return false;
        left++, right--;
    }
    return true;
}

// Function to remove spaces from a string
void removeSpaces(char str[]) {
    int i = 0, j = 0;
    while (str[i]) {
        if (str[i] != ' ') {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
}

// Function to count vowels and consonants
void countVowelsConsonants(char str[], int &vowels, int &consonants) {
    vowels = consonants = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }
}

int main() {
    char str[100], str2[100];

    // 1. Input and Output
    cout << "Enter a string: ";
    cin.getline(str, 100);
    cout << "You entered: " << str << endl;

    // 2. Length of String
    cout << "Length: " << strlen(str) << endl;

    // 3. Copy String
    strcpy(str2, str);
    cout << "Copied String: " << str2 << endl;

    // 4. Concatenate Strings
    strcat(str, " World!");
    cout << "Concatenated: " << str << endl;

    // 5. Compare Strings
    if (strcmp(str, str2) == 0)
        cout << "Strings are equal" << endl;
    else
        cout << "Strings are different" << endl;

    // 6. Reverse String
    reverseString(str2);
    cout << "Reversed: " << str2 << endl;

    // 7. Convert to Uppercase and Lowercase
    for (int i = 0; str[i] != '\0'; i++) str[i] = toupper(str[i]);
    cout << "Uppercase: " << str << endl;

    for (int i = 0; str[i] != '\0'; i++) str[i] = tolower(str[i]);
    cout << "Lowercase: " << str << endl;

    // 8. Check Palindrome
    if (isPalindrome(str2))
        cout << "Palindrome" << endl;
    else
        cout << "Not a Palindrome" << endl;

    // 9. Find Substring
    cout << "Enter substring to search: ";
    cin.getline(str2, 100);
    if (strstr(str, str2))
        cout << "Substring found" << endl;
    else
        cout << "Substring not found" << endl;

    // 10. Remove Spaces
    removeSpaces(str);
    cout << "After removing spaces: " << str << endl;

    // 11. Count Vowels & Consonants
    int vowels, consonants;
    countVowelsConsonants(str, vowels, consonants);
    cout << "Vowels: " << vowels << ", Consonants: " << consonants << endl;

    // 12. Convert String to Integer
    cout << "Enter a numeric string: ";
    cin.getline(str, 100);
    int num = atoi(str);
    cout << "Integer Value: " << num << endl;

    return 0;
}