/*
Problem 9:

You are given t number of testcases. Each testcase contains a number n.
Write a program, which finds the sum of numbers formed by consecutive digits of number n.

E.g.
 Input: 2415
 Output: 80 (24 + 41 + 15 = 80)
 
 Input: 24159
 Output: 139 (24 + 41 + 15 + 59 = 139)
*/

#include <iostream>
using namespace std;

void Sum(long long int n)
{
    int Result = 0;

    while((n / 10) != 0)
    {
        int r1 = n % 10;
        int r2 = (n / 10) % 10;

        Result += (r2 * 10) + r1;

        n /= 10;
    }

    cout << Result << endl;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long int n;
        cin >> n;

        Sum(n);
    }
    
    return 0;
}
