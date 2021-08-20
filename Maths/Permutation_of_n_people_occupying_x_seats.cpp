/*
Problem 15:

You are given t number of testcases. Each testcase contains a value n for number of people and x for number of seats in the empty room.
Write a program to calculate the permutation of “n” people who can occupy “x” seats in an empty room.
 E.g.
 Input: 5 4
 Output: 120 (5P4 = 5!/1! = 5*4*3*2*1/1 = 120)
*/

#include<iostream>
using namespace std;

void Permutation(int n, int x)
{
    long long int result = 1;
    
    for(int i = n; i > (n - x); i--)
    {
        result *= i;
    }
    
    cout << result << endl;
}

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n, x;
        cin >> n >> x;
        
        Permutation(n, x);
    }
    
    return 0;
}
