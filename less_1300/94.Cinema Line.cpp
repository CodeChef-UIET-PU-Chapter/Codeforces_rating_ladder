#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 10001
#define mod 1073741824 
 
int main()
{
    io;
    ll n;
    cin>>n;
    ll money[n],change[3];
    memset(change,0,sizeof(change));
    for(ll i=0;i<n;i++) cin>>money[i];
    if(money[0]!=25)
    {
        cout<<"NO";
        exit(0);
    }
    else
    {
        change[money[0]/50]=1;
        for(ll i=1;i<n;i++)
        {
            if(money[i]==50)
            {
                if(change[0]<=0)
                {
                    cout<<"NO";
                    exit(0);
                }
                else
                {
                    change[0]--;
                    change[1]++;
                }    
            }
            else if(money[i]==100)
            {
                if(change[0]>=1)
                {
                    if(change[1]>=1)
                    {
                        change[1]--;
                        change[0]--;
                        change[2]++;
                    }
                    else if(change[0]>=3)
                    {
                        change[0]-=3;
                        change[2]++;
                    }
                    else
                    {
                        cout<<"NO";
                        exit(0);
                    }
                }
                else
                {
                    cout<<"NO";
                    exit(0);
                }
            }
            else
            change[0]++;
        }
        cout<<"YES";
    }    
    return 0;
}
