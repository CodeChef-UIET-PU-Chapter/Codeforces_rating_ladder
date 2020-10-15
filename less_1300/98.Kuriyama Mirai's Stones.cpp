#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 10001
#define mod 1073741824 
 
int main()
{
    io;
    ll test_case;
    //cin>>test_case;
    test_case=1;
    while(test_case--)
    {
        ll n,temp;
        cin>>n;
        vector<ll> stones,sorst;
        ll dp[n+1],sp[n+1];
        dp[0]=0;
        sp[0]=0;
        for(ll i=0;i<n;i++)
        {
            cin>>temp;
            stones.push_back(temp);
            if(i==0)
            dp[i+1]=stones[i];
            else
            dp[i+1]=dp[i]+stones[i];
            sorst.push_back(temp);
        }
        sort(sorst.begin(),sorst.end());
        sp[1]=sorst[0];
        for(ll i=0;i<n;i++)
        sp[i+1]=sp[i]+sorst[i];
        ll query,l,r,sum=0;
        cin>>query;
        for(ll i=0;i<query;i++)
        {
            cin>>temp>>l>>r;
            if(temp==1)
            cout<<dp[r]-dp[l-1]<<"\n";
            else
            cout<<sp[r]-sp[l-1]<<"\n";
        }
    }
    return 0;
}
