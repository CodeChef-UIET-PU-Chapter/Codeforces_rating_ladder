#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100
 
int main()
{
    io;
    ll k,l,m,n,d,cnt=0,max;
    cin>>k>>l>>m>>n>>d;
    vector<ll> num;
    num.push_back(k);
    num.push_back(l);
    num.push_back(m);
    num.push_back(n);
    sort(num.begin(),num.end());    
    ll arr[d+1]={0};
    for(ll i=0;i<num.size();i++)
    {
        for(ll j=num[i];j<=d;j+=num[i])
        if(!arr[j])
        {
            cnt++;
            arr[j]=1;
        }
    }
    if((d%k==0||d%l==0||d%m==0||d%n==0)&&arr[d]==0)
    cnt++;
    cout<<cnt;
}
