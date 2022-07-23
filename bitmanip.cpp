#include<bits/stdc++.h>
using namespace std;
int getbit(int n,int i)
{
return (n&(1<<i)!=0);
}
int setbit(int n,int i)
{
    return (n|(1<<i));
}
int clearbit(int n,int i)
{
    return(n&(~(1<<i)));
}
int updatebit(int n,int i,int value)
{
    int clearbit=(~(1<<i));
    n=n&clearbit;
    return (n|(value<<i));
}
int main()
{
    cout<<getbit(7,3)<<"\n";
    cout << setbit(5,1) << "\n";
    cout << clearbit(7, 2) << "\n";
    cout << updatebit(5, 1,1) << "\n";

    return 0;
}