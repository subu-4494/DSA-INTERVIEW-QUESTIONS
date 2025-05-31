#include<bits/stdc++.h>
using namespace std;

// 0/1 Knapsack
// Problem: Given weights and values of n items, and a knapsack capacity W, find the maximum value that can be put into the knapsack.


int knapsack(int n, int w, vector<int> &wt, vector<int> &val) {
    vector<vector<int>> dp(n+1, vector<int>(w+1, 0));
    for(int i=1; i<=n; i++) {
        for(int j=0; j<=w; j++) {
            if(wt[i-1] <= j)
                dp[i][j] = max(dp[i-1][j], val[i-1] + dp[i-1][j - wt[i-1]]);
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][w];
}

// ✅ Subset Sum Equal to Target (DP-14)
// Problem: Return true if there's a subset with sum equal to target.


bool subsetSum(int n, int target, vector<int>& nums) {
    vector<vector<bool>> dp(n+1, vector<bool>(target+1, false));
    for(int i=0; i<=n; i++) dp[i][0] = true;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=target; j++) {
            if(nums[i-1] <= j)
                dp[i][j] = dp[i-1][j] || dp[i-1][j - nums[i-1]];
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][target];
}


// ✅ Partition Equal Subset Sum (DP-15)
// Problem: Check if the array can be partitioned into 2 subsets with equal sum.


bool canPartition(vector<int>& nums) {
    int sum = accumulate(nums.begin(), nums.end(), 0);
    if(sum % 2 != 0) return false;
    return subsetSum(nums.size(), sum / 2, nums);
}

// ✅ Partition Set Into 2 Subsets With Min Absolute Sum Diff (DP-16)
// Problem: Find the minimum absolute difference between two subset sums.


int minSubsetSumDiff(vector<int>& nums) {
    int n = nums.size(), total = accumulate(nums.begin(), nums.end(), 0);
    vector<vector<bool>> dp(n+1, vector<bool>(total+1, false));
    for(int i=0; i<=n; i++) dp[i][0] = true;
    for(int i=1; i<=n; i++) {
        for(int j=0; j<=total; j++) {
            if(nums[i-1] <= j)
                dp[i][j] = dp[i-1][j] || dp[i-1][j - nums[i-1]];
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    int res = INT_MAX;
    for(int s1 = 0; s1 <= total/2; s1++) {
        if(dp[n][s1])
            res = min(res, abs(total - 2*s1));
    }
    return res;
}

// ✅ Count Subsets with Sum K (DP-17)
// Problem: Count the number of subsets with sum equal to target.


int countSubsets(vector<int>& nums, int target) {
    int n = nums.size();
    vector<vector<int>> dp(n+1, vector<int>(target+1, 0));
    for(int i=0; i<=n; i++) dp[i][0] = 1;
    for(int i=1; i<=n; i++) {
        for(int j=0; j<=target; j++) {
            if(nums[i-1] <= j)
                dp[i][j] = dp[i-1][j] + dp[i-1][j - nums[i-1]];
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][target];
}

// ✅ Count Partitions with Given Difference (DP-18)
// Problem: Count the number of ways to partition into two subsets with a given difference.


int countPartitions(vector<int>& nums, int diff) {
    int total = accumulate(nums.begin(), nums.end(), 0);
    if((total + diff) % 2 != 0) return 0;
    int target = (total + diff) / 2;
    return countSubsets(nums, target);
}


// ✅ Assign Cookies
// Problem: Assign cookies to children such that max children are content.


int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int i = 0, j = 0;
    while(i < g.size() && j < s.size()) {
        if(s[j] >= g[i]) i++;
        j++;
    }
    return i;
}


// ✅ Minimum Coins (DP-20)
// Problem: Find the minimum number of coins to make the target amount.


int coinChange(vector<int>& coins, int amount) {
    vector<int> dp(amount+1, 1e9);
    dp[0] = 0;
    for(int coin : coins) {
        for(int j=coin; j<=amount; j++) {
            dp[j] = min(dp[j], 1 + dp[j - coin]);
        }
    }
    return dp[amount] == 1e9 ? -1 : dp[amount];
}

// ✅ Target Sum (DP-21)
// Problem: Assign + or - signs to make sum equal to target.


int findTargetSumWays(vector<int>& nums, int target) {
    int total = accumulate(nums.begin(), nums.end(), 0);
    if((total + target) % 2 != 0 || total < abs(target)) return 0;
    int sum = (total + target) / 2;
    return countSubsets(nums, sum);
}

// ✅ Coin Change 2 (DP-22)
// Problem: Count combinations to make up the target amount.


int change(int amount, vector<int>& coins) {
    vector<int> dp(amount+1, 0);
    dp[0] = 1;
    for(int coin : coins) {
        for(int j=coin; j<=amount; j++) {
            dp[j] += dp[j - coin];
        }
    }
    return dp[amount];
}

// ✅ Unbounded Knapsack (DP-23)
// Problem: Items can be taken multiple times to maximize value.


int unboundedKnapsack(int n, int w, vector<int>& wt, vector<int>& val) {
    vector<int> dp(w+1, 0);
    for(int j=0; j<=w; j++) {
        for(int i=0; i<n; i++) {
            if(wt[i] <= j)
                dp[j] = max(dp[j], val[i] + dp[j - wt[i]]);
        }
    }
    return dp[w];
}

// ✅ Rod Cutting Problem (DP-24)
// Problem: Cut the rod into pieces to maximize total price.


int cutRod(vector<int>& price, int n) {
    vector<int> dp(n+1, 0);
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            dp[i] = max(dp[i], price[j-1] + dp[i-j]);
        }
    }
    return dp[n];
}