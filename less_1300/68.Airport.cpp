#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100
 
void display(ll arr[],ll n)
{
    for(ll i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<"\n";
}
 
int main()
{
    io;
    ll n,m;
    cin>>n>>m;
    ll arr[m];
    for(ll i=0;i<m;i++) cin>>arr[i];
    ll arr1[m];
    for(ll i=0;i<m;i++) arr1[i]=arr[i];
    ll maxP=0,minP=0;
    sort(arr1,arr1+m,greater<ll>());
    sort(arr,arr+m);
    ll i=0,p=0,c;
    while(i<n)
    {
        //cout<<i<<"\n";
        if(i==n-1)
        {
            //cout<<"p: "<<p<<"\n";
            maxP+=arr1[p%m];
            i++;
        }
        else
        {
            //cout<<"f: "<<arr1[p%m]<<" s: "<<arr1[(p+1)%m]<<" ";
            i+=arr1[p%m]-arr1[(p+1)%m]+1;
            if(i>n)
            {
                i-=arr1[p%m]-arr1[(p+1)%m]+1;
                maxP+=((n-i)*(2*arr1[p%m]-(n-i-1))/2);
                break;
            }
            else
            {c=arr1[p%m]-arr1[(p+1)%m]+1;
            //cout<<"i: "<<i<<" ";
            maxP+=(c*(arr1[p%m]+arr1[(p+1)%m])/2);
            arr1[p%m]=arr1[(p+1)%m]-1;}
            //cout<<"max: "<<maxP<<"\n";
        }
        sort(arr1,arr1+m,greater<ll>());
        //display(arr1,m);
    }
    i=0,p=0,c;
    while(i<n)
    {
        if(i==n-1)
        {
            minP+=arr[p%m];
            i++;
        }
        else
        {
            i+=arr[p%m];
            if(i>n)
            {
                i-=arr[p%m];
                minP+=((n-i)*(2*arr[p%m]-(n-i-1))/2);
                break;
            }
            c=arr[p%m];
            //cout<<"i: "<<i<<" ";
            minP+=(c*(arr[p%m]+1)/2);
            //cout<<"max: "<<minP<<"\n";
            arr[p%m]-=1;
            p++;
        }
    }
    cout<<maxP<<" "<<minP;
    return 0;
} 
