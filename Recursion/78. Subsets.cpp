class Solution {
public:
    void helper(vector<int> ans, vector<vector<int>> &finalAns, vector<int> &original, int idx){
        if(original.size() == idx) {
            finalAns.push_back(ans);
            return; 
        }

        helper(ans, finalAns, original, idx+1);
        ans.push_back(original[idx]);
        helper(ans, finalAns, original, idx+1);
    }
    vector<vector<int>> subsets(vector<int> &nums) {
        vector<vector<int>> finalAns;
        vector<int> ans;
        helper(ans, finalAns, nums, 0);
        return finalAns;
    }
};
