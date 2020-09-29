#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100
 
 
int main()
{
    io;
    string typo;
    cin>>typo;
    vector<char> hello;
    char hi[]={'h','e','l','l','o'};
    ll j=0;
    for(ll i=0;i<typo.size();i++)
    {
        if(typo[i]==hi[j])
        {
            hello.push_back(hi[j]);
            j++;
        }
    }
    if(hello.size()!=5)
    cout<<"NO";
    else
    cout<<"YES";
    return 0;
} 
