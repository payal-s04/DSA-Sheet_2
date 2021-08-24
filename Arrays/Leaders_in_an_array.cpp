/*
Problem 6:

Given an array A of positive integers. Your task is to find the leaders in the array
An element of array is leader if it is greater than or equal to all the elements to its right side. The rightmost element is always a leader.

E.g.
 Input:
 6
 16 17 4 3 5 2
 Output:
 17 5 2
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(int a[], int n)
{
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = i + 1; j < n; j++)
        {
            if (a[i] <= a[j])
            {
                break;
            }
        }
        if (j == n)
        {
            v.push_back(a[i]);
        }
    }
    return v;
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

    vector<int> v = leaders(a, n);

    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
