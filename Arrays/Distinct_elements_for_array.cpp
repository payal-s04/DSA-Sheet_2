/*
Problem 7:

Given an array a of positive integers of size n. Find all distinct digits present in array a[n].

E.g.
 Input:
 3
 131 11 48
 Output:
 1 3 4 8
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> requiredDigits(vector<int> nums)
{
    vector<int> m;
    for (auto i : nums)
    {
        while (i != 0)
        {
            int n = i % 10;
            vector<int>::iterator it = find(m.begin(), m.end(), n);
            if (it == m.end())
            {
                m.push_back(n);
            }
            i /= 10;
        }
    }

    sort(m.begin(), m.end());

    return m;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> v;
        for(int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }

        vector<int> vec = requiredDigits(v);

        for(auto i : vec)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    
    return 0;
}
