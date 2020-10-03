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
        int n,temp,neg_num=0;
        cin>>n;
        vector<ll>pos,neg,zero;
        for(int i=0;i<n;i++)
        {
          cin>>temp;
          if(temp<0&&neg.size()==0)
          neg.push_back(temp);
          else if(temp==0)
          zero.push_back(temp);
          else
          {
            if(temp<0)
            neg_num++;

            pos.push_back(temp);
          }  
        }

        cout<<1<<" "<<neg[0]<<"\n";
        
        if(neg_num%2!=0)
        {
          for(int i=0;i<pos.size();i++)
          {
            if(pos[i]<0)
            {
              zero.push_back(pos[i]);
              pos.erase(pos.begin()+i);
              break;
            }
          }
        }

        cout<<pos.size()<<" ";
        for(int i=0;i<pos.size();i++)
        cout<<pos[i]<<" ";
        cout<<"\n";
        
        cout<<zero.size()<<" ";
        for(int i=0;i<zero.size();i++)
        cout<<zero[i]<<" ";
        cout<<"\n";
    }  
}
