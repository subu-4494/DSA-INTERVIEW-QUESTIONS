#include<bits/stdc++.h>
using namespace std;
int main()
{
    //cout<<"hi";
     int m,n;
    cin>>m;
    cin>>n;
    long long arr[m+n],a[n],ar[m+n],ae[m];
    // cin>>m;
    // cin>>n;
    for(int i=0;i<(n+m);i++)
    {
        cin>>arr[i];
        if(arr[i]!=0)
        {
            ae[i]=arr[i];
        }
       // cout<<"hi";
    }
     for(int j=0;j<n;j++)
    {
        cin>>a[j];
       // cout<<"hi";
    }
    ar[m+n]=ae[m]+a[n];
     for(int k=0;k<(n+m);k++)
    {
        cout<<ar[k];
        //cout<<"hi";
    }
    //cout<<"hi";
    return 0;
}