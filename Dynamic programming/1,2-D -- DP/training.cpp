  // you have a grid of n*3 where in each row you have a points of three task you have to maximise your points sum , but you
  // do not choose task which you choose in previous row means for two consecutive rows you can not choose one task ??? 


  /// logic ::: choose maximum points but store what you choose in previous row and check you choose other task pointss



  /// code::::::::::::::::::::::

  // i is for row and j is for storing the index of element what you choose previously ( so, started with -1)


  //{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  int func(int i, int j,vector<vector<int>>& arr,int n,vector<vector<int>> &dp)
  {
      if(i==n)
      {
         return 0; 
      }
      
      if(j!=-1 && dp[i][j]!=-1) return dp[i][j];   // main logic start here 
        int a = 0, b = 0, c = 0;
      
    if(j!=0 )  a= arr[i][0] + func(i+1,0,arr,n,dp);
      
     if(j!=1 )  b= arr[i][1] + func(i+1,1,arr,n,dp);
        
      if(j!=2 ) c= arr[i][2] + func(i+1,2,arr,n,dp);
      
       if (j == -1) { 
            return max({a, b, c});
        }
      
      return dp[i][j]=max({a,b,c});
  }
    int maximumPoints(vector<vector<int>>& arr) {
        // Code here
        int n = arr.size();
        
        vector<vector<int>> dp(n, vector<int>(3,-1));
        return func(0,-1,arr,n,dp);
        
       
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> arr;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            arr.push_back(temp);
        }

        Solution obj;
        cout << obj.maximumPoints(arr) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends