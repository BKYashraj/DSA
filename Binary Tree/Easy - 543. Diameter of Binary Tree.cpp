Method 1
class Solution {
public:
    int maxi = 0;
  
    int level(TreeNode* root){
        if(root == NULL) return 0;
        return 1 + max(level(root->left), level(root->right));
    }
  
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;
        int left = level(root->left);
        int right = level(root->right);
        maxi = max(maxi,left+right);
        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);
        return maxi;
    }
};

Method 2 ( Better for interviewer perspective )
class Solution {
public:
    int level(TreeNode* root){
        if(root == NULL) return 0;
        return 1 + max(level(root->left), level(root->right));
    }
    void helper(TreeNode* root, int &maxi){
        if(root == NULL) return;
        int left = level(root->left);
        int right = level(root->right);
        maxi = max(maxi,left+right);
        helper(root->left, maxi);
        helper(root->right, maxi);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi = 0;
        helper(root, maxi);
        return maxi;
    }
};
