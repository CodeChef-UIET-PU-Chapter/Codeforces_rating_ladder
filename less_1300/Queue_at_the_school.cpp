#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100000000
#define limit 10000
 
int main()
{
    io;
    ll n,t,temp,d;
    cin>>n>>t;
    char c;
    char arr[n];
    vector<ll> boys,girls;
    for(ll i=0;i<n;i++)
    {
        cin>>c;
        if(c=='G')
        girls.push_back(i);
        else
        boys.push_back(i);
    }
    if(girls.size()==0)
    {
        for(ll i=0;i<boys.size();i++)
        cout<<"B";
    }
    else if(boys.size()==0)
    {
        for(ll i=0;i<girls.size();i++)
        cout<<"G";
    }
    else
    {
        for(ll i=0;i<t;i++)
        {
            for(ll j=0;j<boys.size();j++)
            {
                temp=boys[j];
                d=upper_bound(girls.begin(),girls.end(),temp)-girls.begin();
                if(temp-girls[d]==-1)
                {
                    if(boys[j]!=n-1)
                    boys[j]++;
                    if(girls[d]!=0)
                    girls[d]--;
                }
            }
        }
        for(ll i=0;i<girls.size();i++)
        arr[girls[i]]='G';
        for(ll i=0;i<boys.size();i++)
        arr[boys[i]]='B';
        for(ll i=0;i<n;i++)
        cout<<arr[i];
    }
}