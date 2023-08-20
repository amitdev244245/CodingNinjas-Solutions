// Problem Name: Count Digits
// Problem Level: Easy
// Problem Link: https://www.codingninjas.com/studio/problems/count-digits_8416387

#include <bits/stdc++.h>
int countDigits(int n)
{
    int count = 0, num = n;
    while (n > 0)
    {
        int ld = n % 10;
        if (ld != 0)
            count += num % ld == 0;
        n /= 10;
    }
    return count;
}