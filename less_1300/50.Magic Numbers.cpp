#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100
 
int main()
{
    io;
    string n;
    cin>>n;
    bool flag=false;
    ll i=0;
    while(i<=n.size()-1)
    {
        if(n[i]=='1'&&n[i+1]=='4'&&n[i+2]=='4')
            i+=3;
        else if(n[i]=='1'&&n[i+1]=='4')
            i+=2;
        else if(n[i]=='1')
            i++;   
        else
        {
            flag=true;
            break;
        }
    }
    if(!flag)
    cout<<"YES";
  
