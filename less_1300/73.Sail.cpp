#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100000
vector<ll> arr[N+1];
 
void north(ll *a)
{
    ll p=*a;
    p++;
    *a=p;
}
 
void south(ll *a)
{
    ll p=*a;
    p--;
    *a=p;
}
 
void west(ll *a)
{
    ll p=*a;
    p--;
    *a=p;
}
 
void east(ll *a)
{
    ll p=*a;
    p++;
    *a=p;
}
int main()
{
    io;
    ll t,sx,sy,ex,ey;
    cin>>t>>sx>>sy>>ex>>ey;
    string dir;
    ll time=0;
    cin>>dir;
    if(sx<ex)
    {
        if(sy<ey)
        {
            for(ll i=0;i<t;i++)
            {
                if(dir[i]=='E'&&sx<ex)
                east(&sx);
                else if(dir[i]=='N'&&sy<ey)
                north(&sy);
                time++;
                if(sx==ex&&ey==sy)
                break;
            }
            if(sx==ex&&ey==sy)
            cout<<time;
            else
            cout<<-1;
        }
        else if(sy>ey)
        {
            for(ll i=0;i<t;i++)
            {
                if(dir[i]=='E'&&sx<ex)
                east(&sx);
                else if(dir[i]=='S'&&sy>ey)
                south(&sy);
                time++;
                if(sx==ex&&ey==sy)
                break;
            }
            if(sx==ex&&ey==sy)
            cout<<time;
            else
            cout<<-1;
        }
        else
        {
            for(ll i=0;i<t;i++)
            {
                if(dir[i]=='E'&&sx<ex)
                east(&sx);
                time++;
                if(sx==ex&&ey==sy)
                break;
            }
            if(sx==ex&&ey==sy)
            cout<<time;
            else
            cout<<-1;
        }
    }
    else if(sx>ex)
    {
        if(sy<ey)
        {
            for(ll i=0;i<t;i++)
            {
                if(dir[i]=='W'&&sx>ex)
                west(&sx);
                else if(dir[i]=='N'&&sy<ey)
                north(&sy);
                time++;
                if(sx==ex&&ey==sy)
                break;
            }
            if(sx==ex&&ey==sy)
            cout<<time;
            else
            cout<<-1;
        }
        else if(sy>ey)
        {
            for(ll i=0;i<t;i++)
            {
                if(dir[i]=='W'&&sx>ex)
                west(&sx);
                else if(dir[i]=='S'&&sy>ey)
                south(&sy);
                time++;
                if(sx==ex&&ey==sy)
                break;
            }
            if(sx==ex&&ey==sy)
            cout<<time;
            else
            cout<<-1;
        }
        else
        {
            for(ll i=0;i<t;i++)
            {
                if(dir[i]=='W'&&sx>ex)
                west(&sx);
                time++;
                if(sx==ex&&ey==sy)
                break;
            }
            if(sx==ex&&ey==sy)
            cout<<time;
            else
            cout<<-1;
        }
    }
    else
    {
        if(sy<ey)
        {
            for(ll i=0;i<t;i++)
            {
                if(dir[i]=='N'&&sy<ey)
                north(&sy);
                time++;
                if(sx==ex&&ey==sy)
                break;
            }
            if(sx==ex&&ey==sy)
            cout<<time;
            else
            cout<<-1;
        }
        else if(sy>ey)
        {
            for(ll i=0;i<t;i++)
            {
                if(dir[i]=='S'&&sy>ey)
                south(&sy);
                time++;
                if(sx==ex&&ey==sy)
                break;
            }
            if(sx==ex&&ey==sy)
            cout<<time;
            else
            cout<<-1;
        }
        else
        {
            if(sx==ex&&ey==sy)
            cout<<time;
            else
            cout<<-1;
        }
    }
} 
