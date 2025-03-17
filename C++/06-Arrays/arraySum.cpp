#include <bits/stdc++.h>
using namespace std;

int arraySum(int arr[], int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int size;
    cout << "Size of array: " << endl;
    cin >> size;
    int arr[500];
    cout << "Elements of array: " << endl;
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Sum of array is: " << arraySum(arr, size) << endl;
}