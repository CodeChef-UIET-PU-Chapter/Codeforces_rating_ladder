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
       int n,m;
       cin>>n>>m;
       char garden[11][11];
 
       for(int i=1;i<=n;i++)
       for(int j=1;j<=m;j++)
       cin>>garden[i][j];
 
       int eat=0;
       for(int i=1;i<=n;i++)
       {
           for(int j=1;j<=m;j++)
           {
               if(garden[i][j]=='W')
               {
                 if(garden[i-1][j]=='P'||garden[i+1][j]=='P'||garden[i][j+1]=='P'||garden[i][j-1]=='P')
                    eat++;
               }    
           }
       }
 
       print(eat);
    }
}
