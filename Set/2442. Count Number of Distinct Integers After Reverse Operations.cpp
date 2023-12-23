class Solution {
public:
    int reverse(int n){
        int ans = 0;
        while(n>0){
           int r = n%10;
            ans = ans*10+r;
            n = n/10;
        }
        return ans;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> y;
        for(int i=0;i<n;i++){
            y.insert(nums[i]);
            y.insert(reverse(nums[i]));
        }
        return y.size();
    }
};
