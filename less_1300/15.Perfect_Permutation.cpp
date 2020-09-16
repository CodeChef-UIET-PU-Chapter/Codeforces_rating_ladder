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
    if(n%2)
    cout<<-1;
    else
    {
        for(ll i=1;i<=n;i+=2)
        {
            cout<<i+1<<" "<<i<<" ";
        }
    }
}
