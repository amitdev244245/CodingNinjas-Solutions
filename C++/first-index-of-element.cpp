// Problem Name: First index of element
// Problem Level: Easy

#include <iostream>
using namespace std;

int main()
{
    int n, find, result = -1;
    cin >> n;
    int arr[n];

    // get inputs of array elements
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // get input for finding index of which element
    cin >> find;

    // finding first index and break out from loop
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == find)
        {
            result = i;
            break;
        }
    }

    // print the result
    cout << result;

    return 0;
}