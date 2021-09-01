/*
Other Methods --> https://www.techiedelight.com/find-majority-element-in-an-array-boyer-moore-majority-vote-algorithm/

Problem 14:

Given an array A of N elements. Find the majority element in the array.
A majority element in an array A of size N is an element that appears more than N/2 times in the array.

E.g.
 Input:
 5
 1 3 5 3 3
 Output:
 3
 Input:
 8
 1 4 6 7 8 4 7 7
 Output:
 -1
*/

#include <bits/stdc++.h>
using namespace std;

int majorityElement(int a[], int n)
{
    unordered_map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        m[a[i]]++;
    }

    for (auto i : m)
    {
        if (i.second > n / 2)
        {
            return i.first;
        }
    }

    return -1;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        cout << majorityElement(a, n) << endl;
    }

    return 0;
}
