#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100
 
int main()
{
    io;
    ll n;
    cin>>n;
    ll maxnum=INT_MIN,minnum=INT_MAX,minin=INT_MAX,maxin=INT_MIN,p;
    for(ll i=0;i<n;i++)
    {
        cin>>p;
        if(maxnum<p)
        {
          maxnum=p;
          maxin=i;  
        }
        if(minnum>=p)
        {
            minnum=p;
            minin=i;
        }
    }
    if(maxin<minin)
    cout<<abs(maxin-0)+abs((n-1)-minin);
    else
    cout<<abs(maxin-0)+abs((n-1)-(minin+1));
}
