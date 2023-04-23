#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long g = a[0];
        for (int i = 0; i < n; i++)
        {
            g = __gcd(a[i], g);
        }
        cout << g << "\n";
    }
    return 0;
}