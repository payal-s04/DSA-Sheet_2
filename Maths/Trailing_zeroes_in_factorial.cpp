/*
Problem 18:

You are given t number of testcases. Each testcase contains a number n.
For an integer n find the number of trailing zeroes in n!.

E.g.
 Input:
 5
 Outuput:
 1 (5! = 120)
*/

#include<iostream>
using namespace std;

/*
// Method 1 :

int trailingZeroes(int n)
{
    long long int fact = 1;
    
    for(int i = 2; i <= n; i++)
    {
        fact *= i;
    }
    
    int count = 0;
    
    while(fact != 0)
    {
        if(fact % 10 != 0)
        {
            break;
        }

        if(fact % 10 == 0)
        {
            count++;
        }
        
        fact /= 10;
    }
    
    return count;
}
*/

// Method 2 :

int trailingZeroes(int n)
{
    int count = 0;
    
    for(int i = 5; i <= n; i *= 5)
    {
        count += n / i;
    }
    
    return count;
}

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        
        cout << trailingZeroes(n) << endl;
    }
    
    return 0;
}
