class Solution {
public:
    bool helper(TreeNode* lefts, TreeNode* rights){
        if(lefts == NULL && rights == NULL) return true;
        if(lefts == NULL || rights == NULL) return false;
        if(lefts->val != rights->val) return false;
        
        return helper(lefts->left,rights->right) && helper(lefts->right,rights->left); // Changed this Condition Below
    }
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        TreeNode* lefts = root->left;
        TreeNode* rights = root->right;
        return helper(lefts,rights);
    }
};

-----------------OR------------------
class Solution {
public:
    bool helper(TreeNode* lefts, TreeNode* rights){
        if(lefts == NULL && rights == NULL) return true;
        if(lefts == NULL || rights == NULL) return false;
        if(lefts->val != rights->val) return false;
      
        bool leftAns = helper(lefts->left,rights->right);
        if(leftAns != true) return false;

        bool RightAns = helper(lefts->right,rights->left);
        if(RightAns != true) return false;

        return true;
    }
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        TreeNode* lefts = root->left;
        TreeNode* rights = root->right;
        return helper(lefts,rights);
    }
};

-----------------OR------------------
    
class Solution {
public:
    bool helper(TreeNode* p, TreeNode* q){
        if(!p && !q) return true;
        if(!p || !q) return false;
        if(p->val == q->val && helper(p->left,q->right) && helper(p->right,q->left)) return true;
        else return false;
    }
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        return helper(root->left,root->right);
    }
};
