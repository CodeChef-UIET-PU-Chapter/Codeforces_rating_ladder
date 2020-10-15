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
        string a,c;
        ll b,n;
        cin>>a>>b>>n;
        bool flag=true;
        c=a;
        flag=true;
            if(stoll(a+'0')%b==0)
            a+='0',flag=false;
            else if(stoll(a+'1')%b==0)
            a+='1',flag=false;
            else if(stoll(a+'2')%b==0)
            a+='2',flag=false;
            else if(stoll(a+'3')%b==0)
            a+='3',flag=false;
            else if(stoll(a+'4')%b==0)
            a+='4',flag=false;
            else if(stoll(a+'5')%b==0)
            a+='5',flag=false;
            else if(stoll(a+'6')%b==0)
            a+='6',flag=false;
            else if(stoll(a+'7')%b==0)
            a+='7',flag=false;
            else if(stoll(a+'8')%b==0)
            a+='8',flag=false;
            else if(stoll(a+'9')%b==0)
            a+='9',flag=false;
        if(c==a)
        print(-1);
        else    
        {
            for(int i=0;i<n-1;i++)
            a+='0';
            print(a);
        }    
    }
}
