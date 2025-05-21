#include<bits/stdc++.h>
using namespace std;

class DisjointSet {
   vector<int> rank, parent;
   public: 
   DisjointSet(int n) {
      rank.resize(n+1,0);
      parent.resize(n+1);

      for(int i=0;i<=n;i++) 
      {
         parent[i] = i;
      }
   }   

   int findpar(int node) {
      if(node == parent[node]) return node;

      return parent[node] = findpar(parent[node]);
   }

   void unionbyrank(int u, int v) {
      int ulp_u = findpar(u);
      int ulp_v = findpar(v);

      if(ulp_u == ulp_v) return;  // return statement exits fully the function
      
      if(rank[ulp_u]< rank[ulp_v]) {
        parent[ulp_u] = ulp_v;
      }
      else if( rank[ulp_v] < rank[ulp_u]) {
        parent[ulp_v] = ulp_u;
      }
      else {
        parent[ulp_v] = ulp_u;
        rank[ulp_u] ++;
      }
   }


};

int main()
{
  DisjointSet ds(7);
  ds.unionbyrank(1,2);
  ds.unionbyrank(2,3);
  ds.unionbyrank(4,5);
  ds.unionbyrank(6,7);
  ds.unionbyrank(5,6);

   if(ds.findpar(3) == ds.findpar(7)) {
       cout<< "Same"<<endl;
   }
   else {
       cout<< "Not same \n";
   }

  ds.unionbyrank(3,7);
  if(ds.findpar(3) == ds.findpar(7)) {
    cout<< "Same"<<endl;
}
else {
    cout<< "Not same \n";
}
    return 0;
}