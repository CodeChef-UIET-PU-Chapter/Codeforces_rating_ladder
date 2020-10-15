#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 1000000000000
#define mod 1073741824 
 
 
int main()
{
    io;
    ll test_case;
    //cin>>test_case;
    test_case=1;
    while(test_case--)
    {
        ll n,m;
        cin>>n>>m;
        ll temp;
        map<ll,ll> order;
        ll ans[n+1];
        ll arr[n];
        for(ll i=0;i<n;i++)
        cin>>arr[i];
        for(ll i=n;i>0;i--)
        {
            if(order.find(arr[i-1])==order.end())
            {
                if(i==n)
                ans[i]=1;
                else
                ans[i]=ans[i+1]+1;
                order[arr[i-1]]=1;
            }
            else
            ans[i]=ans[i+1];
        }
        ll q;
        for(ll i=0;i<m;i++)
        {
            cin>>q;
            cout<<ans[q]<<"\n";
        }
    }            
    return 0;
}
