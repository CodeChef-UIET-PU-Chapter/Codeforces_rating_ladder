#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 6
ll arr[N][N];
ll sum=INT_MIN;
map<ll,ll> ans;
void printArr(ll a[],ll n) 
{ 
    ll sumN=arr[a[0]][a[1]]+arr[a[1]][a[0]]+2*(arr[a[2]][a[3]]+arr[a[3]][a[2]])+arr[a[1]][a[2]]+arr[a[2]][a[1]]+2*(arr[a[3]][a[4]]+arr[a[4]][a[3]]);
    if(sumN>sum)
    {
        sum=sumN;
        ans[sum]=1;
    }
     
} 
void heapPermutation(ll a[], ll size, ll n) 
{ 
    if (size == 1) 
    { 
        printArr(a, n); 
        return; 
    } 
  
    for (int i=0; i<size; i++) 
    { 
        heapPermutation(a,size-1,n); 
        if (size%2==1) 
            swap(a[0], a[size-1]); 
        else
            swap(a[i], a[size-1]); 
    } 
}
 
 
int main()
{
    io;
    for(ll i=1;i<=5;i++) 
    {
        for(ll j=1;j<=5;j++)
        cin>>arr[i][j];
    }
    ll ar[]={1,2,3,4,5};
    heapPermutation(ar,5,5);
    map<ll,ll>::iterator itr;
    itr=ans.end();
    itr--;
    cout<<itr->first;
    
}  
