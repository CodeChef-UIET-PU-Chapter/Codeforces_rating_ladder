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

double combinatorics(double n,double m)
{
    double nume=1;
    for(int i=0;i<m;i++)
    nume*=n,n=n-1;

    double deno=1,p=m;
    for(int i=0;i<p;i++)
    deno*=m,m=m-1;

    return nume/deno;
}


int main()
{
    io;
    ll test_case;
    //cin>>test_case;
    test_case=1;
    while(test_case--)
    {
        string s1,s2;
        cin>>s1>>s2;
        double mc1=0,mc2=0,q=0;
        double ans=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]=='+')
            mc1++;
            else
            mc2++;
        }

        for(int i=0;i<s2.size();i++){
            if(s2[i]=='+')
            mc1--;
            else if(s2[i]=='-')
            mc2--;
            else
            q++;

        }

        if(mc1<0||mc2<0)
        cout<<fixed<<setprecision(12)<<ans<<"\n";
        else
        {
            ans=1;
            if(q==0&&mc1==0&&mc2==0)
            cout<<fixed<<setprecision(12)<<ans<<"\n";
            else
            {
                ans=combinatorics(q,mc1)/(pow(2,q));
                cout<<fixed<<setprecision(12)<<ans<<"\n";
            }    
        }
    }
}
