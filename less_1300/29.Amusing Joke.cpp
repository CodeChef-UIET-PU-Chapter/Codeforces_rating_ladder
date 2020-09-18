#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100
 
int main()
{
    io;
    string name1,name2,name3;
    cin>>name1>>name2>>name3;
    map<char,ll> order1,order2;
    for(ll i=0;i<name1.size();i++)
    {
        if(order1.find(name1[i])==order1.end())
        order1[name1[i]]=1;
        else
        order1[name1[i]]++;
    }
    for(ll i=0;i<name2.size();i++)
    {
        if(order1.find(name2[i])==order1.end())
        order1[name2[i]]=1;
        else
        order1[name2[i]]++;
    }
    for(ll i=0;i<name3.size();i++)
    {
        if(order2.find(name3[i])==order2.end())
        order2[name3[i]]=1;
        else
        order2[name3[i]]++;
    }
    if(order1.size()!=order2.size())
    cout<<"NO";
    else
    {
        bool flag=true;
        map<char,ll>:: iterator itr1,itr2;
        for(itr1=order1.begin(),itr2=order2.begin();itr1!=order1.end(),itr2!=order2.end();itr1++,itr2++)
        {
            if(itr1->first!=itr2->first||itr1->second!=itr2->second)
            {
                cout<<"NO";
                flag=false;
                break;
            }
        }
        if(flag)
        cout<<"YES";
    }
}
