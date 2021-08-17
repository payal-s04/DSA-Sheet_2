/*
Problem 1 :
You are given t number of testcases. Each testcase contains a number n and k.
Write a program to find kth digit from the end of a given number n.

Input :
 n k
Output :
 -1        (if n <= 0)
 kth digit (otherwise)
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        long long int n, k;
        cin >> n >> k;
        
        long long int d = pow(10, k - 1);
        
        if((n <= 0) || (n < d))
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << (n / d) % 10 << endl;
        }
    }
    
    return 0;
}
