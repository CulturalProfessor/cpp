
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int q;
    cin >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int p = 0, low = 0, high = n, mid = n / 2;
    while (low <= high)
    {
        if(a[mid]*a[mid]<=n)
        {
            low=mid+1;
            ans=mid;
        }
    }
    cout << p;
    return 0;
}
