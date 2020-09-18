#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
using namespace std;
 
int main()
{
    fastio;
    ll n,a,b,c,count=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        if((a==1&&b==1)||(a==1&&c==1)||(b==1&&c==1))
        count++;
    }
    cout<<count<<"\n";
}
