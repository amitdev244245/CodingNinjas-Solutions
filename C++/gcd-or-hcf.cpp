// Problem Name: GCD or HCF
// Problem Level: Easy
// Problem Link: https://www.codingninjas.com/studio/problems/hcf-and-lcm_840448

int calcGCD(int n, int m)
{
    while (n > 0 && m > 0)
    {
        if (n > m)
            n %= m;
        else
            m %= n;
    }
    return (n == 0) ? m : n;
}