#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100
 
int main()
{
    io;
    ll k,sum=0;
    cin>>k;
    ll arr[12];
    for(ll i=0;i<12;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    if(k==0)
    cout<<0;
    else if(sum<k)
    cout<<-1;
    else
    {
        sum=0;
        sort(arr,arr+12,greater<ll>());
        ll len=0;
        for(ll i=0;i<12;i++)
        {
            //cout<<arr[i]<<"\n";
            sum+=arr[i];
            len++;
            if(sum>=k)
            break;
        }
        cout<<len;
    }
    return 0;
}
