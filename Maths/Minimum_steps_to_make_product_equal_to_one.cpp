/*
Problem 17:

Given an array arr[] containing N integers. In one step, any element of the array can either be increased or decreased by one.
Find minimum steps required such that the product of the array elements becomes 1.

E.g.
 Input:
 3
 -2 4 0
 Output:
 5
*/

#include <iostream>
using namespace std;

int Steps(int n, int a[])
{
    int count = 0, countMin = 0, countZero = 0;

    for (int i = 0; i < n; i++)
    {
        if(a[i] <= -1)
        {
            count += (-1 - a[i]);
            countMin++;
        }
        else if(a[i] >= 1)
        {
            count += (a[i] - 1);
        }
        else if(a[i] == 0)
        {
            countZero++;
        }
    }
    
    if(countMin % 2 != 0 && countZero == 0)
    {
        count += 2;
    }

    return (count + countZero);
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

    cout << Steps(n, a) << endl;
    
    return 0;
}
