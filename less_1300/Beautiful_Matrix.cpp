#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100000000
#define limit 10000
 
int main()
{
    io;
    ll p,q,i,j,x;
    for(i=1;i<=5;i++)
    for(j=1;j<=5;j++)
    {    
        cin>>x;
        if(x==1)
        {
            p=i;q=j;
            break;
        }        
    }    
    cout<<abs(p-3)+abs(q-3);
}