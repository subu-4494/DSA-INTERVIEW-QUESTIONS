//width of a binary treee or doing a indextion of each level of binary treee

class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if (root == nullptr) return 0;
        queue<tuple<TreeNode*,int, unsigned long long>> q; 
        vector<vector<unsigned long long>> v;
        q.push({root,0,0});
        while(!q.empty()) {
            auto [a,b,c] = q.front();
             q.pop();
              
                if (b >= v.size()) {                // index * 2 
                v.resize(b + 1); 
            }

             v[b].push_back(c);
           if(a->left) q.push({a->left,b+1,2*c});    // this 2*c and 2*c+1 did a indextion of nodes at certain level
          if(a->right)  q.push({a->right,b+1,2*c+1});
        }

       unsigned long long ans = 0 ;

       for( auto vec: v) {
        sort(vec.begin(),vec.end());
        ans = max(ans, vec.back()-vec[0]+1);
       }
        
      
       
       return ans;
    }
};