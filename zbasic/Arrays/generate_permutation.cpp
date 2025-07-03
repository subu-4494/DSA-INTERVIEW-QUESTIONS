#include <bits/stdc++.h>
using namespace std;

/*
---------------------------------------------
📝 Problem: Add Permutation

Given a permutation P of numbers from 1 to N (1-indexed), we define an array A as:
    A[i] = P[i] + i

You need to construct a permutation P such that the number of distinct elements in A is exactly K.

---------------------------------------------
🔍 Observations:

- A[i] = P[i] + i mixes permutation and index.
- We must control how many distinct values appear in A.
- Maximum distinct values in A = N (when all P[i]+i are unique).
- Minimum = 1 (when all A[i] values are equal).

---------------------------------------------
🎯 Goal:

Construct a permutation P such that:
    f(P) = Number of distinct elements in A = K

---------------------------------------------
🧠 Key Insight & Strategy:

We want to make exactly K distinct values in A.

To do this:
1. We make the **first (n - k + 1)** values in A **equal** to force a single repeated value.
2. We make the remaining **(k - 1)** values in A **distinct**.

Let z = (n - k + 1)

Then:
- For i = 1 to z:
    P[i] = z + 1 - i   → this reverses the numbers
    A[i] = P[i] + i = z + 1 (same value for all i)

- For i = z+1 to n:
    P[i] = i           → A[i] = i + i = 2*i → all unique and increasing

This gives us:
- 1 repeated value in A from first z positions
- (k - 1) unique values from the rest

Total = K distinct values ✅

---------------------------------------------
🧪 Example:

Input: N = 6, K = 3
Then:
    z = 6 - 3 + 1 = 4
    First 4 values in P = [4, 3, 2, 1] → A = [5, 5, 5, 5]
    Next 2 values = [5, 6] → A = [10, 12]
    A = [5, 5, 5, 5, 10, 12] → 3 distinct values

Hence, satisfies the condition.

---------------------------------------------
✅ Time Complexity:

Each test case runs in O(N), since we loop over the array twice.

Now, let’s implement the logic.
*/

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n, k;
        cin >> n >> k;

        // Step 1: Calculate how many values in A should be forced to be same
        int z = n - k + 1;

        // Create the permutation P of size n (1-indexed, so size n+1)
        vector<int> v(n + 1); // v[i] will store P[i]

        // Step 2: First z values of P are assigned in reverse order to make A[i] = z + 1 (constant)
        for (int i = 1; i <= z; i++) {
            v[i] = z + 1 - i;
        }

        // Step 3: Remaining values of P are filled normally to ensure A[i] is unique
        for (int j = z + 1; j <= n; j++) {
            v[j] = j;
        }

        // Step 4: Print the permutation P (ignoring index 0)
        for (int i = 1; i <= n; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
