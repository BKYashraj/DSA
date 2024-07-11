 ------------- Recursive Method --------------
class Solution {
public:
    void helper(TreeNode* root, vector<int>&ans){
        if(root == NULL) return;
        ans.push_back(root->val);
        helper(root->left,ans);
        helper(root->right,ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        helper(root,ans);
        return ans;
    }
};

------------- Iterative Method --------------
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        stack<TreeNode*>s;
        if(root != NULL) s.push(root); // This is important step
        while(!s.empty()){
            TreeNode* ele = s.top();
            s.pop();
            ans.push_back(ele->val);
            if(ele->right != NULL) s.push(ele->right);
            if(ele->left != NULL) s.push(ele->left);
        }
        return ans;
    }
};
