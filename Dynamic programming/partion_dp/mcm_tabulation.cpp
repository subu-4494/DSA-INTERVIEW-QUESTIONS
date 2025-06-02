#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int matrixMultiplication(vector<int> &arr) {
        int n = arr.size();
        vector<vector<int>> dp(n, vector<int>(n, 0));

        for (int i = n - 1; i >= 1; i--) {
            for (int j = i + 1; j < n; j++) {
                int mini = INT_MAX;
                for (int k = i; k < j; k++) {
                    int steps = arr[i - 1] * arr[k] * arr[j] + dp[i][k] + dp[k + 1][j];
                    if (steps < mini) mini = steps;
                }
                dp[i][j] = mini;
            }
        }
        return dp[1][n - 1];
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter number of matrices: ";
    cin >> n;

    vector<int> arr(n + 1);
    cout << "Enter dimensions: ";
    for (int i = 0; i <= n; i++) {
        cin >> arr[i];
    }

    int result = sol.matrixMultiplication(arr);
    cout << "Minimum number of multiplications is: " << result << endl;

    return 0;
}
