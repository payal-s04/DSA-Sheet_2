/*
Problem 5 :

You are given t number of testcases. Each testcase contains a number n.
Write a program to reverse a user-input number n. 
Note :- Ignore leading zeros.

E.g.
 Input: 4321
 Output: 1234
 
 Input: 120
 Output: 21
*/

#include <iostream>
using namespace std;

long long int revNum(long long int n)
{
    long long int num = 0;

    while (n != 0)
    {
        int rem = n % 10;
        num = num * 10 + rem;
        n /= 10;
    }

    return num;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long int n;
        cin >> n;

        cout << revNum(n) << endl;
    }
    
    return 0;
}
