/*
 * 🧩 Problem: Minimum Steps to Reach Target by a Knight
 * -----------------------------------------------------
 * On an N x N chessboard, a Knight is placed at a starting position (kx, ky),
 * and we are given a target position (tx, ty).
 *
 * The task is to determine the minimum number of steps required by the Knight
 * to reach the target position using valid Knight moves.
 *
 * Return the minimum number of steps. If unreachable, return -1.
 *
 * Constraints:
 * - 1 <= kx, ky, tx, ty <= N
 * - 1 <= N <= 1000
 */

/*
 * ❓ Why Use BFS (Breadth-First Search)?
 * --------------------------------------
 * - Each move by the knight has equal cost (1 step).
 * - We need the shortest number of moves to reach the target.
 * - This makes it a classic shortest path problem on an unweighted graph,
 *   and BFS is optimal for such cases.
 */

/*
 * 🧠 Logic / Approach:
 * --------------------
 * - Use BFS to explore the knight’s moves level by level.
 * - Track visited positions with a 2D visited matrix to prevent cycles.
 * - When the knight reaches the target cell, return the number of steps.
 * - Consider all 8 possible knight movements from the current cell.
 */

#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

class Solution {
public:
    int minStepToReachTarget(vector<int>& KnightPos, vector<int>& TargetPos, int N) {
        int tx = TargetPos[0], ty = TargetPos[1];
        int kx = KnightPos[0], ky = KnightPos[1];

        if (kx == tx && ky == ty) return 0;

        vector<vector<int>> vis(N + 1, vector<int>(N + 1, 0));
        queue<pair<int, pair<int, int>>> q;

        q.push({0, {kx, ky}});
        vis[kx][ky] = 1;

        vector<int> dirx = {-2, -2, 2, 2, 1, 1, -1, -1};
        vector<int> diry = {-1, 1, -1, 1, 2, -2, -2, 2};

        int ans = INT_MAX;

        while (!q.empty()) {
            auto a = q.front();
            q.pop();

            for (int i = 0; i < 8; i++) {
                int nx = a.second.first + dirx[i];
                int ny = a.second.second + diry[i];

                if (nx >= 1 && ny >= 1 && nx <= N && ny <= N && vis[nx][ny] == 0) {
                    vis[nx][ny] = 1;
                    int c = a.first + 1;

                    if (nx == tx && ny == ty) {
                        ans = min(ans, c);
                    }
                    q.push({c, {nx, ny}});
                }
            }
        }

        return (ans == INT_MAX) ? -1 : ans;
    }
};