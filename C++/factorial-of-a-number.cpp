// Problem Name: Factorial of a Number
// Problem Level: Easy

#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}

int main()
{
    // Write your code here
    int n;
    cin >> n;
    if (n < 0)
    {
        cout << "Error";
    }
    else
    {
        cout << fact(n);
    }
    return 0;
}