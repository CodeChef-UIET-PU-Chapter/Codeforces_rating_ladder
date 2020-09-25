#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100
 
int main()
{
    io;
    string song;
    cin>>song;
    ll i=0;
    bool flag=false;
    while(i<song.size())
    {
        if(song[i]=='W'&&song[i+1]=='U'&&song[i+2]=='B')
        {
            if(flag)
            {
                cout<<" ";
                flag=false;
            }    
            i+=3;
        }
        else
        {
            cout<<song[i];
            i++;
            flag=true;
        }
    }
    return 0;
}
