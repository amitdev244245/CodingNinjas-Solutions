// Problem Name: Triangle Star Pattern
// Problem Level: Easy
// Problem Link: https://www.codingninjas.com/studio/problems/triangle-star-pattern_626546

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}