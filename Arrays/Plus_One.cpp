/*
Problem 15:
Given a non-negative number represented as a list of digits, add 1 to the number (increment the number represented by the digits).
The digits are stored such that the most significant digit is first element of array.

E.g.
 Input:
 4
 1 4 9 9
 Output:
 1 5 0 0
 Input:
 3
 1 5 8
 Output:
 1 5 9
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int> a, int n)
{
    a[n - 1] += 1;
    int carry = a[n - 1] / 10;
    a[n - 1] = a[n - 1] % 10;

    for (int i = n - 2; i >= 0; i--)
    {
        if (carry == 1)
        {
            a[i] += 1;
            carry = a[i] / 10;
            a[i] = a[i] % 10;
        }
    }

    if (carry == 1)
    {
        a.insert(a.begin(), 1);
    }

    return a;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> a;
        for(int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            a.push_back(num);
        }

        vector<int> b = plusOne(a, n);

        for(auto i : b)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
