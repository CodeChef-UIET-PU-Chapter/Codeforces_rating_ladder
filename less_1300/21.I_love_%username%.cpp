#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
using namespace std;
 
int main()
{
	fastio;
    ll n;
    cin>>n;
    ll first,next;
    cin>>first;
    ll max=first,min=first;
    ll count=0;
    for(int i=0;i<n-1;i++)
    {
        cin>>next;
        if(max<next)
        {
            max=next;
            count++;
        }
        else if(min>next)
        {
            min=next;
            count++;
        }
    }
    cout<<count<<"\n";
}
