#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100
 
int main()
{
    io;
    string name1,name2;
    ll sum1=0,sum2=0;
    cin>>name1>>name2;
    transform(name1.begin(),name1.end(),name1.begin(),::tolower);
    transform(name2.begin(),name2.end(),name2.begin(),::tolower);
    bool flag=true;
    for(ll i=0;i<name1.size();i++)
    {
        if(int(name1[i])<int(name2[i]))
        {
            cout<<-1;
            flag=false;
            break;
        }
        else if(int(name1[i])>int(name2[i]))
        {
            cout<<1;
            flag=false;
            break;
        }
    }
    if(flag)
    cout<<0;
}
