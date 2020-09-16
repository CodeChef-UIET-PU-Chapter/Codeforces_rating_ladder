#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100
 
int main()
{
    io;
    float n,sum=0,temp;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>temp;
        sum+=temp;
    }
    float per;
    per=sum/(n*100);
    cout<<fixed<<setprecision(12)<<per*100<<"\n";
}
