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
        int x,y,n;
        cin>>x>>y>>n;

        int seq[9];
        seq[0]=(x+mod)%mod;
        seq[1]=(y+mod)%mod;
        seq[2]=(seq[1]-seq[0]+mod)%mod;
        seq[3]=(-seq[0]+mod)%mod;
        seq[4]=(-seq[1]+mod)%mod;
        seq[5]=(seq[0]-seq[1]+mod)%mod;
        seq[6]=(seq[0]+mod)%mod;
        seq[7]=(seq[1]+mod)%mod;
        seq[8]=(seq[8]+mod)%mod;

        print(seq[(n-1)%6]);
    }
}
