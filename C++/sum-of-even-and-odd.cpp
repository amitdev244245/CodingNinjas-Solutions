// Problem Name: Sum of even & odd
// Problem Level: Easy
// Problem Link: https://www.codingninjas.com/studio/problems/sum-of-even-odd_1381076

#include <iostream>
using namespace std;

int main()
{
    // Write your code here
    int n;
    cin >> n;
    int soe = 0, soo = 0;
    while (n > 0)
    {
        int temp = n % 10;
        (temp % 2 == 0) ? (soe += temp) : (soo += temp);
        n = n / 10;
    }
    cout << soe << " " << soo;
    return 0;
}