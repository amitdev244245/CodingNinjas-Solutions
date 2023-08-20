// Problem Name: Reverse Number
// Problem Level: Easy
// Problem Link: https://www.codingninjas.com/studio/problems/reverse-of-a-number_893271

long long int reverseNumber(long long int n)
{
    long long lastDigit = 0, revNum = 0;
    while (n > 0)
    {
        lastDigit = n % 10;
        revNum = revNum * 10 + lastDigit;
        n /= 10;
    }
    return revNum;
}