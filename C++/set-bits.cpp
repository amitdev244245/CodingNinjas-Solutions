// Problem Name: Set Bits
// Problem Level: Easy
// Problem Link: https://www.codingninjas.com/studio/guided-paths/basics-of-c/content/118519/offering/1376725

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

// Write your countBits function here
int countBits(int n)
{
    int count = 0;
    while (n > 0)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    cout << countBits(n);
    return 0;
}
