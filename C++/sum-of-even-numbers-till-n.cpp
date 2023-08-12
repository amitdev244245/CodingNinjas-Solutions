// Problem Name: Sum of Even Numbers till N
// Problem Level: Easy
// Problem Link: https://www.codingninjas.com/studio/problems/sum-of-even-numbers-till-n_1381072

#include <iostream>
using namespace std;

int main()
{
    // Write your code here
    int n;
    cin >> n;
    int result = 0;
    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            result += i;
        }
    }
    cout << result;
    return 0;
}