/*
Problem 3:

You are size of an array n and then n elements of array a.
Write a program to remove duplicates from a sorted array.

E.g.
 Input:
 4
 1 4 7 7
 Output:
 1 4 7
*/

#include <iostream>
using namespace std;

void newArray(int a[], int n)
{
    int arr[n], j = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if(a[i] != a[i + 1])
        {
            arr[j] = a[i];
            j++;
        }
    }

    arr[j] = a[n - 1];
    j++;

    for(int i = 0; i < j; i++)
    {
        a[i] = arr[i];
    }

    for (int i = 0; i < j; i++)
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
        
        newArray(a, n);
    }
    
    return 0;
}
