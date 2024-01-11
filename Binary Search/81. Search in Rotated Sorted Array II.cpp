class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo = 0;
        int hi = nums.size()-1;
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(nums[mid] == target) return true;
              // Only add this 1 else if in preveous rotated sorted array 
              // because the low mid and high value is same in one test case
              // then we have to reduce our search space
            else if(nums[lo]==nums[mid] && nums[mid]==nums[hi]){
                hi--;
                lo++;
            }
            else if(nums[mid] >= nums[lo]){
                if(nums[lo] <= target && target <= nums[mid]) hi = mid-1;
                else lo = mid+1; 
            }
            else{
                if(target >= nums[mid] && target <= nums[hi]){
                    lo = mid+1;
                }
                else hi = mid-1;
            }  
        }
        return false;
    }
};
