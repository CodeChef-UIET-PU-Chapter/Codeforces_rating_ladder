#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100
 
int main()
{
    io;
    ll n,l,r,maxp=INT_MIN,num;
    cin>>n;
    cin>>l>>r;
    num=r;
    if(num>maxp)
        maxp=num;
    for(ll i=1;i<n;i++)
    {
        cin>>l>>r;
        num-=l;
        num+=r;
        if(num>maxp)
        maxp=num;
    }
    cout<<maxp;
}
