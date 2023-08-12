// Problem Name: Star Pattern
// Problem Level: Easy
// Problem Link: https://www.codingninjas.com/studio/problems/star-pattern_893204

#include <bits/stdc++.h>

void printPattern(int n)
{
    // Write your code here.
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i * 2 - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}