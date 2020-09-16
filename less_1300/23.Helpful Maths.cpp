#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100
 
int main()
{
    io;
    string exp;
    cin>>exp;
    vector<ll> opr;
    for(ll i=0;i<exp.size();i++)
    {
        if(exp[i]!='+')
        opr.push_back(exp[i]-48);
    }
    sort(opr.begin(),opr.end());
    for(ll i=0;i<opr.size()-1;i++)
    cout<<opr[i]<<"+";
    cout<<opr[opr.size()-1];
}
