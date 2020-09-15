#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100000000
#define limit 10000
 
int main()
{
    io;
    int y,temp,temp2,ans;
    bool flag;
    map<ll,ll> count;
    cin>>y;
    y++;
    ans=y;
    while(true)
    {
        flag=true;
        y=ans;
        temp=(y)%10;
        count[temp]=1;
        y=(y)/10;
        for(ll i=y;i>0;i=i/10)
        {
            temp2=i%10;
            if(temp==temp2)
            {
                flag=false;
                break;
            }
            count[temp2]++;
            temp=temp2;
        }
        if(count.size()==4)
        {
            cout<<ans;
            break;
        }
        ans++;
        count.clear();
    }
 
}
