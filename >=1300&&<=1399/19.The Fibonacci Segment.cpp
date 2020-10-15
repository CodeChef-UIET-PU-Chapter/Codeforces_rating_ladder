#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100000
#define mod 1000000007
 
template <typename T>
void print(T x){cout<<x<<"\n";}
template <typename T1, typename T2>
void print2(T1 x,T2 y){cout<<x<<" "<<y<<"\n";}
template <typename T1, typename T2,typename T3>
void print3(T1 x, T2 y,T3 z){cout<<x<<" "<<y<<" "<<z<<"\n";}
 
int main()
{
    io;
    ll test_case;
    //cin>>test_case;
    test_case=1;
    while(test_case--)
    {
        int n;
        cin>>n;
        ll arr[n];
 
        for(int i=0;i<n;i++) cin>>arr[i];
 
        ll ans=2,l=2;
        if(n==1||n==2)
        {
          print(n);
          continue;
        }
        for(int i=2;i<n;i++)
        {
          if(arr[i]==arr[i-1]+arr[i-2])
            l++;
          else
            l=2;
 
          ans=max(l,ans);  
        }
 
        print(ans);
    }  
}
