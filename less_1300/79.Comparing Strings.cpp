#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
 
int main()
{
    io;
    string s1,s2;
    cin>>s1>>s2;
    if(s1.size()!=s2.size())
    cout<<"NO";
    else
    {
        ll a=1,b=2,i;
        for(i=0;i<s1.size();i++)
        {
            if(s1[i]!=s2[i])
            {
                a=int(s1[i])-int(s2[i]);
                s2[i]=s1[i];
                break;
            }
        }
        for(ll j=i+1;j<s1.size();j++)
        {
            if(s1[j]!=s2[j])
            {
                //cout<<s1[j]<<" "<<s2[j]<<"\n";
                b=int(s1[j])-int(s2[j]);
                s2[j]=s1[j];
                break;
            }
        }
        //cout<<a<<" "<<b<<"\n";
        if(a+b==0)
        {for(ll i=0;i<s1.size();i++)
        if(s1[i]!=s2[i])
        {cout<<"NO";exit(0);}
        cout<<"YES";}
        else
        cout<<"NO";
    }
    return 0;
}
