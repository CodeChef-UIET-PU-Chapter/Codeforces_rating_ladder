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
    bool flag=false;
    for(ll i=0;i<name.size();i++)
    {
        if(name[i]=='H'||name[i]=='Q'||name[i]=='9')
        {
            flag=true;
            break;
        }
    }
    if(flag)
    cout<<"YES";
    else
    cout<<"NO";
}
