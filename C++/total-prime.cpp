// Problem Name: Total Prime
// Problem Level: Easy

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

// Write your totalPrime function here
int isprime(int num)
{
    if (num <= 1)
        return 0;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1; // if both failed then num is prime
}
int totalPrime(int strt, int end)
{
    int count = 0;
    for (int i = strt; i <= end; i++)
    {
        if (isprime(i) == 1)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int S, E;
    cin >> S >> E;
    cout << totalPrime(S, E);
    return 0;
}