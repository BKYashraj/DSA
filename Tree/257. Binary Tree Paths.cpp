class Solution {
public:
    void helper(TreeNode* root,vector<string>&ans, string str){
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL){
            str = str+to_string(root->val);
            ans.push_back(str);
            return;  // Most IMP
        } 
        helper(root->left,ans,str+to_string(root->val)+"->");
        helper(root->right,ans,str+to_string(root->val)+"->");
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string str = "";
        vector<string>ans;
        helper(root,ans,str);
        return ans;
    }
};
