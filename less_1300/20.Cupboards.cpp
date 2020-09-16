#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100
 
int main()
{
    io;
    ll n,l,r,l0=0,l1=0,r0=0,r1=0;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>l>>r;
        if(l==0)
        l0++;
        else if(l==1)
        l1++;
        if(r==0)
        r0++;
        else
        r1++;
    }
    cout<<min(l1,l0)+min(r1,r0);
    
}
