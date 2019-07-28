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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (!root) 
            return new TreeNode(val);
        
        TreeNode* tree = root;
        
        while(true){
            if(tree->val > val){
                if(!tree->left){
                    tree->left = new TreeNode(val); 
                    break;
                }
                
                tree = tree->left;
            }else{
                if(!tree->right){
                    tree->right = new TreeNode(val); 
                    break;
                }
                
                tree = tree->right;
            }
        }

        return root;
    }
};