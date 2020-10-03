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
      string a,b,c;
      cin>>a>>b;
      int first,second;
      first=stoi(a);
      second=stoi(b);
      c=to_string(first+second);
      string a0="",b0="",c0="";
      for(int i=0;i<a.size();i++)
      {
        if(a[i]=='0')
        continue;
        else
        a0+=a[i];
      }
 
      for(int i=0;i<b.size();i++)
      {
        if(b[i]=='0')
        continue;
        else
        b0+=b[i];
      }
 
      for(int i=0;i<c.size();i++)
      {
        if(c[i]=='0')
        continue;
        else
        c0+=c[i];
      }
      int ans=stoi(a0)+stoi(b0);
      if(to_string(ans)==c0)
      print("YES");
      else
      print("NO");
    }
}
