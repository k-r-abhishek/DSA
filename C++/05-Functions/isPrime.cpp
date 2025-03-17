#include <bits/stdc++.h>
using namespace std;


bool isPrime(int number)
{
    for(int i = 2; i < number; i++)
    {
        if(number % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num;
    cin >> num;
    if(isPrime(num))
    {
        cout << "Number is prime" << endl;
    }
    else
    {
        cout << "Number is not prime" << endl;
    }
}