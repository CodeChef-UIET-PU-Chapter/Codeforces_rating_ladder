#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100
 
int main()
{
    io;
    ll n;
    cin>>n;
    ll arr[7],sum=0,turn=0;
    for(ll i=1;i<=7;i++)
    cin>>arr[i];
    while(sum<n)
    {
        sum+=arr[turn+1];
        turn++;
        turn=turn%7;
    }
    if(turn==0)
    cout<<7;
    else 
    cout<<turn;
}
