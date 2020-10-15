#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 10001
#define mod 1073741824 
 
int main()
{
    io;
    ll n,sum=0;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    for(ll i=1;i<=n;i++)
    {
        if(arr[i-1]!=i)
        sum+=abs(arr[i-1]-i);
    }
    cout<<sum;
    return 0;
}
