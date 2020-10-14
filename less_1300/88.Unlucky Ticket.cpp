#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 10000000
 
int main()
{
    io;
    ll n;
    string num;
    cin>>n>>num;
    vector<ll> first,second;
 
    for(ll i=0;i<n;i++)
    first.push_back(num[i]-'0');
    
    for(ll i=n;i<2*n;i++)
    second.push_back(num[i]-'0');
    /*for(ll i=0;i<n;i++)
    {
        cout<<first[i]<<" ";
    }
    cout<<"\n";
    for(ll i=0;i<n;i++)
    {
        cout<<second[i]<<" ";
    }
    cout<<"\n";*/
    sort(first.begin(),first.end());
    sort(second.begin(),second.end());
    if(first[0]>second[0])
    {
        bool flag=true;
        for(ll i=0;i<first.size();i++)
        {
            if(first[i]<=second[i])
            {
                flag=false;
                break;
            }
        }
        if(flag)
        cout<<"YES";
        else
        cout<<"NO";
    }
    else if(first[0]<second[0])
    {
        bool flag=true;
        for(ll i=0;i<first.size();i++)
        {
            if(first[i]>=second[i])
            {
                flag=false;
                break;
            }
        }
        if(flag)
        cout<<"YES";
        else
        cout<<"NO";
    }
    else
    cout<<"NO";
}
