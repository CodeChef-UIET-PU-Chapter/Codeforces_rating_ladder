#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100000
#define mod 1000000007
 
template <typename T>
void print(T x){cout<<x<<"\n";}
template <typename T1, typename T2>
void print2(T1 x,T2 y){cout<<x<<" "<<y<<"\n";}
template <typename T1, typename T2,typename T3>
void print3(T1 x, T2 y,T3 z){cout<<x<<" "<<y<<" "<<z<<"\n";}

int main()
{
    io;
    ll test_case;
    //cin>>test_case;
    test_case=1;
    while(test_case--)
    {
        ll r,c;
        cin>>r>>c;
        map<string,ll> done;
        char store[r][c];
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>store[i][j];
                if(store[i][j]=='S')
                {
                    done["ri"+to_string(i)]=1;
                    done["ci"+to_string(j)]=1;
                    //cout<<'r'+to_string(i)<<" ";
                    //cout<<'c'+to_string(j)<<"\n";
                }    
            }
        }

        ll res=0;
        for(int i=0;i<c;i++)
        {
            if(done.find("ci"+to_string(i))==done.end())
            {
                res+=r;
                done['c'+to_string(i)]=1;
                //cout<<'c'+to_string(i)<<"\n";
            }
        }
        
        for(int i=0;i<r;i++)
        {
            if(done.find("ri"+to_string(i))==done.end())
            {
                for(int j=0;j<c;j++)
                {
                    if(done.find('c'+to_string(j))==done.end())
                        res++;
                }
            }
        }

        cout<<res<<"\n";
    }
}
