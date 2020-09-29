#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
 
void make_gp(vector<ll> arr,vector<ll> ans[],ll gp,ll n)
{
    bool flag1=false,flag2=false;
    ll c=gp;
    for(ll i=0;i<c;i++)
    {
        flag1=false;
        flag2=false;
        if(gp==1)
        break;
        for(ll j=gp;j<2*gp;j++)
        {
            if(arr[0]%arr[j]==0&&arr[0]>arr[j])
            {
                flag1=true;
                for(ll k=2*gp;k<arr.size();k++)
                {
                    if(arr[j]%arr[k]==0&&arr[j]>arr[k])
                    {
                        flag2=true;
                        ans[i].push_back(arr[k]);
                        ans[i].push_back(arr[j]);
                        ans[i].push_back(arr[0]);
                        arr.erase(arr.begin()+k);
                        arr.erase(arr.begin()+j);
                        arr.erase(arr.begin());
                        gp--;
                        break;
                    }
                    if(flag2)
                    break;
                }
                if(!flag2)
                {
                    cout<<-1;
                    exit(0);
                }
            }
            if(flag1)
            break;
        }
        if(!flag1)
        {
            cout<<-1;
            exit(0);
        }
    }
    if(arr[0]%arr[1]==0&&arr[0]>arr[1])
    {
        if(arr[1]%arr[2]==0&&arr[1]>arr[2])
        {
            ans[n/3-1].push_back(arr[2]);
            ans[n/3-1].push_back(arr[1]);
            ans[n/3-1].push_back(arr[0]);
        }
        else
        {
            cout<<-1;
            exit(0);
        }
    }
    else
    {
        cout<<-1;
        exit(0);
    }    
    for(ll i=c-1;i>=0;i--)
    cout<<ans[i][0]<<" "<<ans[i][1]<<" "<<ans[i][2]<<"\n";
}
 
int main()
{
    ll n,temp;
    cin>>n;
    ll gp=n/3;
    vector<ll> ans[gp];
    vector<ll> arr;
    for(ll i=0;i<n;i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end(),greater<ll>());
    make_gp(arr,ans,gp,n);
    return 0;
}
