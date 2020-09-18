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
        ll n,k;
        cin>>n>>k;
        string letter;
        cin>>letter;
        unordered_map<char,ll> freq;

        for(int i=0;i<n;i++)
            freq[letter[i]]++;
        
        unordered_map<char,ll>::iterator itr;
        vector<ll> res;

        for(itr=freq.begin();itr!=freq.end();itr++)
        res.push_back(itr->second);

        sort(res.begin(),res.end(),greater<ll>());

        ll ans=0;
        for(int i=0;i<res.size();i++)
        {
            ans+=(min(k,res[i]))*(min(k,res[i]));
            k-=res[i];
            //cout<<ans<<" "<<k<<"\n";
            if(k<=0)
            break;
        }
        print(ans);
    }
}
