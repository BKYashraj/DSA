class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = n-1;
        long long finalAns = 0;
        string ans;
        while (i <= j) {
            if(i == j) ans = to_string(nums[i]);
            else ans = to_string(nums[i])+to_string(nums[j]);
            finalAns += stoi(ans);
            i++;
            j--;
        }
        return finalAns;
    }
};
