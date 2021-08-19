/*
Problem 8:

You are given t number of testcases. Each testcase contains a number n.
Write a program to print the second last even digit of number n.
Return -1 if second last even digit does not exist.

E.g.
 Input: 23863
 Output: 8
 
 Input: 325145761
 Output 4
*/

#include<bits/stdc++.h>
using namespace std;

void Even(long long int n)
{
    int check = 0, ans = -1;
    
    while(n != 0)
    {
        int r = n % 10;
        
        if(r % 2 == 0 && check == 0)
        {
            check = 1;
        }
        else if(r % 2 == 0 && check == 1)
        {
            check = 2;
            ans = r;
            break;
        }

        n /= 10;
    }
    
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        long long int n;
        cin >> n;
        
        Even(n);
    }
    
    return 0;
}
