#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
    bool func(unordered_map<char, int>& mpp, int k) {
        return mpp['a'] >= k && mpp['b'] >= k && mpp['c'] >= k;
    }

public:
    int takeCharacters(string s, int k) {
        int n = s.length();
        unordered_map<char, int> mpp;

        if (k == 0) return 0;
        if (n < 3 * k) return -1;

        for (int i = 0; i < n; i++) {
            mpp[s[i]]++;
        }

        if (mpp['a'] < k || mpp['b'] < k || mpp['c'] < k) {
            return -1;
        }

        int ans = n;
        int i = n, j = n;

        while (i > 0 && j > 0) {
            j--;
            mpp[s[j]]--;
            if (func(mpp, k)) {
                ans = min(ans, n - (i - j));
            } else {
                i--;
                mpp[s[i]]++;
            }
        }
        return ans;
    }
};

int main() {
    string s;
    int k;

    cout << "Enter the string: ";
    cin >> s;
    cout << "Enter the value of k: ";
    cin >> k;

    // Create an object of the Solution class
    Solution solution;
    // Call the takeCharacters method
    int result = solution.takeCharacters(s, k);

    cout << "Result: " << result << endl;

    return 0;
}
