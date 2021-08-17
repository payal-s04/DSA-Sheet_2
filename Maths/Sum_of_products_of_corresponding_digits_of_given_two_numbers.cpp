/*
Problem 3 :
Write a program, which reads two numbers (assume, both have the same number of digits) from the user. The program outputs the sum of products of corresponding digits.

E.g.
 Input: 327 539
 Output: 84 (3x5 + 2x3 + 7x9 = 84)
*/

#include<bits/stdc++.h>
using namespace std;

void reqNum(long long int a, long long int b)
{
    int sum = 0;
    
    while(a != 0)
    {
        sum += (a % 10) * (b % 10);
        a /= 10;
        b /= 10;
    }
    
    cout << sum << endl;
}

int main()
{
    long long int n1, n2;
    cin >> n1 >> n2;
    
    reqNum(n1, n2);
}
