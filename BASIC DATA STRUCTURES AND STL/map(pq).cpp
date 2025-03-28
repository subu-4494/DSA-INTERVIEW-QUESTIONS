// if we have a hashmap and we have to sort  the map according to its frequency '
// what optimal way we can think of??


#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[10]= {1, 7, 7 , 1 , 5 , 6, 2, 2, 5, 7};
    unordered_map<int,int> mpp;
    for(int i=0;i<10;i++) {
           mpp[arr[i]]++;
    }
   // this creates an hashmap we have to sort the according tpo frequency !!!!!!!!!!!!
   priority_queue<pair<int, int>> maxheap; // we use priority queue for sorting 
    
   for (auto &p : mpp) {
       maxheap.push({p.second, p.first}); // sorting on the basis of 2nd element(frequency element)
   }

      while ( !maxheap.empty()) {
       int a = maxheap.top().second;
       int b = maxheap.top().first;
         maxheap.pop();
        
      }
    return 0;
}