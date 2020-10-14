#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 10000000
 
int main()
{
    io;
    string num;
    cin>>num;
    ll i=INT_MIN;
    for(i=0;i<num.size();i++)
    {
        if(num[i]=='0')
        break;
    }
    if(i!=num.size())
    for(ll j=0;j<num.size();j++)
    {
        if(j==i)
        continue;
        else
        cout<<num[j];
    }
    else
    for(ll j=0;j<num.size()-1;j++)
        cout<<num[j];
}
