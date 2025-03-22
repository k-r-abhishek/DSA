#include <bits/stdc++.h>
using namespace std;

int power(int a, int b)
{
    int result = 1;
    for(int i = 1; i <= b; i++)
    {
        result = result * a;
    }
    
    return result;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int answer = power(a, b);
    cout << answer << endl;
    return 0;
}
