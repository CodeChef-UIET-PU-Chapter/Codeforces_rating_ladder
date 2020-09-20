#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100
 
int main()
{
    io;
    ll n,m;
    cin>>n>>m;
    ll arr[m];
    for(ll i=0;i<m;i++) cin>>arr[i];
    ll turn=1,ans=0;
    for(ll i=0;i<m;i++)
    {
        //cout<<ans<<"\n";
        if(turn<=arr[i])
        {
            ans+=arr[i]-turn;
            turn=arr[i];
        }
        else
        {
            ans+=n-turn;
            ans++;
            ans+=arr[i]-1;
            turn=arr[i];
        }
        //cout<<ans<<"\n";
    }    
    cout<<ans;
}
