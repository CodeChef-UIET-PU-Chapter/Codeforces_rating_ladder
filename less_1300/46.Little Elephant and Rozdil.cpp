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
    ll arr[n],min=INT_MAX,p=0,ans;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        if(min>arr[i])
        {
            min=arr[i];
            ans=i+1;
        }
    }
    for(ll i=0;i<n;i++)
    if(min==arr[i])
    p++;
    if(p>1)
    cout<<"Still Rozdil";
    else
    cout<<ans;
}
