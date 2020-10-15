#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 10001
#define mod 1073741824 
 
ll a,b,c,dp[4001];
 
ll f(ll n)
{
    ll x,y,z;
    for(ll i=1;i<=n;i++)
    {
        x=y=z=-1;
        if(i>=a)
        x=dp[i-a];
        if(i>=b)
        y=dp[i-b];
        if(i>=c)
        z=dp[i-c];
        if(x==-1&&y==-1&&z==-1)
        dp[i]=-1;
        else
        dp[i]=max(max(x,y),z)+1;
    }
    return dp[n];
}
 
int main()
{
    io;
    ll n;
    cin>>n>>a>>b>>c;
    memset(dp,0,sizeof(dp));
    cout<<f(n);
    return 0;
}
