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
    ll n5=0,n0=0;
    ll temp;
    for(ll i=0;i<n;i++)
    {
        cin>>temp;
        if(temp==5)
        n5++;
        else
        n0++;
    }
    if(n0==0)
    {cout<<-1;exit(0);}
    bool flag=true;
    for(ll i=0;i<(n5-n5%9);i++)
    {
        cout<<5;
        flag=false;
    }
    if(flag)
    n0=1;
    for(ll i=0;i<n0;i++)
    cout<<0;    
}
