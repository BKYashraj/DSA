class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL) return true;
        if(p==NULL || q==NULL) return false;

        if(p->val != q->val) return false;

        bool rightans = isSameTree(p->left, q->left);
        if(rightans == false) return false;

        bool leftans = isSameTree(p->right, q->right);
        if(leftans == false) return false;
        
        return true;
    }
};
