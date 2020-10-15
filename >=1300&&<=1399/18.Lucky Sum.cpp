#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100000
#define mod 1000000007
#define maxn 1024 
template <typename T>
void print(T x){cout<<x<<"\n";}
template <typename T1, typename T2>
void print2(T1 x,T2 y){cout<<x<<" "<<y<<"\n";}
template <typename T1, typename T2,typename T3>
void print3(T1 x, T2 y,T3 z){cout<<x<<" "<<y<<" "<<z<<"\n";}
 
long long lucky[1024]; 
 
ll f(int n)
{
	if(n==0)
		return 0;
	int i;
	ll ans=0;
	for(int i=1;i<=maxn;i++)
	{
		if(lucky[i]<n)
		{
			ans+=lucky[i]*(lucky[i]-lucky[i-1]);
		}
		else
		{
			ans+=lucky[i]*(n-lucky[i-1]);
			break; 
		}
	}
	return ans;
}
 
int main()
{
    io;
    ll test_case;
   //cin>>test_case;
   test_case=1;
   while(test_case--)
   {
       int l,r;
       cin>>l>>r;
       //cout<<l<<r;
        lucky[1]=4;
	    lucky[2]=7;
	    int t=3;
	    for(int i=1;i<512;i++)
	    {
		    lucky[t++]=lucky[i]*10+4;
		    lucky[t++]=lucky[i]*10+7;
	    }
        print(f(r)-f(l-1));
   }
}
