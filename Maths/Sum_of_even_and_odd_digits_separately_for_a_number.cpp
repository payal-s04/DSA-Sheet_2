/*
Problem 6:

You are given t number of testcases. Each testcase contains a number n.
Write a program to find the sum of even digits and odd digits separately of number n.

E.g.
 Input: 23617
 Output: 8 11 (2+6 = 8 and 3 + 1 + 7 = 11)
*/

#include<bits/stdc++.h>
using namespace std;

pair<long long int, long long int> SumEO(int n)
{
    long long int sumE = 0, sumO = 0;

    while(n != 0)
    {
        if((n % 10) % 2 == 0)
        {
            sumE += (n % 10);
        }
        else
        {
            sumO += (n % 10);
        }

        n /= 10;
    }

    return make_pair(sumE, sumO);
}

int main()
{
    int t; 
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        
        pair<long long int, long long int> sum = SumEO(n);

        cout << sum.first << " " << sum.second << endl;
    }
}
