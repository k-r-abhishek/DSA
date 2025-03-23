#include <bits/stdc++.h>
using namespace std;

int setbit(int a, int b)
{
    int suma = 0;
    int sumb = 0;

    while(a != 0)
    {
        if(a & 1)
        {
            suma = suma + 1;
        }
        a = a >> 1;
    }
    while(b != 0)
    {
        if(b & 1)
        {
            sumb = sumb + 1;
        }
        b = b >> 1;
    }
    int sum = suma + sumb;
    return sum;
}

int main()
{
    int a, b;
    cout << "Enter a: " << endl;
    cin >> a;
    cout << "Enter b: " << endl;
    cin >> b;
    cout << setbit(a, b) << endl;
    return 0;
}