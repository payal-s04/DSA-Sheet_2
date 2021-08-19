/*
Problem 13:

You are given t number of testcases. Each testcase contains a number n.
Write a program to express user-input number n as a sum of two prime numbers.
Return -1, if it is not possible to express number n as sum of two prime numbers.

E.g.
 Input:
 21
 Output:
 2 19

 Input:
 1
 Output:
 -1
*/

#include <bits/stdc++.h>
using namespace std;

int check(int n)
{
    int isPrime = 1;

    for (int i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    return isPrime;
}

vector<pair<int, int>> sumPrime(int n)
{
    vector<pair<int, int>> v;
    int flag = 0;

    for (int i = 2; i <= n / 2; ++i)
    {
        if (check(i) == 1)
        {
            if (check(n - i) == 1)
            {
                flag = 1;
                v.push_back(make_pair(i, (n - i)));
            }
        }
    }

    if (flag == 0)
    {
        v.clear();
        v.push_back(make_pair(0, 0));
    }

    return v;
}

void print(vector<pair<int, int>> v)
{
    if(v.size() == 1 && v[0].first == 0 && v[0].second == 0)
    {
        cout << "-1" << endl;
    }
    else
    {
        for(int i = 0; i < v.size(); i++)
        {
            cout << v[i].first << " " << v[i].second << endl;
        }
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

        vector<pair<int, int>> result = sumPrime(n);

        print(result);
    }

    return 0;
}
