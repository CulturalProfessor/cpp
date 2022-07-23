#include <bits/stdc++.h>
using namespace std;
int numberofones(int n)
{
    int c = 0;
    while (n)
    {
        n = n & (n - 1);
        c++;
    }
    return c;
}
void powoftwo(int n)
{
    if ((n & (n - 1)) == 0)
        cout << "power of two\n";
    else
        cout << "no\n";
}
void subsets(int arr[], int n)
{
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << arr[j] << " ";
            }
        }
        cout << "\n";
    }
}
int main()
{
    int n;
    cin >> n;
    powoftwo(n);
    cout << numberofones(n)<<"\n";
    int arr[] = {1, 2, 3, 4};
    int s = 4;
    subsets(arr, s);
    return 0;
}