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
 
vector<int> child[N];
bool vis[N];
bool ans=false;
ll res=0;
void dfs(int i,int t)
{
    //cout<<i<<" ";
    //cout<<res<<"\n";
    if(i==t)
    ans=true;
    else
    {   
        if(!ans)
        res++;
        vis[i]=true;
 
        for(auto x: child[i])
        {
            if(!vis[x])
            dfs(x,t);
        }
    }    
}
 
int main()
{
    io;
    ll test_case;
    //cin>>test_case;
    test_case=1;
    while(test_case--)
    {
       int n,s,t;
       cin>>n>>s>>t;
       ll order[n+1];
       for(int i=1;i<=n;i++) cin>>order[i];
 
       for(int i=s;i<=n;i++)
       {
           child[i].push_back(order[i]);
           child[order[i]].push_back(i);
       }
 
       for(int i=1;i<s;i++)
       {
           child[i].push_back(order[i]);
           child[order[i]].push_back(i);
       }
 
       for(int i=s;i<=n;i++)
       if(!vis[i])
       {
           dfs(i,t);
           break;
       }
       
        //cout<<"\n";
       if(ans)
       print(res);
       else
       print(-1);
    }
}
