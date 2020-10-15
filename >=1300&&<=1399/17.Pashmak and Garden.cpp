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
      int x1,y1,x2,y2;
      cin>>x1>>y1>>x2>>y2;
      ll p=min(x1,x2);
      if(p==x2)
      {
        x1=(x1+x2)-(x2=x1);
        y1=(y1+y2)-(y2=y1);
      }
      
      if(abs(x1-x2)!=abs(y1-y2)&&((x1!=x2)&&(y1!=y2)))
      print(-1);
      else
      {
        if(x1==x2)
        cout<<(x1+abs(y1-y2))<<" "<<y1<<" "<<x2+abs(y1-y2)<<" "<<y2<<"\n";
        else if(y1==y2)
        cout<<x1<<" "<<(y1+abs(x1-x2))<<" "<<x2<<" "<<y2+abs(x1-x2)<<"\n";
        else
        cout<<x1+abs(x1-x2)<<" "<<y1<<" "<<x2-abs(x1-x2)<<" "<<y2<<"\n";
      }
    }  
}
