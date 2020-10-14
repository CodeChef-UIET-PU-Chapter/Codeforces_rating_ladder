#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 10000000
 
int main()
{
    io;
    ll n,m,sum=0;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>m;
        sum+=m;
    }
    sum%n==0?cout<<n:cout<<n-1;
    return 0;
}
