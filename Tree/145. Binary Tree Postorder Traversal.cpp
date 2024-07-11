----------- Recursive Method ------------
class Solution {
public:
    void postorder(TreeNode* root, vector<int>&ans){
        if(root == NULL) return;
        postorder(root->left, ans);
        postorder(root->right, ans);
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        postorder(root,ans);
        return ans;
    }
};


---------- Iterative Method -----------------

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        stack<TreeNode*>st;
        if(root != NULL) st.push(root);
        while(st.size() > 0){
            TreeNode* ele = st.top();
            st.pop();
            ans.push_back(ele->val);
            if(ele->left != NULL) st.push(ele->left);
            if(ele->right != NULL) st.push(ele->right);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
