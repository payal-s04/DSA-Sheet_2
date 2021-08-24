/*
Problem 12:

Given an array of integers a of size n and a number k.
Return the maximum sum of a subarray of size k.

E.g.
 Input:
 4 2
 100 200 300 400
 Output:
 700 (300 + 400 = 700)
*/

#include <bits/stdc++.h>
using namespace std;

long long maximumSumSubarray(int K, vector<int> &a, int N)
{
    long long result = 0, sum = 0;

    for (int i = 0; i < N; i++)
    {
        if (i < K)
        {
            result += a[i];
            sum = result;
        }
        else
        {
            sum += a[i] - a[i - K];
            result = max(result, sum);
        }
    }

    return result;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a;
        for(int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            a.push_back(num);
        }

        cout << maximumSumSubarray(k, a, n);
    }

    return 0;
}
