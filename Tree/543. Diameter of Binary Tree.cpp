class Solution {
public:
    int height(TreeNode* root){
        if(root == NULL) return 0;
        return 1 + max(height(root->left), height(root->right));
    }
    void helper(TreeNode* root, int &maxdia){
        if(root == NULL) return;
        int dia = height(root->left) + height(root->right);
        maxdia = max(maxdia,dia);
        helper(root->left,maxdia);
        helper(root->right,maxdia);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxdia = 0;
        helper(root,maxdia);
        return maxdia;
    }
};
