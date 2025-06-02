
/* 
🔍 Problem Statement
Given an array nums[], find the number of subarrays that contain exactly K distinct integers.

💡 Core Idea
To count subarrays with exactly K distinct integers:

✅ Exactly K = AtMost(K) - AtMost(K - 1)

AtMost(K) = number of subarrays with at most K distinct integers.

AtMost(K - 1) = number of subarrays with fewer than K distinct.

Their difference gives subarrays with exactly K distinct integers.

⚙️ Code Structure
cpp
Copy
Edit
int subarraysWithKDistinct(vector<int>& nums, int k) {
    return func(nums, k) - func(nums, k - 1);
}
func(nums, k) → Returns subarrays with at most k distinct elements
cpp
Copy
Edit
int func(vector<int>& nums, int k) {
    unordered_map<int, int> mpp;
    int i = 0, j = 0, ans = 0;

    while (j < nums.size()) {
        mpp[nums[j]]++;

        while (mpp.size() > k) {
            mpp[nums[i]]--;
            if (mpp[nums[i]] == 0) mpp.erase(nums[i]);
            i++;
        }

        ans += j - i + 1; // all subarrays ending at j with at most k distinct
        j++;
    }
    return ans;
}
🧠 How It Works
unordered_map keeps track of the frequency of elements in the current window.

When the number of distinct elements exceeds k, we shrink the window from the left.

For each position j, (j - i + 1) subarrays end at j and satisfy the “at most k” condition.

This logic ensures O(n) time complexity.

✅ Example
Input: nums = [1,2,1,2,3], k = 2

AtMost(2) = 12

AtMost(1) = 5

Exactly(2) = 12 - 5 = 7

📌 Final Notes
This is a classic sliding window + frequency map technique.

The AtMostK pattern is useful in many subarray problems with constraints on distinct elements.

Let me know if you want problems that directly rely on this pattern!


*/



#include<bits/stdc++.h>
using namespace std;

// hard version 

class Solution {
public:
    int func(vector<int>& nums, int k) {
      int ans=0;
      int n = nums.size();
      int i=0;
      int j=0;
      unordered_map<int,int> mpp;
      while(j<n)
      {
          mpp[nums[j]]++;
            while(mpp.size()>k) 
            {
               mpp[nums[i]]--;
               if(mpp[nums[i]]==0) mpp.erase(nums[i]);
               i++;
            }    

            ans += j-i+1;
            j++;
      }
      return ans;
}

    int subarraysWithKDistinct(vector<int>& nums, int k) {
       
    int z = func(nums,k)-func(nums,k-1);
    return z;
    }
};