#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100
 
int main()
{
    io;
    ll n;
    string ed;
    cin>>n;
    ll x=0;
    for(ll i=0;i<n;i++)
    {
        cin>>ed;
        if((ed[0]=='X'&&ed[1]=='+')||ed[0]=='+')
        x++;
        else
        x--;
    }
    cout<<x;
}
