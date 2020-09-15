#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100000000
#define limit 10000
 
int main()
{
    io;
    string bcode;
    cin>>bcode;
    vector<int> ans;
    int i=0; 
    while(i<bcode.size())
    {
        if(bcode[i]=='-')
        {
            i++;
            if(bcode[i]=='.')
            ans.push_back(1);
            else if(bcode[i]=='-')
            ans.push_back(2);
        }
        else
        {
            ans.push_back(0);}
        i++;
    }
    for(ll i=0;i<ans.size();i++)
    cout<<ans[i];
}
