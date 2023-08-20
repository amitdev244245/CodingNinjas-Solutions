// Problem Name: Number of Digits
// Problem Level: Easy
// Problem Link: https://www.codingninjas.com/studio/problems/number-of-digits_4538242

// Method 1
int countDigit(long long x)
{
    return int(log10(x) + 1);
}

// Method 2
#include <bits/stdc++.h>
int countDigit(long long x)
{
    // Write your code here.
    int count = 0;
    while (x > 0)
    {
        count++;
        x /= 10;
    }
    return count;
}
