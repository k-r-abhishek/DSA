#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while(start <= end)
    {
        swap(arr[start], arr[end]);
        start = start + 1;
        end = end - 1;
    }
    return;
}
void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter size of array: " << endl;
    cin >> size;
    int arr[100];
    cout << "Elements of array are: " << endl;
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    reverse(arr, size);
    printArray(arr, size);
}