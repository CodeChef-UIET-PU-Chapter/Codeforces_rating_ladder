#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100
 
int main()
{
    io;
    string n,m;
    cin>>n>>m;
    if(n.size()!=m.size())
    cout<<"NO";
    else
    {
        for(ll i=0;i<n.size();i++)
        {
            if(n[i]!=m[m.size()-i-1])
            {
                //cout<<n[i]<<" "<<m[m.size()-i-1]<<"\n";
                cout<<"NO";
                exit(0);
            }
        }
        cout<<"YES";
        exit(0);
    }
    return 0;
}
