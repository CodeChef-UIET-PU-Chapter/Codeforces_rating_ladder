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
    for(ll i=0;i<n+1;i++)
    {
        for(ll j=n-i;j>=1;j--)
        cout<<"  ";
        if(i!=0)
        for(ll k=0;k<i+1;k++)
        cout<<k<<" ";
        for(ll k=i-1;k>0;k--)
        cout<<k<<" ";
        cout<<0;
        cout<<"\n";
    }
    for(ll i=n-1;i>=0;i--)
    {
        cout<<"  ";
        for(ll j=(n-1)-i;j>=1;j--)
        cout<<"  ";
        if(i!=0)
        for(ll k=0;k<i+1;k++)
        cout<<k<<" ";
        for(ll k=i-1;k>0;k--)
        cout<<k<<" ";
        cout<<0;
        cout<<"\n";
    }
}
