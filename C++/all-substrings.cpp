// Problem Name: All substrings
// Problem Level: Easy
// Problem Link: https://www.codingninjas.com/studio/guided-paths/basics-of-c/content/118818/offering/1381764

#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
using namespace std;

void printSubstrings(string input)
{

    // Method 1
    // for(int i=0; i<input.length(); i++){
    //     for(int j=1; j<=input.length()-i; j++){
    //         cout<<input.substr(i, j)<<endl;
    //     }
    // }

    // Method 2
    for (int i = 0; i < input.length(); i++)
    {
        string subStr;
        for (int j = i; j < input.length(); j++)
        {
            subStr += input[j];
            cout << subStr << endl;
        }
    }
}

int main()
{
    string input;
    getline(cin, input);
    printSubstrings(input);
    return 0;
}