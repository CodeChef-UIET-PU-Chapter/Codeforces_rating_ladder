#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
using namespace std;
 
int main()
{
    ll m,n,a=INT_MAX,b=0,count=0;
    cin>>m>>n;
    while(pow(b,2)<=m)
    {
        a=m-pow(b,2);
        if(b==n-pow(a,2))
        count++;
        b++;
    }
    cout<<count;
}
