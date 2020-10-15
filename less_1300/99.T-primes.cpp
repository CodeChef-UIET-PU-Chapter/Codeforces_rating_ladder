#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 1000000000000
#define mod 1073741824 
 
bool isPrime(ll n)
{
   if(n<=1) return false;
   else if(n==2||n==3) return true;
   else if(n%2==0||n%3==0) return false;
   else
   {
       for(ll i=5;i<=sqrt(n);i+=2)
       {
           if(n%i==0) return false;
       }
       return true;
   } 
}
 
int main()
{
    io;
    ll test_case;
    test_case=1;
    while(test_case--)
    {
        ll n,temp;
        cin>>n;
        ll x;
        for(ll i=0;i<n;i++)
        {
            cin>>temp;
            x=sqrt(temp);
            if(pow(x,2)==temp)
            {
                //cout<<x<<" ";
                if(isPrime(x))
                cout<<"YES";
                else
                cout<<"NO";
            }
            else
            cout<<"NO";
            cout<<"\n";
        }
    }
    return 0;
}
