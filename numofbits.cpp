#include <bits/stdc++.h>
using namespace std;
int unqnum(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    return xorsum;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i <= n; i++)
    {
        int c = 0;
        for (int j = i; j > 0; j = j >> 1)
        {
            if (j & 1 == 1)
                c++;
        }
        arr[i] = c;
    }
    for (int i = 0; i <= n; i++)
    {
        cout << to_string(arr[i]) + ",";
    }
    cout << "\n";
    int arr1[] = {1, 2, 3, 3,2, 5, 5};
    cout << unqnum(arr1, 7);
    return 0;
}