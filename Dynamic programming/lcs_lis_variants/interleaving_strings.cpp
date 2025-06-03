/*
 * Problem: Interleaving String
 * ----------------------------------------
 * Given three strings s1, s2, and s3, determine whether s3 is formed by an interleaving of s1 and s2.
 * 
 * Definition of Interleaving:
 * A string s3 is considered an interleaving of s1 and s2 if it contains all the characters of s1 and s2,
 * and the order of characters in s1 and s2 is preserved in s3.
 * 
 * Conditions:
 * 1. Characters from s1 must appear in the same order in s3.
 * 2. Characters from s2 must appear in the same order in s3.
 * 3. Length of s3 must be equal to length of s1 + length of s2.
 * 
 * Example:
 * Input: s1 = "abc", s2 = "def", s3 = "adbcef"
 * Output: true
 * Explanation: We can interleave s1 and s2 as "a" + "d" + "b" + "c" + "e" + "f" = "adbcef"
 * 
 * Approach: Recursive + Memoization (Top-Down Dynamic Programming)
 * ---------------------------------------------------------------
 * - We use recursion to try to build s3 using characters from s1 and s2.
 * - At each index, we check if the current character in s3 matches with the current character in s1 or s2.
 * - We move forward accordingly, trying both possibilities.
 * - To avoid recomputation, we store intermediate results using a 2D dp table.
 *   dp[i][j] represents whether s3[k] can be formed using s1[i:] and s2[j:], where k = i + j.
 * 
 * Time Complexity: O(m * n), where m = s1.length(), n = s2.length()
 * Space Complexity: O(m * n) for the memoization table
 */

#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Helper function for recursion with memoization
bool isInterleaveHelper(string& s1, string& s2, string& s3, int i, int j, vector<vector<int>>& dp) {
    if (i == s1.length() && j == s2.length()) {
        return true; // All characters used
    }

    if (dp[i][j] != -1) {
        return dp[i][j]; // Already computed
    }

    int k = i + j; // Current index in s3
    bool takeS1 = false, takeS2 = false;

    if (i < s1.length() && s1[i] == s3[k]) {
        takeS1 = isInterleaveHelper(s1, s2, s3, i + 1, j, dp);
    }

    if (j < s2.length() && s2[j] == s3[k]) {
        takeS2 = isInterleaveHelper(s1, s2, s3, i, j + 1, dp);
    }

    return dp[i][j] = (takeS1 || takeS2);
}

// Main function to check interleaving
bool isInterleave(string s1, string s2, string s3) {
    if (s1.length() + s2.length() != s3.length()) {
        return false;
    }

    int m = s1.length(), n = s2.length();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));

    return isInterleaveHelper(s1, s2, s3, 0, 0, dp);
}

// Sample test
int main() {
    string s1 = "abc";
    string s2 = "def";
    string s3 = "adbcef";

    if (isInterleave(s1, s2, s3)) {
        cout << "True: s3 is an interleaving of s1 and s2" << endl;
    } else {
        cout << "False: s3 is NOT an interleaving of s1 and s2" << endl;
    }

    return 0;
}
