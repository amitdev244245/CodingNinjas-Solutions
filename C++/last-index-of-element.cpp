// Problem Name: Last index of element
// Problem Level: Easy

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n, find, last = -1;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> find;

    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == find)
        {
            last = i;
            break;
        }
    }

    cout << last;

    return 0;
}