/*
Problem 11:

You are given t number of testcases. Each testcase contains a number n and a digit x.
Write a program to find the number of times x digit occurs in a given input number n.

E.g.
 Input: 948932 9
 Output: 2
*/

#include <iostream>
using namespace std;

void Occurence(long long int n, int x)
{
    int count = 0;

    while(n != 0)
    {
        int r = n % 10;
        
        if(r == x)
        {
            count++;
        }

        n /= 10;
    }

    cout << count << endl;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long int n;
        int x;
        cin >> n >> x;

        Occurence(n, x);
    }
    
    return 0;
}
