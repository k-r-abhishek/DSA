#include <bits/stdc++.h>
using namespace std;

int main()
{
    int amount = 1330;
    int count100 = 0, count50 = 0, count20 = 0, count10 = 0;
    
    switch (1)
    {
        case 1:
            count100 = amount / 100;
            amount %= 100;
            // No break to continue to the next case

        case 2:
            count50 = amount / 50;
            amount %= 50;
            // No break to continue to the next case

        case 3:
            count20 = amount / 20;
            amount %= 20;
            // No break to continue to the next case

        case 4:
            count10 = amount / 10;
            amount %= 10;
            // No break to continue to the next case
    }
    
    cout << "100 rupee notes: " << count100 << endl;
    cout << "50 rupee notes: " << count50 << endl;
    cout << "20 rupee notes: " << count20 << endl;
    cout << "10 rupee notes: " << count10 << endl;
    
    return 0;
}
