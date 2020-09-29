#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100
 
ll combi(ll n)
{
    return n*(n-1)/2;
}
 
int main()
{
    io;
    ll n;
    cin>>n;
    map<ll,ll> m;
    ll arr[n];
    for(ll i=0;i<n;i++) cin>>arr[i];
    for(ll i=0;i<n;i++) m[arr[i]]++;
    if(m.size()==1)
    {cout<<0<<" "<<combi(m[arr[0]]);}
    else
    {map<ll,ll>::iterator itr,itr1;
    itr=m.begin();
    itr1=m.end();
    itr1--;
    ll diff=itr1->first-itr->first;
    //cout<<diff<<"\n";
    ll count=0;
    for(ll i=0;i<n;i++)
    {
        count+=m[diff+arr[i]];
        if(diff+arr[i]==arr[i])
        count--;
        //cout<<count<<"\n";
    }
    cout<<diff<<" "<<count;}
    return 0;
}
