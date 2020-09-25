#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100
 
bool isint(float a)
{
    if(ceil(a)-floor(a)==0)
        return true;
    else 
    return false;
}
 
int main()
{
    io;
    ll n,m;
    cin>>n;
    float arr1[n];
    for(ll i=0;i<n;i++)
    cin>>arr1[i];
    cin>>m;
    float arr2[m];
    for(ll i=0;i<m;i++)
    cin>>arr2[i];
    ll ans=0;
    float max_ratio=INT_MIN,ratio;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            if(isint(arr2[j]/arr1[i]))
            {
                if(max_ratio<=arr2[j]/arr1[i])
                {
                    if(ratio==arr2[j]/arr1[i])
                    ans++;
                    else
                    ans=1;
                    max_ratio=arr2[j]/arr1[i];
                    ratio=arr2[j]/arr1[i];
                }
            }
        }
    }
    cout<<ans;
    return 0;
}
