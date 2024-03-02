class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mpp;
        for(auto it : nums) mpp[it]++;
        int max = 0;
        for(auto it : mpp){
            if(it.second > max) max = it.second;
        }
        int count = 0;
        for(auto it : mpp){
            if(it.second == max) count++;
        }
        return count * max;
    }
};
