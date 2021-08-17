/*
Problem 2 :

You are given t number of testcases. Each testcase contains a number n.
Write a program, which will find the sum of products of two consecutive digits of number n.

E.g.
 Input: 23145
 Output: 33 (2x3 + 3x1 + 1x4 + 4x5 = 33)
*/

#include<bits/stdc++.h>
using namespace std;

int reqSum(int n)
{
    int temp1, temp2, sum = 0;

    while(n/10 != 0)
    {
        temp1 = n % 10;
        temp2 = (n / 10) % 10;

        sum += (temp1 * temp2);
        
        n /= 10;
    }
    
    return sum;
}

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        
        cout << reqSum(n) << endl;
    }
}
