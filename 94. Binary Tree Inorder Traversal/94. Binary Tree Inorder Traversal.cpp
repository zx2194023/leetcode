/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> stack;
        
        if(!root)
            return res;
        
        while(root || !stack.empty()){
            while(root){
                stack.push(root);
                root = root->left;
            }
            
            if(!stack.empty()){
                root = stack.top();
                stack.pop();
                res.push_back(root->val);
                root = root->right;
            }
        }
        
        return res;
        
    }
};