#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100
 
int main()
{
    io;
    string name;
    cin>>name;
    transform(name.begin(),name.end(),name.begin(),::tolower);
    for(ll i=0;i<name.size();i++)
    {
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]=='y')
        continue;
        else
        cout<<"."<<name[i];
    }
 
}
