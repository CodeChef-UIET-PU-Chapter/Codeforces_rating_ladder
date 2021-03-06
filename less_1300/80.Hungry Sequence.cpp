#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 10000000
 
bool notprime[N+1];
vector<ll> primes;
 
void sieve()
{
    notprime[0]=notprime[1]=true;
    for(ll i=2;i<=N;i++)
    {
        if(!notprime[i])
        for(ll j=i*i;j<=N;j+=i)
        notprime[j]=true;
    }
    for(ll i=0;i<=N;i++)
    if(!notprime[i])
    primes.push_back(i);
}
 
int main()
{
    io;
    sieve();
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++)
    cout<<primes[i]<<" ";
    return 0;
}
