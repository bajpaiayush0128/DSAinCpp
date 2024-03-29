#include <iostream>
using namespace std;

int fib(int n)
{
    int f[n + 1];
    f[0] = 0, f[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}

// fibonacci using matrix multipliction(divide and conquer)

int main()
{
    int n = 6;
    cout << fib(n);
    return 0;
}