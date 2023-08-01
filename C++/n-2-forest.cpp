// Problem Name: N/2-Forest
// Problem Level: Easy

void nForest(int n)
{
    // Write your code here.
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}