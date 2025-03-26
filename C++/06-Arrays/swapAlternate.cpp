#include <bits/stdc++.h>
using namespace std;

// function to swap the alternate element of the array
void swapAlternate(int arr[], int size)
{
    for(int i = 0; i < size; i = i + 2)
    {
        if(i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
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
    cout << "Elements of array: " << endl;
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    swapAlternate(arr, size);
    cout << "Array after swapping alternate elements: " << endl;
    printArray(arr, size);
    return 0;
}