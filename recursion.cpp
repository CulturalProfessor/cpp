#include <bits/stdc++.h>
using namespace std;
long long f(int n)
{
    if(n==1)
    return 1;
    else
    return n*f(n-1);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    long long result=f(n);
    cout<<result<<"\n";
    }
    return 0;
}