#include <bits/stdc++.h>
using namespace std;

bool isEven(int num)
{
    if(num % 2 == 0)
    {
        return true;
    }
    return false;
}


int main()
{
    int n;
    cin >> n;
    if(isEven(n))
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }
    return 0;
}