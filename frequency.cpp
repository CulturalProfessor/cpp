#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

    map<int, int> q;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        q[a[i]]++;
    }
    int sum=0;
    for (auto i : q)
    {
        sum=sum+i.second;
    }
    cout<<sum<<"\n";
    }
    return 0;
}
