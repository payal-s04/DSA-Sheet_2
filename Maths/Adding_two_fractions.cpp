/*
Problem 14:

You are given t number of testcases. Each testcase contains two fractions (a1, a2 and b1, b2).
Write a program to add given two fractions.

E.g.
 Input:
 1/3 3/9
 Output:
 2/3 (take numerators and denominators separately as input and give the simplified fraction of the sum as the output)
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int num1, den1, num2, den2;
        cin >> num1 >> den1 >> num2 >> den2;

        int num = (num1 * den2) + (num2 * den1);
        int den = (den1 * den2);

        for(int i = max(num, den); i >= 2; i--)
        {
            if((num % i == 0) && (den % i == 0))
            {
                num /= i;
                den /= i;
            }
        }

        cout << num << "/" << den << endl;
    }
    
    return 0;
}
