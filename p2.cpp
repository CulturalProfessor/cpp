#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a;
        cin>>b;
        int c=0,l=0;
        for(int i=0;i<a.length();i++)
        {
            for(int j=i+l;j<b.length()-1;j++)
            {
                if(b[j]==b[j+1]&& b[j+1]!=a[i+1])
                c++;
                if(b[j]!=b[j+1])
                {
                    l=j;
                    break;
                }
                if(a[i]==b[i+l])
            }
        }
        cout<<c<<"\n";
    }
  return 0;
}