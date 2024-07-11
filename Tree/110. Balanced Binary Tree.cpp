class Solution {
public:
    int height(TreeNode* root){
        if(root == NULL) return 0;
        return 1 + max(height(root->left),height(root->right));
    }
    bool helper(TreeNode* root){
        if(root == NULL) return true;
        int left = height(root->left);
        int right = height(root->right);
        if(abs(left-right) >= 2 ) return false;
        
        // return helper(root->left) && helper(root->right);

        // OR

        bool leftAns = helper(root->left);
        if(!leftAns) return false;

        bool rightAns = helper(root->right);
        if(!rightAns) return false;

        return true;
    }
    bool isBalanced(TreeNode* root) {
        return helper(root);
    }
};
