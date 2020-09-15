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
    string::iterator itr;
    itr=name.begin();
    itr++;
    transform(name.begin(),itr,name.begin(),::toupper);
    cout<<name;    
}
