#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100
 
void display(ll arr[],ll n)
{
    for(ll i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<"\n";
}
 
int main()
{
    io;
    ll n,m;
    cin>>n>>m;
    char cells[n+1][m+1];
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            cin>>cells[i][j];
            if(cells[i][j]=='.')
            {
                if((i+j)%2==0)cells[i][j]='B';
                else cells[i][j]='W';
            }
        }
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        cout<<cells[i][j];
        cout<<"\n";
    }
    return 0;
}   
