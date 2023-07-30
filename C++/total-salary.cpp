// Problem Name: Total Salary
// Problem Level: Easy

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    // Write your code here
    double basic, allow, totalSalary, hra, da, pf;
    char grade;

    cin >> basic >> grade;

    hra = basic * 0.5;
    da = basic * 0.2;
    pf = basic * 0.11;

    if (grade == 'A')
    {
        allow = 1700;
    }
    else if (grade == 'B')
    {
        allow = 1500;
    }
    else
    {
        allow = 1300;
    }

    totalSalary = basic + hra + da + allow - pf;
    int ans = round(totalSalary);
    cout << ans;
    return 0;
}