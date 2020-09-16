#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100000000
#define limit 10000
 
int main()
{
    io;
    ll num,temp,cnt=0,temp2;
    bool flag=true;
    cin>>num;
    while(num)
    {
        temp=num%10;
        num=num/10;
        if(temp==4||temp==7)
        cnt++;
    }
    temp2=cnt;
    while(cnt)
    {
        temp=cnt%10;
        cnt=cnt/10;
        if(temp!=4&&temp!=7)
        {
            flag=false;
            break;
        }
    }
    if(flag&&temp2)
    cout<<"YES";
    else
    cout<<"NO";    
}
