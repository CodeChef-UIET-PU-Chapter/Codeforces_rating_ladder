#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 10001
#define mod 1073741824 
 
int main()
{
    io;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll n,temp;
    cin>>n;
    map<ll,vector<ll> > ans;
    for(ll i=1;i<=2*n;i++)
    {
        cin>>temp;
        ans[temp].push_back(i);
    }
    map<ll,vector<ll> >::iterator itr;
    for(itr=ans.begin();itr!=ans.end();itr++)
    {
        if((itr->second).size()%2!=0)
        {
            cout<<-1;
            exit(0);
        }
    }
    ll k=0;
    for(itr=ans.begin();itr!=ans.end();itr++)
    {
        k=0;
        for(ll i=0;i<(itr->second).size();i++)
        {
            cout<<itr->second[i]<<" ";
            k++;
            if(k==2)
            {
                cout<<"\n";
                k=0;
            }    
        }
    }
    return 0;
}
