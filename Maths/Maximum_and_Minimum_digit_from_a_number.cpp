/*
Problem 7:

You are given t number of testcases. Each testcase contains a number n.
Write a program to find the maximum and minimum digit from a number n.

E.g.
 Input:
 123456789
 Output:
 9 1
*/

#include<bits/stdc++.h>
using namespace std;

pair<int, int> MaxMin(long long int n)
{
    int Max = INT_MIN, Min = INT_MAX;
    
    while(n != 0)
    {
        int r = n % 10;
        
        Max = max(Max, r);
        Min = min(Min, r);
        
        n /= 10;
    }
    
    return make_pair(Max, Min);
}

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        long long int n;
        cin >> n;
        
        pair<int, int> p = MaxMin(n);
        cout << p.first << " " << p.second << endl;
    }
    
    return 0;
}
