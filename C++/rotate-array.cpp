// Problem Name: Rotate array
// Problem Level: Easy

#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n;
    int arr[n];

    // get inputs of array elements
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> k;

    for (int i = k; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}