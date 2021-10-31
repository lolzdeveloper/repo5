class Solution {
public:
    vector<int> res;
    
    void fill(TreeNode* root){
        if(!root) return;
        fill(root->left);
        fill(root->right);
        res.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        fill(root);
        return res;
    }
};