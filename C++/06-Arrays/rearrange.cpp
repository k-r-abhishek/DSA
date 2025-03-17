#include <iostream>
#include <vector>
using namespace std;

void rearrange(int arr[], int n) {
    vector<int> pos, neg;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) pos.push_back(arr[i]);
        else neg.push_back(arr[i]);
    }

    int i = 0, j = 0, k = 0;
    while (i < pos.size() && j < neg.size()) {
        arr[k++] = pos[i++];
        arr[k++] = neg[j++];
    }
    while (i < pos.size()) arr[k++] = pos[i++];
    while (j < neg.size()) arr[k++] = neg[j++];
}

int main() {
    int arr[] = {1, 2, -3, -4, 5, 6, -7, -8};
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}