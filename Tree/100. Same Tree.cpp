class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // Base Cases
        if(p==NULL && q==NULL) return true;
        if(p==NULL || q==NULL) return false;
        
        //Condition 1
        if(p->val != q->val) return false;

        //Condition 2
        bool leftAns = isSameTree(p->left,q->left);
        if(leftAns == false) return false;

        //Condition 3
        bool RightAns = isSameTree(p->right,q->right);
        if(RightAns == false) return false;

        return true;
    }
};
