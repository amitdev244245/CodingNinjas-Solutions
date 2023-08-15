// Problem Name: Switch Case statement
// Problem Level: Easy
// Problem Link: https://www.codingninjas.com/studio/problems/switch-case-statement_8357244

/*
    Time complexity: O(1)
    Space complexity: O(1)
*/

#include <iostream>
using namespace std;

double areaSwitchCase(int ch, vector<double> a)
{
    switch (ch)
    {
    case 1:
        return 3.14159265359 * a[0] * a[0];
        break;
    case 2:
        return a[0] * a[1];
        break;
    }
}
