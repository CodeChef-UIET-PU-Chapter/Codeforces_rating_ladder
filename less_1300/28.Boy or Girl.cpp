#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100
 
int main()
{
    io;
    string name;
    set<char> count;
    cin>>name;
    for(ll i=0;i<name.size();i++)
    count.insert(name[i]);
    if(count.size()%2==0)
    cout<<"CHAT WITH HER!";
    else
    cout<<"IGNORE HIM!";
}
