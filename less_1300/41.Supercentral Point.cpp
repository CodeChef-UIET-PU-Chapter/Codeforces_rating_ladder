#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100
 
int main()
{
    io;
    ll n;
    cin>>n;
    vector< pair<ll,ll> > points;
    ll x,y,count=0;
    bool upper=false,lower=false,left=false,right=false;
    for(ll i=0;i<n;i++)
    {
        cin>>x>>y;
        points.push_back(make_pair(x,y));
    }
    for(ll i=0;i<points.size();i++)
    {
        upper=false;
        lower=false;
        left=false;
        right=false;
        for(ll j=0;j<points.size();j++)
        {
            if(points[i].first>points[j].first&&points[i].second==points[j].second) left=true;
            if(points[i].first<points[j].first&&points[i].second==points[j].second) right=true;
            if(points[i].first==points[j].first&&points[i].second>points[j].second) lower=true;
            if(points[i].first==points[j].first&&points[i].second<points[j].second) upper=true;
        }
        if(left&&right&&lower&&upper)
        count+=1;
    }
    cout<<count;
}
