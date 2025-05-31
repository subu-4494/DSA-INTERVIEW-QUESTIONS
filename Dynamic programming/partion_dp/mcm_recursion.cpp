#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int func(int i, int j, vector<int> &arr, vector<vector<int>> &dp) {
        if (i == j) return 0;
        if (dp[i][j] != -1) return dp[i][j];
        
        int mini = INT_MAX;
        for (int k = i; k < j; k++) {
            int steps = arr[i-1] * arr[k] * arr[j] + func(i, k, arr, dp) + func(k+1, j, arr, dp);
            if (steps < mini) mini = steps;
        }
        return dp[i][j] = mini;
    }

    int matrixMultiplication(vector<int> &arr) {     // tc O(n^3)
        int n = arr.size();                         // sc o(n^2)--> dp vector + o(n)-> auxiliary stack space
        vector<vector<int>> dp(n, vector<int>(n, -1));
        return func(1, n - 1, arr, dp);
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter number of matrices: ";
    cin >> n;

    // For n matrices, arr size = n+1, input dimensions
    vector<int> arr(n + 1);
    cout << "Enter dimensions: ";
    for (int i = 0; i <= n; i++) {
        cin >> arr[i];
    }

    int result = sol.matrixMultiplication(arr);
    cout << "Minimum number of multiplications is: " << result << endl;

    return 0;
}
