/*
Problem 16:

Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.

E.g.
 Input:
 5
 1 2 3 5
 Ouput:
 4
*/

#include <iostream>
using namespace std;

void missingNum(long long int n, long long int a[])
{
    long long int arr[n] = {0};

    for(long long int i = 0; i < n - 1; i++)
    {
        arr[a[i]] = 1;
    }

    for (long long int i = 1; i < n; i++)
    {
        if(arr[i] != 1)
        {
            cout << i << endl;
        }
    }
}

int main()
{
    long long int n;
    cin >> n;
    
    long long int a[n - 1];
    for (long long int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
    }

    missingNum(n, a);
    
    return 0;
}
