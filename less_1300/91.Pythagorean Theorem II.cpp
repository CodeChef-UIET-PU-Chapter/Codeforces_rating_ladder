#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 10001
#define mod 1073741824 
  
ll pythagorean(ll n)
{
    ll a,b,c=0,count=0;
    for(a=1;a<=n;a++)
    {
        for(b=a;b<=n;b++)
        {
            if(int(sqrt(a*a+b*b))*int(sqrt(a*a+b*b))==a*a+b*b&&a*a+b*b<=n*n)
            {
                //cout<<a<<" "<<b<<" "<<sqrt(a*a+b*b)<<"\n";
                count++;
            }    
        }
    }
    return count;
}
 
int main()
{
    io;
    ll n;
    cin>>n;
    cout<<pythagorean(n);
    return 0;
}
