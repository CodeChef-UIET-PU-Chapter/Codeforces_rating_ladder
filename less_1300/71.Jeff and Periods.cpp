#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100000
vector<ll> arr[N+1];
 
int main()
{
    io;
    ll n;
    cin>>n;
    ll temp;
    for(ll i=0;i<n;i++)
    {
        cin>>temp;
        arr[temp].push_back(i);
    }
    bool flag=true;
    ll d=0;
    vector< pair<ll,ll> > ans;
    for(ll i=1;i<=N;i++)
    {
        flag=true;
        if(arr[i].size()>1)
        {
            d=arr[i][1]-arr[i][0];
            if(d>0)
            for (ll j=1;j<arr[i].size()-1;j++)  
            {
                if(arr[i][j+1]-arr[i][j]!=d)
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
            ans.push_back(make_pair(i,d));
        }    
        else if(arr[i].size()==1)
        ans.push_back(make_pair(i,0));
    }
    cout<<ans.size()<<"\n";
    for(ll i=0;i<ans.size();i++)
    cout<<ans[i].first<<" "<<ans[i].second<<"\n";
}
