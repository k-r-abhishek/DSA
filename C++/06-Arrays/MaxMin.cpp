#include <bits/stdc++.h>
using namespace std;

// minimum element in the array
int getMin(int num[], int size)
{
    int min = INT_MAX;
    for(int i = 0; i < size; i++)
    {
        if(num[i] < min)
        {
            min = num[i];
        }
    }
    return min;
}

// maximum element in the array
int getMax(int num[], int size)
{
    int max = INT_MIN;
    for(int i = 0; i < size; i++)
    {
        if(num[i] > max)
        {
            max = num[i];
        }
    }
    return max;

}

int main()
{
    int size;
    cin >> size;
    int num[100];

    for(int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout << "Maximum is: " << getMax(num, size) << endl;
    cout << "Minimum is: " << getMin(num, size) << endl;
}