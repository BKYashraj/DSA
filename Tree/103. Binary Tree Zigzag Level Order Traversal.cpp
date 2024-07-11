class Solution {
public:
    int height(TreeNode* root){
        if(root == NULL) return 0;
        return 1 + max(height(root->left),height(root->right));
    }
    void LtoR(TreeNode* root,vector<int>&v,int level,int current){
        if(root == NULL) return;
        if(level == current){
            v.push_back(root->val);
            return;
        }
        LtoR(root->left,v,level,current+1);
        LtoR(root->right,v,level,current+1);
    }
    void RtoL(TreeNode* root,vector<int>&v,int level,int current){
        if(root == NULL) return;
        if(level == current){
            v.push_back(root->val);
            return;
        }
        RtoL(root->right,v,level,current+1);
        RtoL(root->left,v,level,current+1);
    }
    void lOrder(TreeNode* root,vector<vector<int>> &ans){
        int level = height(root);
        for(int i=1;i<=level;i++){
            vector<int>v;
            if(i%2 != 0) LtoR(root,v,i,1);
            else RtoL(root,v,i,1);
            ans.push_back(v);
        }
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        lOrder(root,ans);
        return ans;
    }
};
