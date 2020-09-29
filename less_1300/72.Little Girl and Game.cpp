#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100000
vector<ll> arr[N+1];
 
int main()
{
    io;
    string s;
    cin>>s;
    map<char,ll> unique;
    for(ll i=0;i<s.size();i++)
    {
        if(unique.find(s[i])==unique.end())
        unique[s[i]]=1;
        else
        unique.erase(s[i]);
    }
    if(unique.size()==0)
    cout<<"First";
    else if(unique.size()%2==0)
    cout<<"Second";
    else
    cout<<"First";
}
