
#include<iostream>
using namespace std;
void solve(int i, int j, vector<vector<int>> &maze, int n, vector<string> &ans, string path, vector<vector<int>> &visited) {
    if (i == n-1 && j == n-1) {
        ans.push_back(path);
        return;
    }

    string dir = "DLRU";         // Direction characters
    int di[] = {+1, 0, 0, -1};    // D, L, R, U (row movement)
    int dj[] = {0, -1, +1, 0};    // D, L, R, U (col movement)

    for (int idx = 0; idx < 4; idx++) {
        int nexti = i + di[idx];
        int nextj = j + dj[idx];

        if (nexti >= 0 && nextj >= 0 && nexti < n && nextj < n 
            && maze[nexti][nextj] == 1 && visited[nexti][nextj] == 0) {
            
            visited[i][j] = 1;                 // 1. Make the move (mark as visited)
            solve(nexti, nextj, maze, n, ans, path + dir[idx], visited);  // 2. Explore
            visited[i][j] = 0;                 // 3. Undo move (unmark as visited)
        }
    }
}
