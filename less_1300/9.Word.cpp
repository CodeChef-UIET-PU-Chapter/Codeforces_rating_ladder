#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100000000
#define limit 10000
 
int main()
{
    io;
    string name;
    cin>>name;
    int countL=0,countU=0;
    for(ll counter=0;counter<name.size();counter++)
    {
        if(name[counter]>='A'&&name[counter]<='Z')
        countU++;
        else
        countL++;
    }
    if(countU>countL)
    {
        transform(name.begin(),name.end(),name.begin(),::toupper);
        cout<<name;
    }
    else
    {
        transform(name.begin(),name.end(),name.begin(),::tolower);
        cout<<name;
    }    
}
