// Problem Name: Check Prime
// Problem Level: Easy
// Problem Link: https://www.codingninjas.com/studio/problems/check-prime_624934

bool isPrime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}