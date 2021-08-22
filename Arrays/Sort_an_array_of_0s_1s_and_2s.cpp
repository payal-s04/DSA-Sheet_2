/*
Problem 10:

Given an array of size n containing only 0s, 1s, and 2s, sort the array in ascending order.

E.g.
 Input:
 5
 1 0 2 0 2
 Output:
 0 0 1 2 2
*/

#include <iostream>
using namespace std;

void Sort(int a[], int n)
{
    int countZero = 0, countOne = 0, countTwo = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            countZero++;
        }
        else if (a[i] == 1)
        {
            countOne++;
        }
        else
        {
            countTwo++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i < countZero)
        {
            a[i] = 0;
        }
        else if (i >= countZero && i < countZero + countOne)
        {
            a[i] = 1;
        }
        else
        {
            a[i] = 2;
        }
    }
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
    
    Sort(a, n);

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
}
