// Problem Name: Count Words
// Problem Level: Easy
// Problem Link: https://www.codingninjas.com/studio/guided-paths/basics-of-c/content/118818/offering/1381763

#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
using namespace std;

int countWords(string input)
{
    // Write your code here
    if (input.size() == 0)
        return 0;
    int count = 1;
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == ' ')
            count += 1;
    }
    return count;
}

int main()
{
    string input;
    getline(cin, input);
    int output = countWords(input);
    cout << output << endl;
    return 0;
}