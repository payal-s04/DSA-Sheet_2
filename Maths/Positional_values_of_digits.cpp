/*
Problem 4 :
You are given t number of testcases. Each testcase contains a number n.
Write a program to print positional values of digits of a number n.
E.g.
 Input: 21463
 Output: 3 60 400 1000 20000
*/

#include<bits/stdc++.h>
using namespace std;

void positionalValues(long long int n)
{
    int i = 0;
    
    while(n != 0)
    {
        cout << (n % 10) * pow(10, i) << " ";
        n /= 10;
        i++;
    }
    
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        long long int n;
        cin >> n;
        
        positionalValues(n);
    }
}
