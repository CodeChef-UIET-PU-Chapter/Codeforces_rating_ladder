#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 10001
#define mod 1073741824 
 
bool comp(pair<ll,ll> a,pair<ll,ll> b)
{
    if(a.first==b.first)
    return (a.second<b.second);
    return(a.first>b.first);
}
 
int main()
{
    io;
    ll n,k,temp1,temp2;
    cin>>n>>k;
    vector< pair<ll,ll> > teams;
    map< pair<ll,ll>, ll> freq;
    for(ll i=0;i<n;i++)
    {
        cin>>temp1>>temp2;
        teams.push_back(make_pair(temp1,temp2));
        freq[make_pair(temp1,temp2)]++;
    }
    sort(teams.begin(),teams.end(),comp);
    /*cout<<"\n";
    for(ll i=0;i<teams.size();i++)
        cout<<teams[i].first<<" "<<teams[i].second<<"\n";*/
    
    cout<<freq[make_pair(teams[k-1].first,teams[k-1].second)]<<"\n";
    //cout<<teams[k-1].first<<" "<<teams[k-1].second;
    return 0;
}
