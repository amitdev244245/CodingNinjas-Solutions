// Problem Name: Total Salary
// Problem Level: Easy
// Problem Link: https://www.codingninjas.com/studio/problems/total-salary_893200

#include <bits/stdc++.h>
int totalSalary(int basic, char grade)
{
    double allow, totalSalary, hra, da, pf;

    hra = basic * 0.5;
    da = basic * 0.2;
    pf = basic * 0.11;

    if (grade == 'A')
        allow = 1700;
    else if (grade == 'B')
        allow = 1500;
    else
        allow = 1300;

    totalSalary = basic + hra + da + allow - pf;
    int ans = round(totalSalary);

    return ans;
}