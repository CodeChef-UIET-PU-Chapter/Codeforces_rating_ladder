#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100
 
int main()
{
    io;
    ll n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    ll netdrink=k*l/nl,netlime=c*d,netsalt=p/np;
    ll min1=min(netdrink,netlime);
    min1=min(min1,netsalt);
    cout<<min1/n;
}
