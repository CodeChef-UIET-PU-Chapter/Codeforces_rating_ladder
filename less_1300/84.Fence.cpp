#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 10000000
 
int main()
{
    io;
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(ll i=0;i<n;i++) cin>>arr[i];
    ll minsum=0,index=0,sum=0;
    /*if(k==1)
    {
        ll minsum=INT_MAX;
        for(ll i=0;i<n;i++)
        {
            if(minsum>arr[i])
            {
                minsum=arr[i];
                index=i;
            }
        }
    }*/
    //else
    for(ll i=0;i<k;i++)
    {
        minsum+=arr[i];
        sum+=arr[i];
    }    
    for(ll i=0;i<n-k;i++)
    {
        sum=sum-arr[i]+arr[i+k];
        if(minsum>sum)
        {
            minsum=sum;
            index=i+1;
        }
    }
    /*if(k==1)
    {
        ll mins=INT_MAX;
        for(ll i=0;i<n;i++)
        {
            if(mins>arr[i])
            {
                mins=arr[i];
                index=i;
            }
        }
    }*/
    cout<<index+1;
    return 0;
}
