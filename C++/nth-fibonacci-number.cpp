// Problem Name: Nth Fibonacci Number
// Problem Level: Easy
// Problem Link: https://www.codingninjas.com/studio/problems/nth-fibonacci-number_74156

/*
    ime complexity: O(2^N)
    Space complexity: O(N)
    Where 'N' reprents the "Nth" number .
*/

#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    if (n <= 1)
        return n;
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    /*
     *  Write your code here.
     *  Read input as specified in the question.
     *  Print output as specified in the question.
     */
    int n;
    cin >> n;
    cout << fibo(n);
    return 0;
}