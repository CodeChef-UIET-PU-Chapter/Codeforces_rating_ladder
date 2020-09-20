#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100
 
int main()
{
    io;
    ll a,b,c,l,t,h;
    cin>>a>>b>>c;
    t=sqrt((c*b)/a);
    l=t*a/b;
    h=b/t;
    ll ans=(t*4+l*4+h*4);
    cout<<ans;
    return 0;
}
