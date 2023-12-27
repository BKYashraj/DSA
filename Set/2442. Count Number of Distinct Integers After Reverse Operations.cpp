class Solution {
public:
    int reverse(int ele){
        int ans = 0;
        while(ele > 0){
            int r = ele % 10;
            ans = ans * 10 + r;
            ele = ele/10;
        }
        return ans;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> v;
        for(int i=0;i<n;i++){
            v.insert(nums[i]);
            v.insert(reverse(nums[i]));
        }
        return v.size();
    }
};
