/*
Problem 9:

You are given t number of testcases. First line of each test case contains two space separated elements, n denoting the size of the array and an integer D denoting the number size of the rotation. Subsequent line will be the n space separated array elements.
Given an unsorted array a[] of size n, rotate it by d elements (clockwise).

E.g.
 Input:
 5 3
 1 2 3 4 5
 Output:
 4 5 1 2 3
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, d;
        cin >> n >> d;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        /*
        // Method 1:

        for(int i = 0; i < d; i++)
        {
            int k = arr[0];

            for(int i = 0; i < n - 1; i++)
            {
                arr[i] = arr[i + 1];
            }

            arr[n - 1] = k;
        }
        */

        // Method 2:

        reverse(arr, arr + d);
        reverse(arr + d, arr + n);
        reverse(arr, arr + n);

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
