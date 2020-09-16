#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100
 
int main()
{
    io;
    string num1,num2;
    cin>>num1>>num2;
    for(ll i=0;i<num1.size();i++)
    {
        if(abs(num1[i]-num2[i])==1)
        cout<<1;
        else
        cout<<0;
    }
}
