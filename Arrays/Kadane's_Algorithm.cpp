/*
Problem 11:

Given an array a of n integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.

E.g.
 Input:
 5
 1 2 3 -2 5
 Output:
 9
*/

#include <iostream>
using namespace std;

int maxSubarraySum(int a[], int n)
{
    int max1 = INT_MIN, max2 = 0;

    for (int i = 0; i < n; i++)
    {
        max2 += a[i];

        if (max2 > max1)
        {
            max1 = max2;
        }

        if (max2 < 0)
        {
            max2 = 0;
        }
    }

    return max1;
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << maxSubarraySum(a, n) << endl;

    return 0;
}
