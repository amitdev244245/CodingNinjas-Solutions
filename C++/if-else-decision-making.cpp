// Problem Name: if-else (Decision Making)
// Problem Level: Easy
// Problem Link: https://www.codingninjas.com/studio/problems/if-else-decision-making_8357235

/*
    Time complexity: O(1)
    Space complexity: O(1)
*/

#include <iostream>
using namespace std;

string compareIfElse(int a, int b)
{

    if (a > b)
        return "greater";
    else if (a < b)
        return "smaller";
    else
        return "equal";
}