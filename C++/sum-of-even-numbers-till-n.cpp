// Problem Name: Sum of Even Numbers till N
// Problem Level: Easy

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