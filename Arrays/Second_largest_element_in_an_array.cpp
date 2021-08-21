/*
Problem 1:

You are given an array of n elements a[n]. Your task is to find the second maximum element in the array.
If second maximum element does not exist return -1.

E.g.
 Input:
 6
 1 3 2 9 4 3
 Output:
 4

 Input:
 5
 1 1 1 1 1
 Output:
 -1
*/

#include <iostream>
using namespace std;

int secondLargest(int a[], int n)
{
    int num1 = -1, num2 = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > num1)
        {
            num2 = num1;
            num1 = a[i];
        }
        else if (a[i] > num2 && a[i] < num1)
        {
            num2 = a[i];
        }
    }
    return num2;
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << secondLargest(a, n) << endl;
    
    return 0;
}
