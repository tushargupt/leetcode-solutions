/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
      vector<vector<int>> result;
      if(!root)
      return result;
      queue<TreeNode*> q;
      q.push(root);
      while(!q.empty()){
        vector<int> v;
        int levelSize = q.size();
        for(int i=0; i<levelSize; i++){
            TreeNode* top = q.front();
            q.pop();
            v.push_back(top->val);
            if(top->left) q.push(top->left);
            if(top->right) q.push(top->right);
        }
        result.push_back(v);
      }
      return result;

    }
};