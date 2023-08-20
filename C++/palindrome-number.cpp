// Problem Name: Palindrome number
// Problem Level: Easy
// Problem Link: https://www.codingninjas.com/studio/problems/palindrome-number_624662

bool palindrome(int n)
{
    int lastDigit = 0, revNum = 0, num = n;
    while (n > 0)
    {
        lastDigit = n % 10;
        revNum = revNum * 10 + lastDigit;
        n = n / 10;
    }
    return revNum == num;
}