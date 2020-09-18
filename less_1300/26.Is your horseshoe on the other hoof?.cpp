#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100
 
int main()
{
    io;
    ll p,cnt=0;
    map<ll,ll> count;
    for(ll i=0;i<4;i++)
    {
        cin>>p;
        if(count.find(p)==count.end())
        count[p]=1;
        else
        count[p]++;
    }
    map<ll,ll>::iterator itr;
    for(itr=count.begin();itr!=count.end();itr++)
    cnt+=(itr->second-1);
    cout<<cnt;
}
