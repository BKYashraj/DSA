class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ans = 0;
        for(auto it : nums){
            ans ^= it;
        }
        int fAns = ans ^ k;
        
        int count = 0;
        while(fAns !=0){
            fAns = fAns & (fAns - 1);
            count++;
        }
        return count;

        // return __builtin_popcount(fAns);
    }
};
