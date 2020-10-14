#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 10000000
 
int main()
{
    io;
    ll n,m;
    cin>>n>>m;
    ll temp1,temp2;
    ll maxr=INT_MIN,minr=INT_MAX,minw=INT_MAX;
    for(ll i=0;i<n;i++)
    {
       cin>>temp1;
       if(maxr<temp1)
       maxr=temp1;
       if(minr>temp1)
       minr=temp1; 
    }
    for(ll i=0;i<m;i++)
    {
        cin>>temp2;
        if(minw>temp2)
        minw=temp2;
    }
    //cout<<minr;
    if(max(2*minr,maxr)<minw)
    cout<<max(2*minr,maxr);
    else
    cout<<-1;
    return 0;
}
