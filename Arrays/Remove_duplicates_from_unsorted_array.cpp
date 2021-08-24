/*
Problem 4:

You are size of an array n and then n elements of array a.
Write a program to remove duplicates from given unsorted array.

E.g.
 Input:
 5
 8 4 4 7 8
 Output:
 8 4 7
*/

#include <bits/stdc++.h>
using namespace std;

void newArray(int a[], int n)
{
    unordered_map<int, bool> m;

    for(int i = 0; i < n; i++)
    {
        if(m.find(a[i]) == m.end())
        {
            cout << a[i] << " ";
        }

        m[a[i]] = true;
    }

    cout << endl;
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
        
        newArray(a, n);
    }
    
    return 0;
}
