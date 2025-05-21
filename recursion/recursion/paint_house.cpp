//problem statement   🔹 Problem: Paint House
//You are given an n x 3 matrix costs where costs[i][j] represents the cost 
//of painting the i-th house with color j (j = 0 for red, 1 for blue, 2 for green).

//You have to paint all the houses such that no two adjacent houses have the same color.
//Return the minimum total cost to paint all houses.

#include<bits/stdc++.h>
using namespace std;

int recur(int i ,  int prev,vector<vector<int>> &cost) 
{
    int n = cost.size();
    int z = INT_MAX;
    if(i==n) {
        return 0;
    }
  
            for(int j = 0; j<3;j++) {
                if(prev!=j)  
                {
                    z = min(z, cost[i][j] + recur(i+1,j,cost));
                }
            }
    

    return z;
}

int main() {
      
    vector<vector<int>> cost = {
        {17, 2, 9},
        {1, 16, 0},
        {1, 3, 19}
    };

    int  a = recur(0,0,cost);
    

    cout<< a;
    return 0;
}


/*


\#include\<bits/stdc++.h>
using namespace std;

int recur(int i , int curr, int prev,vector\<vector<int>> \&cost, int ans)
{
int n = cost.size();
int z = INT\_MAX;
if(i==n) {
return ans;
}
if(prev==-1 || curr!=prev)
{
for(int j = 0; j<3;j++) {
z = min(z, recur(i+1,j,curr,cost, ans+ cost\[i]\[curr]));
}
}

```
return z;
```

}

int main() {

```
vector<vector<int>> cost = {
    {17, 2, 9},
    {1, 16, 0},
    {1, 3, 19}
};

int  a = recur(0,0,-1,cost,0);
int b =  recur(0,1,-1,cost,0);
int c =  recur(0,2,-1,cost,0);

cout<< min(a,min(b,c));
return 0;


}  



*/