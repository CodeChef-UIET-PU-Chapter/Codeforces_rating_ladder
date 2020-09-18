#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100
 
int main()
{
    io;
    ll n,q,scnt=0,pcnt=0,temp;
    cin>>n;
    map<ll,ll> index;
    for(ll i=0;i<n;i++)
    {
        cin>>temp;
        index[temp]=i+1;
    }
    cin>>q;
    for(ll i=0;i<q;i++)
    {
        cin>>temp;
        scnt+=index[temp];
        pcnt+=n-index[temp]+1;
    }
    cout<<scnt<<" "<<pcnt;
 
}
