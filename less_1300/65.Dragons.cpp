#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100
 
 
int main()
{
    io;
    ll s,n,temp1,temp2;
    cin>>s>>n;
    map<ll,ll> game;
    for(ll i=0;i<n;i++)
    {
        cin>>temp1>>temp2;
        if(game.find(temp1)==game.end())
        game[temp1]=temp2;
        else
        game[temp1]+=temp2;
    }
    map<ll,ll>::iterator itr;
    for(itr=game.begin();itr!=game.end();itr++)
    {
        if(s>itr->first)
        s+=itr->second;
        else
        {
            //cout<<"s: "<<s<<" ";
            //cout<<itr->first<<" "<<itr->second<<"\n";
            cout<<"NO";
            exit(0);
        }
    }
    cout<<"YES";
    exit(0);
}
