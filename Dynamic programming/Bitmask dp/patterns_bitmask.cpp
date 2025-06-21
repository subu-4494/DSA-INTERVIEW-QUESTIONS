// BITMASK DYNAMIC PROGRAMMING PATTERNS
// Author: Sourabh Roy
// Date: June 2025
// Purpose: All important bitmask-based problems with logic + code + dry run

#include <bits/stdc++.h>
using namespace std;

//------------------------------------------------------------
// 1. Partition to K Equal Sum Subsets
//------------------------------------------------------------
/*
Logic:
- Try to divide array into k subsets, each summing to target = total / k
- Use a bitmask to mark picked elements
- Recursively fill each bucket with allowed elements
- Memoize using mask to avoid re-computation
*/
bool partitionFunc(int bucket, int currSum, int target, int k, vector<int>& nums, int mask, int n, unordered_map<int, bool>& dp) {
    if (bucket == k + 1) return true;
    if (dp.count(mask)) return dp[mask];
    if (currSum > target) return false;
    if (currSum == target) return dp[mask] = partitionFunc(bucket + 1, 0, target, k, nums, mask, n, dp);

    for (int i = 0; i < n; i++) {
        if ((mask & (1 << i)) != 0 || currSum + nums[i] > target) continue;
        int newMask = mask | (1 << i);
        if (partitionFunc(bucket, currSum + nums[i], target, k, nums, newMask, n, dp))
            return dp[mask] = true;
        if (currSum == 0) break; // pruning
    }
    return dp[mask] = false;
}

void partitionToKEqualSum() {
    vector<int> nums = {4, 3, 2, 3, 5, 2, 1};
    int k = 4;
    int total = accumulate(nums.begin(), nums.end(), 0);
    if (total % k != 0) { cout << "False\n"; return; }
    int target = total / k;
    sort(nums.rbegin(), nums.rend());
    if (nums[0] > target) { cout << "False\n"; return; }
    unordered_map<int, bool> dp;
    bool result = partitionFunc(1, 0, target, k, nums, 0, nums.size(), dp);
    cout << (result ? "True" : "False") << endl;
    // Dry Run: Explained above in prior discussion
}

//------------------------------------------------------------
// 2. Traveling Salesman Problem (TSP) using Bitmask
//------------------------------------------------------------
/*
Logic:
- dp[mask][pos] = min cost to visit remaining cities from pos
- Try each unvisited city and take min
- mask tracks visited cities
*/
int tsp(int mask, int pos, vector<vector<int>>& dist, vector<vector<int>>& dp) {
    int n = dist.size();
    if (mask == (1 << n) - 1) return dist[pos][0];
    if (dp[mask][pos] != -1) return dp[mask][pos];

    int ans = INT_MAX;
    for (int city = 0; city < n; city++) {
        if (!(mask & (1 << city))) {
            int cost = dist[pos][city] + tsp(mask | (1 << city), city, dist, dp);
            ans = min(ans, cost);
        }
    }
    return dp[mask][pos] = ans;
}

void solveTSP() {
    vector<vector<int>> dist = {{0, 10, 15, 20},
                                {10, 0, 35, 25},
                                {15, 35, 0, 30},
                                {20, 25, 30, 0}};
    int n = dist.size();
    vector<vector<int>> dp(1 << n, vector<int>(n, -1));
    cout << tsp(1, 0, dist, dp) << endl;
    // Dry Run:
    // mask = 0001, pos = 0
    // Try going to cities 1,2,3 and recurse
}

//------------------------------------------------------------
// 3. Max Product of Length of Two Non-overlapping Palindromic Subsequences
//------------------------------------------------------------
/*
Logic:
- Generate all subsequences using bitmask
- Check if subsequence is palindrome
- Store (mask, length) pairs
- For all pairs where masks don't overlap (mask1 & mask2 == 0), track max product
*/
bool isPalindrome(string& s) {
    int l = 0, r = s.size() - 1;
    while (l < r) if (s[l++] != s[r--]) return false;
    return true;
}

void maxPalindromeProduct() {
    string s = "leetcodecom";
    int n = s.size();
    vector<pair<int, int>> palinSubs;

    for (int mask = 1; mask < (1 << n); mask++) {
        string temp = "";
        for (int i = 0; i < n; i++) if (mask & (1 << i)) temp += s[i];
        if (isPalindrome(temp)) palinSubs.push_back({mask, (int)temp.size()});
    }

    int maxProd = 0;
    for (int i = 0; i < palinSubs.size(); i++) {
        for (int j = i + 1; j < palinSubs.size(); j++) {
            if ((palinSubs[i].first & palinSubs[j].first) == 0) {
                maxProd = max(maxProd, palinSubs[i].second * palinSubs[j].second);
            }
        }
    }
    cout << maxProd << endl;
    // Dry Run:
    // Try mask 00101101 → picks some indices → check if palindrome
}

//------------------------------------------------------------
// Main
//------------------------------------------------------------
int main() {
    cout << "--- Partition to K Equal Sum Subsets ---\n";
    partitionToKEqualSum();

    cout << "--- Traveling Salesman Problem ---\n";
    solveTSP();

    cout << "--- Max Product of Non-Overlapping Palindromic Subsequences ---\n";
    maxPalindromeProduct();

    return 0;
}
