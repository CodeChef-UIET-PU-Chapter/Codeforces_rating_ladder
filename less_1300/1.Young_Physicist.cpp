#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100000000
#define limit 10000
 
int main()
{
    io;
    ll test_case,x,y,z,sumX=0,sumY=0,sumZ=0;
    cin>>test_case;
    while(test_case--)
    {
            cin>>x>>y>>z;
            sumX+=x;
            sumY+=y;
            sumZ+=z;
    }
    if(sumX==0&&sumY==0&&sumZ==0)
    cout<<"YES";
    else
    cout<<"NO";
}