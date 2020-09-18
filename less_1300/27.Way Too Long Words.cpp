#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100
 
int main()
{
    io;
    ll p;
    string name;
    cin>>p;
    for(ll i=0;i<p;i++)
    {
        cin>>name;
        if(name.size()>10)
        cout<<name[0]<<name.size()-2<<name[name.size()-1]<<"\n";
        else
        cout<<name<<"\n";
    }
}
