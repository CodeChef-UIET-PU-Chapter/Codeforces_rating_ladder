#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100
 
int main()
{
    io;
    ll n,m,temp;
    cin>>n>>m;
    vector<ll> child;
    vector<ll> ans;
    for(ll i=0;i<n;i++)
    {
        cin>>temp;
        child.push_back(temp);
        ans.push_back(i+1);
    }
    temp=0;
    while(child.size()>1)
    {
        if(child[0]-m<=0)
        {
            child.erase(child.begin());
            ans.erase(ans.begin());
        }    
        else
        {
            child.push_back(child[0]-m);
            child.erase(child.begin());
            ans.push_back(ans[0]);
            ans.erase(ans.begin());
        }
    }
    cout<<ans[0];
}
