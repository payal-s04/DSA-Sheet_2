/*
Problem 12:

You are given t number of testcases. Each testcase contains a number n.
Write a program to find the largest prime factor of a number.

E.g.
 Input:
 695467363456
 Output:
 5433338777
*/

#include<bits/stdc++.h>
using namespace std;

void PrimeFactor(long long int n)
{
    long long int Prime = INT_MIN;
    
    while(n % 2 == 0)
    {
        Prime = 2;
        n /= 2;
    }
    
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            Prime = i;
            n = n / i;
        }
    }
    
    if (n >= 3)
    {
        Prime = n;
    }
 
    cout << Prime << endl;
}

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        long long int n;
        cin >> n;
        
        PrimeFactor(n);
    }
    
    return 0;
}
