// Problem Name: Find power of a number
// Problem Level: Easy

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    // Write your code here
    int x, n, result = 1;
    cin >> x >> n;
    for (int i = 1; i <= n; i++)
    {
        result = result * x;
    }
    cout << result;
    return 0;
}