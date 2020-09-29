#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
 
int main()
{
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(ll i=0;i<n;i++) cin>>arr[i];
    for(ll i=k-1;i<n-1;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            cout<<-1;
            exit(0);
        }
    }
    for(ll i=k-1;i>=0;i--)
    {
        if(arr[i]!=arr[n-1])
        {
            cout<<i+1;
            exit(0);
        }
    }
    cout<<0;
    return 0;
}
