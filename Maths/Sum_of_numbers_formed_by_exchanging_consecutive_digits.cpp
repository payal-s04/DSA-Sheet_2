/*
Problem 10:

You are given t number of testcases. Each testcase contains a number n.
Write a program to find the sum of numbers formed by exchanging consecutive digits of number n.

E.g.
 Input: 2415
 Output: 107 (42 + 14 + 51 = 107)

 Input: 24159
 Output: 202 (42 + 14 + 51 + 95 = 202)
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

        Result += (r1 * 10) + r2;

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
