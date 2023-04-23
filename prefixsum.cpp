#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long ps[n];
    ps[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        ps[i] = ps[i - 1] + a[i];
    }
    int q;
    cin >> q;
    for (int i = 0; i < n; i++)
    {
        cout << ps[i] << "\t";
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        long long sum;
        if (l != 1)
            sum = ps[r - 1] - ps[l - 2];
        else
            sum = ps[r - 1];
        cout << sum << "\n";
    }
    return 0;
}