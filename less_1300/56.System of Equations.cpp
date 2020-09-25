#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100
 
bool isint(float a)
{
    if(ceil(a)-floor(a)==0)
        return true;
    else 
    return false;
}
 
int main()
{
    io;
    ll n,m;
    cin>>n>>m;
    ll arr[n];
    for(ll i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    ll sum=0;
    for(ll i=0;i<m;i++)
    {
        if(arr[i]<0)
        sum+=abs(arr[i]);
    }
    cout<<sum;
    return 0;
}
