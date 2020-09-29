#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100
 
int main()
{
    io;
    string name;
    cin>>name;
    ll p=1;
    for(ll i=0;i<name.size();i++)
    {
        if(name[i]!=name[i+1])
        p=1;
        else
        p++;
        if(p==7)
        {
            cout<<"YES";
            exit(0);
        }
    }
    cout<<"NO";
    exit(0);
}
