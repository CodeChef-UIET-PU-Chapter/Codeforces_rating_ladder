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
        int n;
        cin>>n;
        vector<int> arr(n),arr1(n);
        int a=-1,b=-1;
        for(int i=0;i<n;i++) cin>>arr[i],arr1[i]=arr[i];
        bool flag=false;

        for(int i=1;i<n;i++)
        {
            if(arr[i-1]>arr[i])
            {
                flag=true;
                break;
            }
        }

        if(flag)
        {
            flag=false;
            //cout<<"im fef\n";
            sort(arr1.begin(),arr1.end());
            vector<int> res;
            for(int i=0;i<n;i++)
            {
                if(arr[i]!=arr1[i])
                res.push_back(i);

                //cout<<arr[i]<<" "<<arr1[i]<<"\n";
            }

            int start=res[0],end=res[res.size()-1],temp;
            //cout<<start<<" "<<end<<"\n";
            while(start<=end)
            {
                temp=arr[start];
                arr[start]=arr[end];
                arr[end]=temp;
                start++;
                end--;
            }

            //for(int i=0;i<n;i++) cout<<arr[i]<<" ";
            //cout<<"\n";
            for(int i=1;i<n;i++)
            {
                if(arr[i-1]>arr[i])
                {
                    flag=true;
                    break;
                }
            }
            if(!flag)
                print("yes"),print2(res[0]+1,res[res.size()-1]+1);
            else
                print("no");
        }
        else
            print("yes"),print2(1,1);     
    }
}
