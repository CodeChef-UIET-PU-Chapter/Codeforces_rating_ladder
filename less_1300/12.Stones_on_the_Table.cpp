#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100000000
#define limit 10000
 
int main()
{
    io;
    int n,cnt=0;
    cin>>n;
    char stones[n];
    for(ll i=0;i<n;i++) cin>>stones[i];
    for(ll i=0;i<n-1;i++)
    {
        if(stones[i]==stones[i+1])
        cnt++;
    }
    cout<<cnt<<"\n";    
}
