// Problem Name: Print all Divisors of a number
// Problem Level: Easy
// Problem Link 1: https://www.codingninjas.com/studio/problems/print-all-divisors-of-a-number_1164188
// Problem Link 2: https://www.codingninjas.com/studio/guided-paths/basics-of-c/content/118519/offering/1376722

// #include <iostream>
// using namespace std;

vector<int> printDivisors(int n)
{
    // Write your code here
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            ans.push_back(i);
        }
    }
    return ans;
}