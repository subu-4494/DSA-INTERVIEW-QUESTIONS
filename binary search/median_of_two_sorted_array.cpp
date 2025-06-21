#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double func(vector<int>& a , vector<int>& b ) {
        
        if(a.size()>b.size()) return  func(b,a);
        int low =0;
        int hi = a.size();
        while(low<=hi) {
        int mid = (low + hi)/2;
        int j = (a.size()+b.size()+1)/2 - mid;
        int la,ra,lb,rb;

        if (mid == 0) la=INT_MIN; 
        else la = a[mid - 1];

        if(mid == a.size()) ra= INT_MAX ;
        else ra = a[mid];

         if (j == 0) lb = INT_MIN ;
         else lb =  b[j - 1];

         if(j == b.size()) rb = INT_MAX ;
         else rb=  b[j];

            if(la<=rb && lb<=ra) {
              int z = max(la,lb);
              int k = min(ra,rb);
              if((a.size()+b.size())%2 == 0) return (z+k)/2.0;
              else return z;

            } else if(la>rb) {
                hi = mid-1;
            } else {
                low = mid+1;
            }
        }
     return 0.0;

    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        return func(nums1,nums2);
    }
};