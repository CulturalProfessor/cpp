#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n = 1e6;
    int sieve[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        sieve[i] = 1;
    }
    sieve[0] = sieve[1] = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (sieve[i] == 1)
        {
            for (int j = i * i; j <= n; j = j + i)
                sieve[j] = 0;
        }
    }
    while (t--)
    {
        int q;
        cin >> q;
        int c = 0;
        for (int i = 0; i <= q; i++)
        {
            if (sieve[i] == 1)
                c++;
        }
        cout << c << "\n";
    }
    return 0;
}