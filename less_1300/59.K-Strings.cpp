#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100
 
int main()
{
    io;
    ll k;
    string name;
    cin>>k;
    cin>>name;
    map<char,ll> letter;
    for(ll i=0;i<name.size();i++)
    {
        if(letter.find(name[i])==letter.end())
        letter[name[i]]=1;
        else
        letter[name[i]]++;
    }
    map<char,ll>::iterator itr;
    for(itr=letter.begin();itr!=letter.end();itr++)
    {
        if(itr->second%k!=0)
        {
            cout<<-1;
            exit(0);
        }    
    }
    for(ll i=0;i<k;i++)
    {
        for(itr=letter.begin();itr!=letter.end();itr++)
        {
            for(ll j=0;j<itr->second/k;j++)
            cout<<itr->first;
        }
    }
    return 0;
}
