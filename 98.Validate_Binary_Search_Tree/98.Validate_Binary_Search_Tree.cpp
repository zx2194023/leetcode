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
    bool isValidBST(TreeNode* root) {
        return valid(root, nullptr, nullptr);
    }
private:
    bool valid(TreeNode* root, int* min_val, int* max_val) {
        if (!root) 
            return true;
        
        if(min_val == nullptr && max_val == nullptr)
             return valid(root->left, min_val, &root->val) && valid(root->right, &root->val, max_val);
        
        if(min_val != nullptr && max_val == nullptr){
            if (root->val > *min_val)
                return valid(root->left, min_val, &root->val) && valid(root->right, &root->val, max_val);
        }
        
        if(min_val == nullptr && max_val != nullptr){
            if (root->val < *max_val)
                return valid(root->left, min_val, &root->val) && valid(root->right, &root->val, max_val);
        }
        
        if(min_val != nullptr && max_val != nullptr){
            if (root->val > *min_val && root->val < *max_val)
                return valid(root->left, min_val, &root->val) && valid(root->right, &root->val, max_val);
        }
            
        return false;
    }
};