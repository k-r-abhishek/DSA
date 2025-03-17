#include <iostream>
#include <unordered_set>
using namespace std;

int longestConsecutive(int arr[], int n) {
    unordered_set<int> s(arr, arr + n);
    int maxLen = 0;
    
    for (int num : s) {
        if (s.find(num - 1) == s.end()) { // Start of a sequence
            int currNum = num, currLen = 1;
            while (s.find(currNum + 1) != s.end()) {
                currNum++;
                currLen++;
            }
            maxLen = max(maxLen, currLen);
        }
    }
    return maxLen;
}

int main() {
    int arr[] = {100, 4, 200, 1, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Longest Consecutive Sequence: " << longestConsecutive(arr, n) << endl;
    return 0;
}