#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 10000000
 
int main()
{
    io;
    ll y,k,n;
    cin>>y>>k>>n;
    vector<ll> ans;
    for(ll i=(y/k)+1;i<=n/k;i++)
    {
        ans.push_back(k*i-y);
    }
    if(ans.size()==0)
    cout<<-1;
    else
    {
        sort(ans.begin(),ans.end());
        for(ll i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    }
}
