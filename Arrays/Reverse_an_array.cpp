/*
Problem 2:
You are given t number of testcases. Each testcase contains an array a of n elements.
Write a program to reverse the given array a[n].

E.g.
 Input:
 5
 1 4 6 3 8
 Output:
 8 3 6 4 1
*/

#include <iostream>
using namespace std;

void reversedArray(int a[], int s, int e)
{
    while (s < e)
    {
        int temp = a[s];
        a[s] = a[e];
        a[e] = temp;
        s++;
        e--;
    }
}

void printReversedArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
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

        reversedArray(a, 0, n - 1);
        printReversedArray(a, n);
    }

    return 0;
}
