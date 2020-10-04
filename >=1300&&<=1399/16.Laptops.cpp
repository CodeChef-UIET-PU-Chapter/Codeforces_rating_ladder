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
 
bool compare(pair<ll,ll> a,pair<ll,ll> b)
{
  return a.second<b.second;
}

int main()
{
    io;
    ll test_case;
    //cin>>test_case;
    test_case=1;
    while(test_case--)
    {
        int n,a,b;
        cin>>n;
        
        vector< pair<ll,ll> > laptops(n);
        for(int i=0;i<n;i++)
        {
            cin>>a>>b;
            laptops[i]={a,b};
        }

        sort(laptops.begin(),laptops.end(),compare);
        bool flag=false;
        for(int i=1;i<laptops.size();i++)
        {
          if(laptops[i-1].first>laptops[i].first)
          {
            
            print("Happy Alex");
            flag=true;
            break;
          }
        }
        if(!flag)
        print("Poor Alex");
    }  
}
