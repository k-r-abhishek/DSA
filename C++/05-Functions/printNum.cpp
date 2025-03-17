#include <iostream>
using namespace std;

void printNumber(int n)
{
    for(int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
    cout << endl;
    return;
}

int main()
{
    int num;
    cin >> num;
    printNumber(num);
    return 0;
}