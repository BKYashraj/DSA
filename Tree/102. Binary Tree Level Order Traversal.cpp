class Solution {
public:
    int flevel(TreeNode* root){
        if(root == NULL) return 0;
        return 1 + max( flevel(root->left), flevel(root->right) );
    }
    void nthlevel(TreeNode* root, vector<int>&v,int level, int target){
        if(root == NULL) return;

        if(level == target){
            v.push_back(root->val);
            return;
        } 
        nthlevel(root->left,v,level+1,target);
        nthlevel(root->right,v,level+1,target);
    }
    void lOrder(TreeNode* root, vector<vector<int>>&ans){
        int n = flevel(root);
        for(int i=1;i<=n;i++){
            vector<int>v;
            nthlevel(root,v,1,i);
            ans.push_back(v);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        lOrder(root,ans);
        return ans;
    }
};
