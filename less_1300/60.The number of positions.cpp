#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100
 
int main()
{
    io;
    ll n,a,b;
    cin>>n>>a>>b;
    ll ans=a+1;
    if(n-ans>b)
    ans+=((n-ans)-b);
    cout<<n-ans+1;
}
