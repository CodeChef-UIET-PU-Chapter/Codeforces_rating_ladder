#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 10001
#define mod 1073741824 
 
int main()
{
    io;
    ll arr[4][4];
    memset(arr,0,sizeof(arr));
    char in;
    for(ll i=0;i<4;i++)
    {
        for(ll j=0;j<4;j++)
        {
            cin>>in;
            if(in=='#')
            arr[i][j]=1;
        }
    }
    ll sum;
    /*for(ll i=0;i<4;i++)
    {
        for(ll j=0;j<4;j++)
        cout<<arr[i][j]<<" ";
        cout<<"\n";
    }*/
    for(ll i=0;i<3;i++)
    {
        for(ll j=0;j<3;j++)
        {
            sum=arr[i][j]+arr[i][j+1]+arr[i+1][j]+arr[i+1][j+1];
            if(sum>=3||sum<2)
            {
                //cout<<i<<" "<<j<<"\n";
                //cout<<arr[i][j]<<" "<<arr[i][j+1]<<" "<<arr[i+1][j]<<" "<<arr[i+1][j+1]<<"\n";
                cout<<"YES";
                exit(0);
            }
        }
    }
    cout<<"NO";
    return 0;
}
