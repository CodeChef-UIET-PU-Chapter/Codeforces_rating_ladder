#include<bits/stdc++.h>
#include<fstream>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 10000000
 
int main()
{
    io;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll n,m;
    cin>>n>>m;
    if(n==m)
    {
        for(ll i=0;i<(n+m)/2;i++)
        cout<<"BG";
    }
    else if(n>m)
    {
        for(ll i=0;i<m;i++)
        cout<<"BG";
        for(ll i=0;i<n-m;i++)
        cout<<"B";
    }
    else
    {
        for(ll i=0;i<n;i++)
        cout<<"GB";
        for(ll i=0;i<m-n;i++)
        cout<<"G";
    }
    return 0;
}
