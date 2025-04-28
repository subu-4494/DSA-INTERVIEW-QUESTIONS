 // There is an m x n rectangular island that borders both the Pacific Ocean and Atlantic Ocean. 
// The Pacific Ocean touches the island's left and top edges, and the Atlantic Ocean touches the island's right
//  and bottom edges.

// The island is partitioned into a grid of square cells. 
// You are given an m x n integer matrix heights where heights[r][c] represents 
// the height above sea level of the cell at coordinate (r, c).

 // The island receives a lot of rain, and the rain water can flow to neighboring 
// cells directly north, south, east, and west if the neighboring cell's height is less than or
//  equal to the current cell's height. Water can flow from any cell adjacent to an ocean into the ocean.

 // Return a 2D list of grid coordinates result where result[i] = [ri, ci] denotes that rain water can
//  flow from cell (ri, ci) to both the Pacific and Atlantic oceans.


// reverse logic is applied

// Steps to solve

// Create a set of co-ordinates from where we can reach pacific ocean. lets call it P_Set.
// Create a set of co-ordinates from where we can reach atlantic ocean. lets call it A_Set
// Our answer would be intersection of A_Set and P_Set
// Calculate P_Set

// Add all the boundary co-ordiates to the set along the pacific ocean
// Perform BFS to add to the set if curr height > parent height.


#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
            
            int n = heights.size();
            int m = heights[0].size();
            vector<vector<int>> vis(n, vector<int> (m,0));
            vector<vector<int>> atlantic(n, vector<int> (m,0));
    
            vector<int> drow = {-1,1,0,0};
            vector<int> dcol = {0,0,1,-1};
    
           queue<pair<int,int>> pq;
            for(int i=0;i<m;i++) {
                pq.push({0,i});
              //  vis[0][i]=1;
            }
    
            for(int i=0;i<n;i++) {
                pq.push({i,0});
              //  vis[i][0]=1;
            }
    
            queue<pair<int,int>> aq;
    
               for(int i=0;i<n;i++) 
               {
                aq.push({i,m-1});
               }
    
            for(int i=0;i<m;i++) 
            {
                aq.push({n-1,i});
            }
    
            while(!pq.empty()) {
                auto a = pq.front();
                pq.pop();
                vis[a.first][a.second]=1;
                
    
                for(int i=0;i<4;i++) {
                    int x = a.first + drow[i];
                    int y = a.second + dcol[i];
    
                    if(x>= 0 && x<n && y>=0 && y<m && vis[x][y]==0 && heights[x][y]>=heights[a.first][a.second]) {
    
                        pq.push({x,y});
                        vis[x][y]=1;
                    }
                }
            }
          
           vector<vector<int>> ans;
    
             while(!aq.empty()) {
                auto a = aq.front();
                aq.pop();
                atlantic[a.first][a.second]=1;
    
                for(int i=0;i<4;i++) {
                    int x = a.first + drow[i];
                    int y = a.second + dcol[i];
    
                    if(x>= 0 && x<n && y>=0 && y<m && atlantic[x][y]==0 && heights[x][y]>=heights[a.first][a.second] ) {
    
                        atlantic[x][y]=1;
                        aq.push({x,y});
                    }
                }
            } 
    
            for(int i=0;i<n;i++) {
                for(int j=0;j<m;j++) {
                    if(vis[i][j]==1 && atlantic[i][j]==1) {
                        ans.push_back({i,j});
                    }
                }
            }
          
          return ans;
    
        }
    };