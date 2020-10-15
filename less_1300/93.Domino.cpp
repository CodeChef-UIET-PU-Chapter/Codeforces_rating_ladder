#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 10001
#define mod 1073741824 
 
int main()
{
    io;
    ll n,s1=0,s2=0;
    cin>>n;
    ll arrx[n],arry[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arrx[i]>>arry[i];
        s1+=arrx[i];
        s2+=arry[i];
    }
    if(s1%2==0&&s2%2==0)
    cout<<0;
    else if((s1%2!=0&&s2%2==0)||(s2%2!=0&&s1%2==0))
    cout<<-1;
    else
    {
        for(ll i=0;i<n;i++)
        {
            if((arrx[i]%2==0&&arry[i]%2!=0)||(arrx[i]%2!=0&&arry[i]%2==0))
            {
                cout<<1;
                exit(0);
            }    
        }
        cout<<-1;
    }
    return 0;
}
