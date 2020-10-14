#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 10000000
 
/*bool done=false;
bool check(ll arr[],ll n)
{
    for(ll i=0;i<n-1;i++)
    if(arr[i]==arr[i+1])
    {return false;}
    return true;
}
 
void heaps(ll arr[],ll size,ll n)
{
    if(size==1)
    {
        bool flag;
        flag=check(arr,n);
        //cout<<"flag: "<<flag<<"\n";
        if(flag)
        {
            //cout<<"YES";
            done=true;
            return;
            //return true;
        }
        return;
    }    
    for(ll i=0;i<n;i++)
    {
        heaps(arr,size-1,n);
        if(size%2==1)
        swap(arr[0],arr[size-1]);
        else
        swap(arr[i],arr[size-1]);
    }
}*/
 
int main()
{
    io;
    ll n,temp;
    cin>>n;
    map<ll,ll> num;
    for(ll i=0;i<n;i++) 
    {
        cin>>temp;
        num[temp]++;
    }
    ll limit=(n+1)/2;
    map<ll,ll>::iterator itr;
    for(itr=num.begin();itr!=num.end();itr++)
    {
        //cout<<itr->first<<" "<<itr->second<<"\n";
        if(itr->second>limit)
        {
            cout<<"NO";
            exit(0);
        }
    }    
    cout<<"YES";
    return 0;
}
