#include<bits/stdc++.h>
using namespace std;
int main()
{
    map <int ,string> m;
    m[1]="abc";
    m[2]="cdc";
    m[3]="adc";
    m.insert({4,"afg"});
    // map <int,string> :: iterator it;
    // for(it=m.begin();it!=m.end();++it)
    // {
    //     cout<<(*it).first <<" "<<(*it).second<<endl;
    // }
    for(auto &pr :m)
    {
        cout<<pr.first <<" "<<pr.second<<endl;
    }
  return 0;
}