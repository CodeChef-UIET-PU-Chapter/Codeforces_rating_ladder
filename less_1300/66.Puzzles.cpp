#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100
 
 
int main()
{
    io;
    ll n,k;
    cin>>n>>k;
    ll arr[k];
    for(ll i=0;i<k;i++) cin>>arr[i];
    sort(arr,arr+k);
    ll minD=INT_MAX;
    for(ll i=0;i<k;i++)
    {
        if(i+n-1>k-1)
        break;
        if(minD>arr[i+n-1]-arr[i])
        {
            //cout<<arr[i+n-1]<<" "<<arr[i]<<"\n";
            minD=arr[i+n-1]-arr[i]; 
        }       
    }
    cout<<minD;
}
