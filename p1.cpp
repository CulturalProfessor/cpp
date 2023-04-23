#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int p=0,b=0;
    for(int i=0;i<n-1;i=i+2)
    {
        b=a[i]^a[i+1];
        if(b==1)
     {
            break;
            p=i;
     }
    }
    cout<<a[p];
    return 0;
}