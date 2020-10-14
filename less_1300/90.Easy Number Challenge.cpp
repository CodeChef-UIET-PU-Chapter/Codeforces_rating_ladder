#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 1000001
#define mod 1073741824 
  
int main()
{
    io;
    ll a,b,c;
    cin>>a>>b>>c;
    ll m= a*b*c;
    ll arr[m+1];
    memset(arr,0,sizeof(arr));
    for(ll i=1;i<=m;i++)
    {
        for(ll j=i;j<=m;j+=i)
        arr[j]++;
    }
    ll sum=0;
    for(ll i=1;i<=a;i++)
    {
        for(ll j=1;j<=b;j++)
        {
            for(ll k=1;k<=c;k++)
            {
                sum=(sum%mod+arr[i*j*k]%mod)%mod;
                /*cout<<"i j k "<<i<<" "<<j<<" "<<k<<"\n";
                cout<<"arr: "<<arr[i*j*k]<<"\n";
                cout<<"sum: "<<sum<<"\n";
                cout<<"\n";*/
            }
        }
    }
    cout<<sum;
    return 0;
}
