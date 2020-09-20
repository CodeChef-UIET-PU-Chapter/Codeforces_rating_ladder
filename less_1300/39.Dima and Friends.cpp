#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100
 
int main()
{
    io;
    ll n,sum=0,temp;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>temp;
        sum+=temp;
    }
    ll cnt=0;
    for(ll i=1;i<=5;i++)
    {
        if((sum+i)%(n+1)!=1)
        cnt++;    
    }
    cout<<cnt;
}
