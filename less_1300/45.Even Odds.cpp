#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100
 
int main()
{
    io;
    ll n,k;
    cin>>n>>k;
    ll p;
    if(n%2==0)
    {
        if(k<=n/2)
        cout<<2*k-1;
        else
        {
            p=n/2;
            cout<<2*(k-p);    
        }    
    }
    else
    {
        if(k<=(n/2)+1)
        cout<<2*k-1;
        else
        {
            p=n/2;
            p++;
            cout<<2*(k-p);    
        }
    }
}
