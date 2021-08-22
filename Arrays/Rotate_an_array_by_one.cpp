/*
Problem 8:

You are given t number of testcases. Each testcase contains size of element n and next line contains n elements of array a.
Rotate the given array by one position in clock-wise direction.

E.g.
 Input:
 5
 1 2 4 6 7
 Output:
 7 1 2 4 6
*/

#include<iostream>
using namespace std;

void rotate(int a[], int n)
{
    int k = a[n - 1];
    
    for(int i = n - 2; i >= 0; i--)
    {
        a[i + 1] = a[i];
    }
    
    a[0] = k;
}

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        rotate(a, n);
        
        for(int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl;
    }
    
    return 0;
}
