class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(), nums.end());
    }
};   

OR

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot = -1;
      // Find the index of pivot
        int n = nums.size();
        for(int i = n-2;i>=0;i--){
            if(nums[i] < nums[i+1]){
                pivot = i;
                break;
            }
        }
        // If we not get pivot
        if(pivot == -1) return reverse(nums.begin(),nums.end());

        // If we get pivot
        sort(nums.begin()+pivot+1,nums.end());

        for(int i = pivot+1;i<n;i++){
            if(nums[i] > nums[pivot] ){
                swap(nums[pivot],nums[i]);
                break;
            }
        }
        return;
    }
};
