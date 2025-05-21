#include<bits/stdc++.h>
using namespace std;

class DisjointSet {
   vector<int> size, parent;
   public: 
   DisjointSet(int n) {
      size.resize(n+1,1);
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

   void unionbysize(int u, int v) {
      int ulp_u = findpar(u);
      int ulp_v = findpar(v);

      if(ulp_u == ulp_v) return;  // return statement exits fully the function
      if(size[ulp_u] < size[ulp_v]) {
        parent[ulp_u] = ulp_v;
        size[ulp_v] += size[ulp_u];
      }
      else {
        parent[ulp_v] = ulp_u;
        size[ulp_u] += size[ulp_v];
      }
   
   }


};

int main()
{
  DisjointSet ds(7);
  ds.unionbysize(1,2);
  ds.unionbysize(2,3);
  ds.unionbysize(4,5);
  ds.unionbysize(6,7);
  ds.unionbysize(5,6);

   if(ds.findpar(3) == ds.findpar(7)) {
       cout<< "Same"<<endl;
   }
   else {
       cout<< "Not same \n";
   }

  ds.unionbysize(3,7);
  if(ds.findpar(3) == ds.findpar(7)) {
    cout<< "Same"<<endl;
}
else {
    cout<< "Not same \n";
}
    return 0;
}