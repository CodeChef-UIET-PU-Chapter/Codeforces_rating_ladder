#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int main()
{
    io;
    ll n,temp;
    cin>>n;
    map<ll,ll> ans;
    ans[100]=0;
    ans[200]=0;
    for(ll i=0;i<n;i++)
    {
        cin>>temp;
        ans[temp]++;
    }
    ans[200]=ans[200]%2;
    if(ans[200]==1&&ans[100]==0)
    cout<<"NO";
    else if(ans[200]%2==0&&ans[100]%2==0)
    cout<<"YES";
    else if(ans[200]==1&&ans[100]%2==0)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}
