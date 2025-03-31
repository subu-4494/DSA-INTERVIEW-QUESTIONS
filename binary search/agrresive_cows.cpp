#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,c;
        cin>>n>>c;    // 5 3 
        vector<int> arr(n,0);
        int a;
        for(int i=0;i<n;i++) {
            cin>>a;
            arr[i]=a;
        }
        sort(arr.begin(),arr.end());   // 1 2 4 8 9

        int b = 1;
        int d = arr[n-1]-arr[0];
        int mid;
        int best=0;
        while(b<=d) {
            int f=1;
            mid = (b+d)/2;
           int e = arr[0];
          
          
             for(int i=1;i<n;i++) 
             {
                if(arr[i]>=e+mid)
                {
                    e= arr[i];
                    f++;
                    if(f==c) break;
                }
             }
           
            if(f>= c) {
                best = mid;
                b = mid+1;
            }
            else {
                d = mid-1;
            }
            // cout<<f<<endl;
        }
        
         cout<<best<<endl;


    }
    return 0;
}