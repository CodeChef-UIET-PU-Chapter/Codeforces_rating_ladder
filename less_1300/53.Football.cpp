#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100
 
int main()
{
    io;
    ll t;
    cin>>t;
    string n,m="123",temp;
    ll teamA=0,teamB=0;
    for(ll i=0;i<t;i++)
    {
        cin>>temp;
        if(i==0)
        {
            teamA++;
            n=temp;
        }
        else if(temp==n)
        teamA++;
        else if(m=="123")
        {
            teamB++;
            m=temp;
        }
        else if(temp==m)
        teamB++;
    }
    if(teamB>teamA)
    cout<<m;
    else
    cout<<n;
    return 0;
}
