// Problem Name: Check Armstrong
// Problem Level: Easy
// Problem Link: https://www.codingninjas.com/studio/problems/check-armstrong_589

bool checkArmstrong(int n)
{
    int numberOfDigits = (int)(log10(n) + 1), lastDigit, sum = 0, originalNum = n;
    while (n > 0)
    {
        lastDigit = n % 10;
        sum += pow(lastDigit, numberOfDigits);
        n /= 10;
    }
    return sum == originalNum;
}