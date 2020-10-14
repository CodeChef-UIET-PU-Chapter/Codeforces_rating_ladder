#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 10000000
 
int main()
{
    io;
    ll n,t1,t2;
    cin>>n;
    vector< pair<ll,ll> > coor;
    ll minx=INT_MAX,maxy=INT_MIN;
    for(ll i=0;i<n;i++)
    {
        cin>>t1>>t2;
        if(minx>t1)
        minx=t1;
        if(maxy<t2)
        maxy=t2;
        coor.push_back(make_pair(t1,t2));
    }
    for(ll i=0;i<coor.size();i++)
    {
        if(coor[i].first==minx&&coor[i].second==maxy)
        {cout<<i+1;exit(0);}
    }
    cout<<-1;
}
