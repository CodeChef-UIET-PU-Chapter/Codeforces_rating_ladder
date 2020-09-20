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
    ll arr[n];
    ll minD=INT_MAX,a,b;
    cin>>arr[0];
    for(ll i=1;i<n;i++)
    {
        cin>>arr[i];
        if(minD>abs(arr[i-1]-arr[i]))
        {
            minD=abs(arr[i-1]-arr[i]);
            a=i;
            b=i+1;
        }
    }
    if(minD>abs(arr[n-1]-arr[0]))
    {
        a=n;
        b=1;
    }
    cout<<a<<" "<<b;
}
