class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int, int>t;
        for(int i=0;i<nums.size();i++){
            int rem = target - nums[i];
            if(t.find(rem)!=t.end()){
                ans.push_back(t[rem]);
                ans.push_back(i);
            }
            else t[nums[i]] = i;
        }
        return ans;
    }
};
